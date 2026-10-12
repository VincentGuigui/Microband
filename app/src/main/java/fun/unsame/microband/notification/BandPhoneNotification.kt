package com.unsame.microband.notification

import java.time.Instant

data class BandPhoneNotification(
    val notificationKey: String,
    val sourcePackage: String,
    val sourceLabel: String,
    val title: String?,
    val body: String?,
    val timestamp: Instant,
)

data class NotificationAppInfo(
    val packageName: String,
    val label: String,
    val notificationCount: Int = 0,
    val lastNotificationAt: Long = 0,
)

enum class BandNotificationKind {
    MESSAGE,
    INCOMING_CALL,
    ANSWERED_CALL,
    MISSED_CALL,
    HANGUP_CALL,
    VOICEMAIL,
}

enum class NotificationCategory(val preferenceKey: String, val label: String) {
    CALLS("calls", "Phone calls"),
    MESSAGES("messages", "Messages"),
    DISCORD("discord", "Discord"),
    GMAIL("gmail", "Gmail"),
    EMAIL("email", "Email"),
    CALENDAR("calendar", "Calendar"),
    OTHER("other", "Everything else"),
}
