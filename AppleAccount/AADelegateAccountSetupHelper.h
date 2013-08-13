/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSTimer, NSArray, NSMutableArray, AASetupAssistantService, NSMutableDictionary;

@interface AADelegateAccountSetupHelper : XXUnknownSuperclass {
	AASetupAssistantService* _aaService;
	NSArray* _delegatesToSetup;
	NSMutableArray* _pendingCompletionBundles;
	NSMutableDictionary* _assistantDelegates;
	NSTimer* _delegatesTimeout;
	id _handler;
}
-(void).cxx_destruct;
-(void)_setupDelegateAccountsWithEmailChoice:(id)emailChoice;
-(void)_completeDelegateSetupWithResponse:(id)response;
-(void)_storeDelegateTokensWithResponse:(id)response;
-(id)_adjustResponseDictionary:(id)dictionary forAssistantDelegate:(id)assistantDelegate withIdentifier:(id)identifier;
-(void)_delegateBundlesDidTimeout;
-(void)_delegateBundlesFinished;
-(id)_loadAssistantDelegateBundles;
-(void)setupiCloudDelegateWithUsername:(id)username password:(id)password emailChoice:(id)choice withHandler:(id)handler;
-(void)setupAppleIDDelegatesWithUsername:(id)username password:(id)password emailChoice:(id)choice withHandler:(id)handler;
-(id)init;
@end

