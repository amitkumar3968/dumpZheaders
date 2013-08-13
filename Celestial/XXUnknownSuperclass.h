/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface XXUnknownSuperclass (NSObject_AVShared)
-(void)fromMainThreadPostNotificationName:(id)mainThreadPostNotificationName object:(id)object userInfo:(id)info;
-(void)fromNotifySafeThreadPostNotificationName:(id)notifySafeThreadPostNotificationName object:(id)object userInfo:(id)info;
-(void)fromNotifySafeThreadPerformSelector:(SEL)notifySafeThreadPerformSelector withObject:(id)object;
-(BOOL)okToNotifyFromThisThread;
-(void)disallowSafePerformSelector;
-(void)allowSafePerformSelector;
-(void)postNotificationWithDescription:(id)description;
@end

@interface XXUnknownSuperclass (PickableRoute)
-(BOOL)matchesUID:(id)uid;
@end

@interface XXUnknownSuperclass (PickableRoutes)
-(id)pickableRouteWithUID:(id)uid;
@end

@interface XXUnknownSuperclass (AVExternalAudioDelegate)
-(long)becomeInactive;
-(long)becomeActive;
@end
