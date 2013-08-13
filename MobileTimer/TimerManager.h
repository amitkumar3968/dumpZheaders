/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UILocalNotification, NSString;

@interface TimerManager : XXUnknownSuperclass {
	int _state;
	UILocalNotification* _notification;
	double _remainingTime;
}
@property(readonly, assign, nonatomic) double remainingTime;
@property(readonly, assign, nonatomic) double fireTime;
@property(readonly, assign, nonatomic) int state;
@property(readonly, assign, nonatomic) NSString* defaultSound;
@property(assign, nonatomic) double defaultDuration;
+(id)copyFetchScheduledNotification;
+(id)newNotificationAt:(double)at withSound:(id)sound;
+(BOOL)discardOldVersion;
+(BOOL)upgrade;
+(BOOL)isTimerNotification:(id)notification;
+(id)sharedManager;
-(void)changeSound:(id)sound;
-(BOOL)resume;
-(BOOL)pause;
-(BOOL)cancel;
-(void)scheduleAt:(double)at withSound:(id)sound;
-(void)reloadState;
// declared property getter: -(double)remainingTime;
// declared property getter: -(double)fireTime;
// declared property getter: -(int)state;
-(void)setDefaultSound:(id)sound;
// declared property getter: -(id)defaultSound;
// declared property setter: -(void)setDefaultDuration:(double)duration;
// declared property getter: -(double)defaultDuration;
@end
