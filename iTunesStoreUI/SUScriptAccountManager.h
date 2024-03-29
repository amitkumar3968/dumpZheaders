/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSLock, NSArray;

@interface SUScriptAccountManager : XXUnknownSuperclass {
	NSMutableArray* _accounts;
	NSLock* _lock;
}
@property(readonly, assign) NSArray* accounts;
+(void)endAccountManagerSessionForObject:(id)object;
+(id)beginAccountManagerSessionForObject:(id)object;
-(void)_ntsReloadAccounts;
-(void)_dispatchEvent:(id)event forName:(id)name;
-(void)_accountsChangedNotification:(id)notification;
// declared property getter: -(id)accounts;
-(id)accountForDSID:(id)dsid;
-(void)dealloc;
-(id)init;
@end

