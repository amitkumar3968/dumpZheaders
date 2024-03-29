/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSError, NSLock, NSRunLoop, SSOperationProgress, NSArray, NSMutableArray, NSString;
@protocol ISOperationDelegate;

@interface ISOperation : XXUnknownSuperclass {
	id<ISOperationDelegate> _delegate;
	NSError* _error;
	NSLock* _lock;
	NSRunLoop* _operationRunLoop;
	ISOperation* _parentOperation;
	SSOperationProgress* _progress;
	BOOL _shouldMessageMainThread;
	NSString* _powerAssertionIdentifier;
	NSArray* _serializationLockIdentifiers;
	NSMutableArray* _subOperations;
	BOOL _shouldRunWithBackgroundPriority;
	BOOL _stopped;
	BOOL _success;
	id _threadSafeDelegate;
}
@property(copy) NSArray* serializationLockIdentifiers;
@property(readonly, assign) id threadSafeDelegate;
@property(retain) NSRunLoop* operationRunLoop;	// @synthesize=_operationRunLoop
@property(readonly, assign, nonatomic) SSOperationProgress* progress;
@property(retain) ISOperation* parentOperation;	// @synthesize=_parentOperation
@property(readonly, assign) int progressWeight;
@property(assign) BOOL success;	// @synthesize=_success
@property(retain) NSError* error;	// @synthesize=_error
@property(assign) BOOL shouldRunWithBackgroundPriority;	// @synthesize=_shouldRunWithBackgroundPriority
@property(readonly, assign) NSString* uniqueKey;
@property(retain) NSString* powerAssertionIdentifier;	// @synthesize=_powerAssertionIdentifier
@property(assign) BOOL shouldMessageMainThread;
@property(assign) id<ISOperationDelegate> delegate;
// declared property setter: -(void)setSuccess:(BOOL)success;
// declared property getter: -(BOOL)success;
// declared property setter: -(void)setShouldRunWithBackgroundPriority:(BOOL)runWithBackgroundPriority;
// declared property getter: -(BOOL)shouldRunWithBackgroundPriority;
// declared property setter: -(void)setPowerAssertionIdentifier:(id)identifier;
// declared property getter: -(id)powerAssertionIdentifier;
// declared property setter: -(void)setParentOperation:(id)operation;
// declared property getter: -(id)parentOperation;
// declared property setter: -(void)setOperationRunLoop:(id)loop;
// declared property getter: -(id)operationRunLoop;
// declared property setter: -(void)setError:(id)error;
// declared property getter: -(id)error;
-(void)_sendWillStartToDelegate;
-(void)_sendSuccessToDelegate;
-(void)_sendErrorToDelegate:(id)delegate;
-(void)_removeSubOperation:(id)operation;
-(void)_main:(BOOL)main;
-(void)_keepAliveTimer:(id)timer;
-(void)_failAfterException;
-(void)_addSubOperation:(id)operation;
-(void)unlock;
// declared property setter: -(void)setSerializationLockIdentifiers:(id)identifiers;
// declared property getter: -(id)serializationLockIdentifiers;
-(void)sendProgressToDelegate;
-(void)sendDidTakeSerializationLocks;
-(void)run:(BOOL)run;
-(void)lock;
-(void)dispatchCompletionBlock;
-(id)copySerializationLocks;
-(id)copyActivePowerAssertionIdentifiers;
-(void)main;
-(void)cancel;
// declared property getter: -(id)uniqueKey;
// declared property getter: -(id)threadSafeDelegate;
// declared property getter: -(BOOL)shouldMessageMainThread;
-(BOOL)shouldFailAfterUniquePredecessorError:(id)error;
// declared property setter: -(void)setShouldMessageMainThread:(BOOL)messageMainThread;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property getter: -(id)delegate;
-(BOOL)stopRunLoop;
-(BOOL)runSubOperation:(id)operation onQueue:(id)queue error:(id*)error;
-(BOOL)runSubOperation:(id)operation returningError:(id*)error;
-(long)runRunLoopUntilStopped;
-(void)run;
// declared property getter: -(int)progressWeight;
// declared property getter: -(id)progress;
-(void)dealloc;
-(id)init;
-(BOOL)loadURLBagWithContext:(id)context returningError:(id*)error;
-(BOOL)loadSoftwareMapReturningError:(id*)error;
-(BOOL)copyAccountID:(id*)anId byAuthenticatingWithContext:(id)context returningError:(id*)error;
-(id)authenticatedAccountDSID;
@end

