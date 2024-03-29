/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import "AppSupport-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSLock, NSString;

@interface CPDistributedNotificationCenter : XXUnknownSuperclass {
	NSString* _centerName;
	NSLock* _lock;
	CFRunLoopSourceRef _receiveNotificationSource;
	BOOL _isServer;
	CFDictionaryRef _sendPorts;
	unsigned _startCount;
}
+(id)centerNamed:(id)named;
-(void)_receivedCheckIn:(unsigned)anIn auditToken:(XXStruct_kUSYWB*)token;
-(BOOL)postNotificationName:(id)name userInfo:(id)info toBundleIdentifier:(id)bundleIdentifier;
-(void)postNotificationName:(id)name userInfo:(id)info;
-(void)postNotificationName:(id)name;
-(void)runServer;
-(void)runServerOnCurrentThread;
-(void)deliverNotification:(id)notification userInfo:(id)info;
-(void)stopDeliveringNotifications;
-(void)startDeliveringNotificationsToRunLoop:(CFRunLoopRef)runLoop;
-(void)startDeliveringNotificationsToMainThread;
-(void)_notificationServerWasRestarted;
-(void)_checkOutAndRemoveSource;
-(void)_checkIn;
-(void)_createReceiveSourceForRunLoop:(CFRunLoopRef)runLoop;
-(id)name;
-(void)dealloc;
-(id)_initWithServerName:(id)serverName;
@end

