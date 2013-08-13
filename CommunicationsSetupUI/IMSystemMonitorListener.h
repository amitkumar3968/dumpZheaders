/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */



@protocol IMSystemMonitorListener
@optional
-(void)systemDidEnterDataProtectionLock;
-(void)systemDidLeaveDataProtectionLock;
-(void)systemDidLeaveFirstDataProtectionLock;
-(void)systemScreenDidPowerDown;
-(void)systemScreenDidPowerUp;
-(void)systemDidUnlock;
-(void)systemDidLock;
-(void)systemDidLogout;
-(void)systemDidFastUserSwitchIn;
-(void)systemDidFastUserSwitchOut;
-(void)systemRestoreStateDidChange;
-(void)systemDidFinishMigration;
-(void)systemDidStopBackup;
-(void)systemDidStartBackup;
-(void)notificationCenterDidDisappear;
-(void)notificationCenterWillAppear;
-(void)systemApplicationDidResumeForEventsOnly;
-(void)systemApplicationDidSuspendForEventsOnly;
-(void)systemApplicationDidResume;
-(void)systemApplicationDidSuspend;
-(void)systemApplicationWillResignActive;
-(void)systemApplicationDidBecomeActive;
-(void)systemApplicationWillEnterForeground;
-(void)systemApplicationDidEnterBackground;
-(void)systemWillShutdown;
-(void)systemDidLeaveMemoryPressure;
-(void)systemDidEnterMemoryPressure;
-(void)systemDidWake;
-(void)systemWillSleep;
-(void)screenUnlocked;
-(void)screenLocked;
-(void)screenSaverDidStop;
-(void)screenSaverDidStart;
-(void)systemDidBecomeUnidle;
-(void)systemDidBecomeIdle;
@end

