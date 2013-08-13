/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import "ASDynamicAccountClassLoader.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary;

@interface DAAccountLoader : XXUnknownSuperclass <ASDynamicAccountClassLoader> {
	NSMutableDictionary* _accountTypeToAccountFrameworkSubpath;
	NSMutableDictionary* _accountTypeToAccountDaemonBundleSubpath;
	NSMutableDictionary* _accountTypeToClassNames;
	NSMutableDictionary* _acAccountTypeToAccountFrameworkSubpath;
	NSMutableDictionary* _acAccountTypeToAccountDaemonBundleSubpath;
	NSMutableDictionary* _acAccountTypeToClassNames;
	NSMutableDictionary* _acParentAccountTypeToChildAccountTypes;
}
+(BOOL)loadBundleForAccountWithProperties:(id)properties;
+(id)sharedInstance;
-(BOOL)loadBundleForAccountWithProperties:(id)properties;
-(Class)daemonAppropriateAccountClassForAccountType:(id)accountType;
-(Class)agentClassForAccountType:(id)accountType;
-(Class)daemonAccountClassForAccountType:(id)accountType;
-(Class)clientAccountClassForAccountType:(id)accountType;
-(Class)accountClassForAccountType:(id)accountType;
-(void)loadDaemonBundleForAccountType:(id)accountType;
-(void)loadFrameworkForAccountType:(id)accountType;
-(Class)daemonAppropriateAccountClassForACAccount:(id)acaccount;
-(Class)agentClassForACAccount:(id)acaccount;
-(Class)daemonAccountClassForACAccount:(id)acaccount;
-(Class)clientAccountClassForACAccount:(id)acaccount;
-(Class)accountClassForACAccount:(id)acaccount;
-(void)loadDaemonBundleForACAccountType:(id)acaccountType;
-(void)loadFrameworkForACAccountType:(id)acaccountType;
-(BOOL)_loadFrameworkAtSubpath:(id)subpath;
-(id)init;
-(void)_addAccountInfo:(id)info forFrameworkNamed:(id)frameworkNamed;
@end

