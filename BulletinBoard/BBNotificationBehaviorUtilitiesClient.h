/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "XPCProxyTarget.h"
#import "BBNotificationBehaviorUtilitiesClientProtocol.h"


@interface BBNotificationBehaviorUtilitiesClient : XXUnknownSuperclass <BBNotificationBehaviorUtilitiesClientProtocol, XPCProxyTarget> {
	id _serverProxy;
	id _filteringStateChangeHandler;
	id _activeBehaviorOverridesChangeHandler;
}
-(void)activeBehaviorOverrideTypesChanged:(unsigned)changed;
-(void)shouldPresentNotificationFromSender:(id)sender withHandler:(id)handler;
-(void)setActiveBehaviorOverridesChangeHandler:(id)handler;
-(void)setFilteringStateChangeHandler:(id)handler;
-(id)proxy:(id)proxy detailedSignatureForSelector:(SEL)selector;
-(void)notificationPresentationFilteringChangedToEnabled:(BOOL)enabled;
-(void)dealloc;
-(id)init;
@end
