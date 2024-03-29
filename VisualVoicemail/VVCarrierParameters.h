/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary;

@interface VVCarrierParameters : XXUnknownSuperclass {
	NSDictionary* _parameterValues;
}
+(BOOL)supportsPasswordChanges;
+(BOOL)supportsGreetingChanges;
+(id)messageNotificationFallbackTimeout;
+(id)retryIntervals;
+(BOOL)supportsDetachedStorage;
+(BOOL)ignoresRoamingSwitch;
+(id)carrierServiceName;
-(id)parameterValueForKey:(id)key;
-(void)dealloc;
-(id)initForServiceBundleId:(id)serviceBundleId;
-(id)initForService:(id)service;
-(void)_initForBundle:(id)bundle;
@end

