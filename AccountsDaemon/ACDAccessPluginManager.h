/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

#import "AccountsDaemon-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class ACDDatabase, NSSet;

@interface ACDAccessPluginManager : XXUnknownSuperclass {
	NSSet* _accessPlugins;
	dispatch_queue_s* _accessPluginQueue;
	dispatch_semaphore_s* _accessPluginQueueSemaphore;
	id _authorizationCompletionHandler;
	ACDDatabase* _database;
}
-(void).cxx_destruct;
-(id)_authorizationPluginForAccountType:(id)accountType;
-(void)revokeAllAccessToAccountsOfType:(id)type store:(id)store withCompletion:(id)completion;
-(void)revokeAccessToAccountsOfType:(id)type forClient:(id)client store:(id)store completion:(id)completion;
-(void)authorizeAccessToAccountsOfType:(id)type forClient:(id)client store:(id)store completion:(id)completion;
-(void)handleAccessRequestToAccountsOfType:(id)type forClient:(id)client withOptions:(id)options store:(id)store completion:(id)completion;
-(void)dealloc;
-(id)initWithDatabase:(id)database;
@end

