/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMDAppleServices.framework/IMDAppleServices
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface IMDAppleIDNotificationCenter : XXUnknownSuperclass {
	NSMutableArray* _availableNotifications;
	NSMutableArray* _usageNotifications;
}
+(id)sharedInstance;
-(void)removeNotificationsForSession:(id)session;
-(void)addUsageNotificationForSession:(id)session appleID:(id)anId alias:(id)alias deviceName:(id)name serviceType:(int)type;
-(void)addAvailableNotificationForSession:(id)session appleID:(id)anId alias:(id)alias deviceName:(id)name serviceType:(int)type;
-(void)_noteNewUsageNotification:(id)notification;
-(void)_noteNewAvailableNotification:(id)notification;
-(void)_processUsageNotifications;
-(void)_processAvailableNotifications;
-(void)_postUsageNotificationForSessions:(id)sessions appleID:(id)anId aliases:(id)aliases deviceName:(id)name serviceTypes:(id)types;
-(void)_postAvailableNotificationForSessions:(id)sessions appleID:(id)anId aliases:(id)aliases deviceName:(id)name serviceTypes:(id)types;
-(void)dealloc;
-(id)init;
@end

