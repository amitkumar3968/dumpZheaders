/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMDAppleServices.framework/IMDAppleServices
 */

#import "IMDAppleServices-Structs.h"
#import "IMSystemMonitorListener.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSNumber, FTPushHandler, NSDate, NSMutableArray, FTMessageDelivery;

@interface IMDAppleIDSRegistrationCenter : XXUnknownSuperclass <IMSystemMonitorListener> {
	NSMutableArray* _queuedRegistrations;
	NSMutableArray* _queuedProvisionings;
	NSMutableArray* _queuedDeregistrations;
	NSMutableArray* _queuedRecoveries;
	NSMutableArray* _currentProvisionings;
	NSMutableArray* _currentRegistrations;
	NSMutableArray* _currentRecoveries;
	NSMutableArray* _handlers;
	BOOL _pendingDequeue;
	BOOL _shouldUseAbsinthe;
	BOOL _isBuildingContext;
	NACContextOpaque_Ref _validationContext;
	BOOL _validationContextDisabled;
	NSDate* _validateContextDate;
	NSNumber* _validateContextTTL;
	NSMutableArray* _validationContextQueue;
	FTMessageDelivery* _httpMessageDelivery;
	FTPushHandler* _pushHandler;
}
+(id)sharedInstance;
-(void)removeListener:(id)listener;
-(void)addListener:(id)listener;
-(id)activeRegistrations;
-(void)cancelActionsForRegistrationInfo:(id)registrationInfo;
-(void)cancelRegisterActionsForRegistrationInfo:(id)registrationInfo;
-(BOOL)sendDeregistration:(id)deregistration;
-(BOOL)sendRegistration:(id)registration;
-(BOOL)provisionRegistration:(id)registration;
-(BOOL)getDependentHandles:(id)handles completionBlock:(id)block;
-(BOOL)isDeregistering:(id)deregistering;
-(BOOL)isRegistering:(id)registering;
-(void)_sendProvisionRegistration:(id)registration;
-(BOOL)sendSignatureRecovery:(id)recovery;
-(void)_sendSignatureRecovery:(id)recovery;
-(void)_sendDeregistration:(id)deregistration;
-(void)_sendRegistration:(id)registration;
-(BOOL)sendRequest:(id)request;
-(BOOL)_hasRegistration:(id)registration inQueue:(id)queue;
-(void)_notifyDeregistrationSuccess:(id)success;
-(void)_notifyDeregistrationFailure:(id)failure error:(int)error info:(id)info;
-(void)_notifyRegistrationSuccess:(id)success;
-(void)_notifyRegistrationFailure:(id)failure error:(int)error info:(id)info;
-(void)_notifyProvisionSuccess:(id)success;
-(void)_notifyProvisionFailure:(id)failure error:(int)error fatal:(BOOL)fatal info:(id)info;
-(void)buildValidationCredentialsIfNeeded;
-(BOOL)_queueBuildingValidationDataIfNecessaryForMessage:(id)message;
-(void)_sendAbsintheValidationCertRequestIfNeeded;
-(void)__cleanupValidationInfo;
-(void)__flushValidationQueue;
-(void)__failValidationQueue;
-(void)__queueValidationMessage:(id)message;
-(void)_dequeuePendingRequestsIfNecessary;
-(void)dealloc;
-(id)init;
@end

