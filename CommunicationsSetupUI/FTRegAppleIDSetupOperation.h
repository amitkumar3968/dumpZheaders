/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSTimer, IMAccount, NSArray, NSDictionary, CNFRegController, NSError;

@interface FTRegAppleIDSetupOperation : XXUnknownSuperclass {
@private
	int _type;
	CNFRegController* _regController;
	NSDictionary* _setupDict;
	BOOL _finished;
	id _handler;
	NSError* _error;
	BOOL _cancelled;
	BOOL _timedOut;
	NSTimer* _timeoutTimer;
	NSArray* _selectedAliases;
	BOOL _finishOnAuthenticated;
	IMAccount* _account;
	BOOL _hasSetAliases;
}
@property(assign, nonatomic) BOOL timedOut;	// @synthesize=_timedOut
@property(assign, nonatomic) BOOL cancelled;	// @synthesize=_cancelled
@property(assign, nonatomic) BOOL hasSetAliases;	// @synthesize=_hasSetAliases
@property(retain, nonatomic) NSTimer* timeoutTimer;	// @synthesize=_timeoutTimer
@property(copy, nonatomic) id handler;	// @synthesize=_handler
@property(retain, nonatomic) IMAccount* account;	// @synthesize=_account
@property(retain, nonatomic) CNFRegController* regController;	// @synthesize=_regController
@property(assign, nonatomic) int type;	// @synthesize=_type
@property(retain, nonatomic) NSDictionary* setupDict;	// @synthesize=_setupDict
@property(assign, nonatomic) BOOL finishOnAuthenticated;	// @synthesize=_finishOnAuthenticated
@property(copy, nonatomic) NSArray* selectedAliases;	// @synthesize=_selectedAliases
@property(readonly, assign, nonatomic) NSArray* candidateAliases;
@property(retain, nonatomic) NSError* error;	// @synthesize=_error
@property(assign, nonatomic, getter=isFinished) BOOL finished;	// @synthesize=_finished
// declared property setter: -(void)setHasSetAliases:(BOOL)aliases;
// declared property getter: -(BOOL)hasSetAliases;
// declared property setter: -(void)setAccount:(id)account;
// declared property getter: -(id)account;
// declared property setter: -(void)setFinishOnAuthenticated:(BOOL)authenticated;
// declared property getter: -(BOOL)finishOnAuthenticated;
// declared property getter: -(id)selectedAliases;
// declared property setter: -(void)setTimeoutTimer:(id)timer;
// declared property getter: -(id)timeoutTimer;
// declared property setter: -(void)setTimedOut:(BOOL)anOut;
// declared property getter: -(BOOL)timedOut;
// declared property setter: -(void)setCancelled:(BOOL)cancelled;
// declared property getter: -(BOOL)cancelled;
// declared property setter: -(void)setError:(id)error;
// declared property getter: -(id)error;
// declared property setter: -(void)setHandler:(id)handler;
// declared property getter: -(id)handler;
// declared property setter: -(void)setFinished:(BOOL)finished;
// declared property getter: -(BOOL)isFinished;
// declared property setter: -(void)setSetupDict:(id)dict;
// declared property getter: -(id)setupDict;
// declared property setter: -(void)setRegController:(id)controller;
// declared property getter: -(id)regController;
// declared property setter: -(void)setType:(int)type;
// declared property getter: -(int)type;
// declared property getter: -(id)candidateAliases;
-(void)cancelSetup;
-(void)_handleTimeout:(id)timeout;
-(void)_stopTimeout;
-(void)_startTimeout;
-(void)_startTimeoutWithDuration:(double)duration;
-(void)_stopListeningForAccountNotifications;
-(void)_startListeningForAccountNotifications;
-(void)_beginSecondarySetup;
-(BOOL)_beginEmailValidationWithError:(int*)error;
-(BOOL)_beginProfileValidation;
-(void)_beginAccountCreation;
// declared property setter: -(void)setSelectedAliases:(id)aliases;
-(void)_notifyFailureWithErrorCode:(int)errorCode;
-(void)_notifyFailureWithError:(id)error;
-(void)_notifySuccess;
-(void)_notifyCompletionWithCode:(int)code;
-(void)_notifySuccess:(BOOL)success error:(id)error;
-(void)_cleanup;
-(BOOL)beginSetupWithCompletionHandler:(id)completionHandler;
-(void)dealloc;
-(id)_logName;
-(id)initWithServiceType:(int)serviceType setup:(id)setup;
@end
