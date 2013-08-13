/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

#import <Foundation/NSNotificationCenter.h>


@interface SBSRemoteNotificationClient : NSNotificationCenter {
}
+(id)getPendingNotificationUserInfo;
+(int)enabledRemoteNotificationTypes;
+(void)registerForRemoteNotificationTypes:(int)remoteNotificationTypes;
+(unsigned)_remoteNotificationServerPort;
+(void)setEnabledNotificationTypes:(int)types forBundleIdentifier:(id)bundleIdentifier;
+(void)getSupportedTypes:(id*)types enabledTypes:(id*)types2;
+(BOOL)hasRegisteredBundleIdentifiers;
+(void)setSystemwideEnabled:(BOOL)enabled;
+(BOOL)isSystemwideEnabled;
@end

