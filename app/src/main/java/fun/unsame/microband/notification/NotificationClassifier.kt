package com.unsame.microband.notification

object NotificationClassifier {
    // Notification.CATEGORY_MISSED_CALL and Notification.EXTRA_CALL_TYPE / CallStyle.CALL_TYPE_* (API 31).
    private const val CATEGORY_MISSED_CALL = "missed_call"
    const val CALL_TYPE_INCOMING = 1
    const val CALL_TYPE_ONGOING = 2
    const val CALL_TYPE_SCREENING = 3

    fun classify(
        packageName: String,
        sourceLabel: String,
        androidCategory: String?,
        isMessagingStyle: Boolean = false,
    ): NotificationCategory {
        val packageLower = packageName.lowercase()
        val labelLower = sourceLabel.lowercase()
        return when {
            androidCategory == "call" || androidCategory == CATEGORY_MISSED_CALL ||
                "dialer" in packageLower || labelLower == "phone" -> NotificationCategory.CALLS
            "discord" in packageLower -> NotificationCategory.DISCORD
            packageLower == "com.google.android.gm" || labelLower == "gmail" -> NotificationCategory.GMAIL
            androidCategory == "event" || "calendar" in packageLower || "calendar" in labelLower -> NotificationCategory.CALENDAR
            androidCategory == "msg" || isMessagingStyle || "messag" in packageLower || "messag" in labelLower ||
                "whatsapp" in packageLower || "telegram" in packageLower || "signal" in packageLower -> NotificationCategory.MESSAGES
            androidCategory == "email" || "mail" in packageLower || "mail" in labelLower -> NotificationCategory.EMAIL
            else -> NotificationCategory.OTHER
        }
    }

    /** Email goes out as a pop-up so it never lands in (or bumps the counter of) the Band's Messages tile. */
    fun nonCallKind(category: NotificationCategory): BandNotificationKind = when (category) {
        NotificationCategory.GMAIL, NotificationCategory.EMAIL -> BandNotificationKind.EMAIL
        else -> BandNotificationKind.MESSAGE
    }

    /** Call type from platform signals first (category, CallStyle), then multilingual keywords as fallback. */
    fun callKind(
        androidCategory: String?,
        callStyleType: Int?,
        isOngoing: Boolean,
        text: String,
        actionTitles: List<String>,
    ): BandNotificationKind {
        if (androidCategory == CATEGORY_MISSED_CALL) return BandNotificationKind.MISSED_CALL
        when (callStyleType) {
            CALL_TYPE_INCOMING, CALL_TYPE_SCREENING -> return BandNotificationKind.INCOMING_CALL
            CALL_TYPE_ONGOING -> return BandNotificationKind.ANSWERED_CALL
        }
        val lower = text.lowercase()
        val actions = actionTitles.map { it.lowercase() }
        return when {
            VOICEMAIL_WORDS.any { it in lower } -> BandNotificationKind.VOICEMAIL
            MISSED_WORDS.any { it in lower } -> BandNotificationKind.MISSED_CALL
            isOngoing && (INCOMING_WORDS.any { it in lower } || actions.any { a -> ANSWER_WORDS.any { it in a } }) ->
                BandNotificationKind.INCOMING_CALL
            isOngoing -> BandNotificationKind.ANSWERED_CALL
            else -> BandNotificationKind.MISSED_CALL
        }
    }

    private val VOICEMAIL_WORDS = listOf("voicemail", "messagerie vocale", "répondeur")
    private val MISSED_WORDS = listOf("missed", "manqué", "manque")
    private val INCOMING_WORDS = listOf("incoming", "ringing", "entrant", "sonne")
    private val ANSWER_WORDS = listOf("answer", "accept", "répondre", "accepter", "décrocher")
}
