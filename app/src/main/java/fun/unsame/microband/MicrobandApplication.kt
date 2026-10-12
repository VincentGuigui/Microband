package com.unsame.microband

import android.app.Application
import android.content.ComponentName
import android.service.notification.NotificationListenerService
import androidx.core.app.NotificationManagerCompat
import com.unsame.microband.bluetooth.BandAssociationManager
import com.unsame.microband.bluetooth.BandConnectionManager
import com.unsame.microband.data.AppDatabase
import com.unsame.microband.data.MicrobandPreferences
import com.unsame.microband.notification.MicrobandNotificationListenerService

class MicrobandApplication : Application() {
    override fun onCreate() {
        super.onCreate()
        // After the process was killed, some OEMs leave notification access granted but the listener unbound.
        if (packageName in NotificationManagerCompat.getEnabledListenerPackages(this)) {
            runCatching {
                NotificationListenerService.requestRebind(
                    ComponentName(this, MicrobandNotificationListenerService::class.java),
                )
            }
        }
    }

    val preferences by lazy { MicrobandPreferences(this) }
    val database by lazy { AppDatabase.create(this) }
    val associationManager by lazy { BandAssociationManager(this, preferences) }
    val connectionManager by lazy {
        BandConnectionManager(
            application = this,
            packetLogDao = database.packetLogDao(),
            healthSnapshotDao = database.healthSnapshotDao(),
            healthDailyDao = database.healthDailyDao(),
            preferences = preferences,
        )
    }
}
