/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

#import "FTServices-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary;

@interface FTEntitlementSupport : XXUnknownSuperclass {
	CTServerConnectionRef _ctServerConnection;
	CFStringRef _entitlementStatus;
}
@property(readonly, assign, nonatomic) NSDictionary* registrationState;
@property(readonly, assign, nonatomic) BOOL faceTimeNonWiFiEntitled;
+(id)sharedInstance;
-(void)_handleCTServiceRequestName:(CFStringRef)name userInfo:(CFDictionaryRef)info contextInfo:(void*)info3;
-(BOOL)_disconnectCTServerConnection;
-(BOOL)_reconnectCTServerConnectionIfNecessary;
-(BOOL)_setupCTServerConnection;
-(void)_cleanupMachInfo;
-(void)_unregisterForCTEntitlementNotifications;
-(BOOL)_registerForCTEntitlementNotifications;
-(void)_handleEntitlementNotification:(CFDictionaryRef)notification;
-(void)_registrationStateChanged;
// declared property getter: -(id)registrationState;
// declared property getter: -(BOOL)faceTimeNonWiFiEntitled;
-(id)init;
@end
