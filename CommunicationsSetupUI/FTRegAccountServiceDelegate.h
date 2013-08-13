/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "AASetupAssistantDelegateService.h"

@class FTCConnectionHandler, FTRegAppleIDSetupOperation, NSDictionary, CNFRegController;

@interface FTRegAccountServiceDelegate : XXUnknownSuperclass <AASetupAssistantDelegateService> {
	CNFRegController* _regController;
	FTRegAppleIDSetupOperation* _setupOperation;
	NSDictionary* _responseDictionary;
	id _completionHandler;
	FTCConnectionHandler* _connectionHandler;
}
@property(retain, nonatomic) FTRegAppleIDSetupOperation* setupOperation;	// @synthesize=_setupOperation
@property(copy, nonatomic) NSDictionary* responseDictionary;	// @synthesize=_responseDictionary
@property(copy, nonatomic) id completionHandler;	// @synthesize=_completionHandler
@property(retain, nonatomic) CNFRegController* regController;	// @synthesize=_regController
// declared property setter: -(void)setSetupOperation:(id)operation;
// declared property getter: -(id)setupOperation;
// declared property setter: -(void)setResponseDictionary:(id)dictionary;
// declared property getter: -(id)responseDictionary;
// declared property setter: -(void)setCompletionHandler:(id)handler;
// declared property getter: -(id)completionHandler;
// declared property setter: -(void)setRegController:(id)controller;
// declared property getter: -(id)regController;
-(BOOL)serviceIsAvailable;
-(id)displayName;
-(int)serviceType;
-(void)setupOperationFailed;
-(void)completeSetupWithResponseParameters:(id)responseParameters handler:(id)handler;
-(id)accountSetupRequestParameters;
-(id)_defaultSetupRequestParameters;
-(id)delegateServiceIdentifier;
-(BOOL)_shouldSkipAccountSetup:(id)setup;
-(id)_existingOperationalAccount;
-(id)_existingAccountForSetupParameters:(id)setupParameters;
-(BOOL)_account:(id)account matchesSetupParameters:(id)parameters;
-(BOOL)_hasOperationalAccount;
-(BOOL)_hasAccount;
-(void)_handleFailureWithErrorCode:(int)errorCode;
-(void)_handleSuccess:(BOOL)success error:(id)error;
-(void)_cleanup;
-(id)_logName;
-(void)dealloc;
-(id)init;
-(id)initWithRegController:(id)regController;
@end
