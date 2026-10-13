package com.unsame.microband.notification

import org.junit.Assert.assertEquals
import org.junit.Assert.assertFalse
import org.junit.Assert.assertTrue
import org.junit.Test

class NotificationClassifierTest {
    @Test
    fun recognizesSupportedSources() {
        assertEquals(NotificationCategory.CALLS, NotificationClassifier.classify("com.google.android.dialer", "Phone", "call"))
        assertEquals(NotificationCategory.MESSAGES, NotificationClassifier.classify("com.google.android.apps.messaging", "Messages", "msg"))
        assertEquals(NotificationCategory.DISCORD, NotificationClassifier.classify("com.discord", "Discord", "msg"))
        assertEquals(NotificationCategory.GMAIL, NotificationClassifier.classify("com.google.android.gm", "Gmail", "email"))
        assertEquals(NotificationCategory.CALENDAR, NotificationClassifier.classify("com.google.android.calendar", "Calendar", "event"))
        assertEquals(NotificationCategory.OTHER, NotificationClassifier.classify("example.app", "Example", null))
    }

    @Test
    fun usesPlatformCategoriesForUnknownApps() {
        assertEquals(NotificationCategory.CALLS, NotificationClassifier.classify("example.tel", "Tel", "missed_call"))
        assertEquals(NotificationCategory.MESSAGES, NotificationClassifier.classify("example.chat", "Chat", null, isMessagingStyle = true))
        assertEquals(NotificationCategory.EMAIL, NotificationClassifier.classify("example.client", "Client", "email"))
        assertEquals(NotificationCategory.EMAIL, NotificationClassifier.classify("com.microsoft.office.outlook", "Outlook mail", null))
        assertEquals(NotificationCategory.CALENDAR, NotificationClassifier.classify("example.agenda", "Agenda", "event"))
    }

    @Test
    fun callKindPrefersPlatformSignals() {
        val c = NotificationClassifier
        assertEquals(BandNotificationKind.MISSED_CALL, c.callKind("missed_call", null, false, "", emptyList()))
        assertEquals(BandNotificationKind.INCOMING_CALL, c.callKind("call", NotificationClassifier.CALL_TYPE_INCOMING, false, "", emptyList()))
        assertEquals(BandNotificationKind.INCOMING_CALL, c.callKind("call", NotificationClassifier.CALL_TYPE_SCREENING, true, "", emptyList()))
        assertEquals(BandNotificationKind.ANSWERED_CALL, c.callKind("call", NotificationClassifier.CALL_TYPE_ONGOING, true, "", emptyList()))
    }

    @Test
    fun callKindFallsBackToEnglishAndFrenchKeywords() {
        val c = NotificationClassifier
        assertEquals(BandNotificationKind.MISSED_CALL, c.callKind("call", null, false, "Missed call", emptyList()))
        assertEquals(BandNotificationKind.MISSED_CALL, c.callKind("call", null, false, "Appel manqué", emptyList()))
        assertEquals(BandNotificationKind.VOICEMAIL, c.callKind("call", null, false, "Nouveau message de messagerie vocale", emptyList()))
        assertEquals(BandNotificationKind.INCOMING_CALL, c.callKind("call", null, true, "Appel entrant", emptyList()))
        assertEquals(BandNotificationKind.INCOMING_CALL, c.callKind("call", null, true, "Marie", listOf("Raccrocher", "Répondre")))
        assertEquals(BandNotificationKind.ANSWERED_CALL, c.callKind("call", null, true, "Marie", listOf("Raccrocher")))
        assertEquals(BandNotificationKind.MISSED_CALL, c.callKind("call", null, false, "Marie", emptyList()))
    }

    @Test
    fun emailIsKeptOffTheMessagesTile() {
        val c = NotificationClassifier
        assertEquals(BandNotificationKind.EMAIL, c.nonCallKind(NotificationCategory.GMAIL))
        assertEquals(BandNotificationKind.EMAIL, c.nonCallKind(NotificationCategory.EMAIL))
        assertEquals(BandNotificationKind.MESSAGE, c.nonCallKind(NotificationCategory.MESSAGES))
        assertEquals(BandNotificationKind.MESSAGE, c.nonCallKind(NotificationCategory.OTHER))
    }

    @Test
    fun filtersMediaPlaybackEvenWhenNotificationIsNotOngoing() {
        assertTrue(NotificationClassifier.isMediaPlayback("transport", false))
        assertTrue(NotificationClassifier.isMediaPlayback(null, true))
        assertFalse(NotificationClassifier.isMediaPlayback("msg", false))
    }
}
