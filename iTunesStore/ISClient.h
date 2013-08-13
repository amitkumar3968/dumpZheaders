/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSLock;

@interface ISClient : XXUnknownSuperclass {
	NSString* _appleClientApplication;
	NSString* _appleClientVersions;
	NSString* _identifier;
	NSLock* _lock;
	NSString* _partnerHeader;
	NSString* _userAgent;
}
@property(copy) NSString* partnerHeader;
@property(copy) NSString* identifier;
@property(readonly, assign) NSString* appleClientVersions;
@property(copy) NSString* userAgent;
@property(copy) NSString* appleClientApplication;
+(id)currentClient;
-(void)_softwareMapInvalidatedNotification:(id)notification;
-(id)localStoreFrontID;
// declared property getter: -(id)userAgent;
// declared property setter: -(void)setUserAgent:(id)agent;
// declared property setter: -(void)setPartnerHeader:(id)header;
// declared property setter: -(void)setIdentifier:(id)identifier;
// declared property setter: -(void)setAppleClientApplication:(id)application;
// declared property getter: -(id)partnerHeader;
// declared property getter: -(id)identifier;
// declared property getter: -(id)appleClientVersions;
// declared property getter: -(id)appleClientApplication;
-(void)dealloc;
-(id)init;
@end
