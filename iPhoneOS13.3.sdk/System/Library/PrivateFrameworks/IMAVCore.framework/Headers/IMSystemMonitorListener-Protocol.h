//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol IMSystemMonitorListener

@optional
- (void)systemDidEnterDataProtectionLock;
- (void)systemDidLeaveDataProtectionLock;
- (void)systemDidLeaveFirstDataProtectionLock;
- (void)systemScreenDidPowerDown;
- (void)systemScreenDidPowerUp;
- (void)systemDidUnlock;
- (void)systemDidLock;
- (void)systemDidLogout;
- (void)systemDidFastUserSwitchIn;
- (void)systemDidFastUserSwitchOut;
- (void)systemRestoreStateDidChange;
- (void)systemDidFinishMigration;
- (void)systemDidStopBackup;
- (void)systemDidStartBackup;
- (void)notificationCenterDidDisappear;
- (void)notificationCenterWillAppear;
- (void)systemApplicationDidResumeForEventsOnly;
- (void)systemApplicationDidSuspendForEventsOnly;
- (void)systemApplicationDidResume;
- (void)systemApplicationDidSuspend;
- (void)systemApplicationWillResignActive;
- (void)systemApplicationDidBecomeActive;
- (void)systemApplicationWillEnterForeground;
- (void)systemApplicationDidEnterBackground;
- (void)systemWillShutdown;
- (void)systemDidLeaveMemoryPressure;
- (void)systemDidEnterMemoryPressure;
- (void)systemDidWake;
- (void)systemWillSleep;
- (void)screenUnlocked;
- (void)screenLocked;
- (void)screenSaverDidStop;
- (void)screenSaverDidStart;
- (void)systemDidBecomeUnidle;
- (void)systemDidBecomeIdle;
@end

