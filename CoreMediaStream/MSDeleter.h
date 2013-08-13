/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "MSCupidStateMachine.h"
#import "NSObject.h"
#import "MSDeleter.h"
#import "MSDeleteStreamsProtocolDelegate.h"

@class MSDeleteStreamsProtocol, NSMutableArray, MSMediaStreamDaemon, MSObjectQueue;
@protocol MSDeleterDelegate;

@protocol MSDeleter <NSObject>
@property(assign, nonatomic) id<MSDeleterDelegate> delegate;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property getter: -(id)delegate;
-(void)performOutstandingActivities;
-(void)stop;
-(void)abort;
-(void)deleteAssetCollections:(id)collections;
@end

@interface MSDeleter : MSCupidStateMachine <MSDeleter, MSDeleteStreamsProtocolDelegate> {
@private
	MSDeleteStreamsProtocol* _protocol;
	int _state;
	MSObjectQueue* _deleteQueue;
	NSMutableArray* _requestedDeleteWrappers;
	int _batchSize;
	int _maxErrorCount;
	id<MSDeleterDelegate> _delegate;
	MSMediaStreamDaemon* _daemon;
}
@property(assign, nonatomic) id<MSDeleterDelegate> delegate;	// @synthesize=_delegate
@property(assign, nonatomic) int batchSize;	// @synthesize=_batchSize
@property(assign, nonatomic) MSMediaStreamDaemon* daemon;	// @synthesize=_daemon
+(BOOL)isInRetryState;
+(void)abortAllActivities;
+(void)stopAllActivities;
+(id)personIDsWithOutstandingActivities;
+(id)nextActivityDateForPersonID:(id)personID;
+(id)nextActivityDate;
+(void)_setMasterNextActivityDate:(id)date forPersonID:(id)personID;
+(void)forgetPersonID:(id)anId;
+(id)_clearInstantiatedDeletersByPersonID;
+(id)existingDeleterForPersonID:(id)personID;
+(id)deleterForPersonID:(id)personID;
// declared property setter: -(void)setBatchSize:(int)size;
// declared property getter: -(int)batchSize;
// declared property setter: -(void)setDaemon:(id)daemon;
// declared property getter: -(id)daemon;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property getter: -(id)delegate;
-(void).cxx_destruct;
-(BOOL)_isInRetryState;
-(void)stop;
-(void)abort;
-(void)_forget;
-(void)_abort;
-(id)_abortedError;
-(void)_stop;
-(void)deleteProtocol:(id)protocol didFinishSuccessfulCollections:(id)collections failedCollections:(id)collections3 error:(id)error;
-(void)deleteProtocol:(id)protocol didReceiveAuthenticationError:(id)error;
-(void)_sendDeleteRequest;
-(void)performOutstandingActivities;
-(void)deleteAssetCollections:(id)collections;
-(BOOL)_isAllowedToDelete;
-(void)_updateMasterManifest;
-(void)dealloc;
-(void)deactivate;
-(id)initWithPersonID:(id)personID baseURL:(id)url;
@end
