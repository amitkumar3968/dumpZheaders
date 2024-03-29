/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "MMCSEngineDelegate.h"

@class MSAlbumSharingDaemon, NSObject, MMCSEngine, MSBackoffManager, MSASPersonModel, NSString;
@protocol OS_dispatch_queue;

@interface MSASAssetTransferer : XXUnknownSuperclass <MMCSEngineDelegate> {
@private
	id _delegate;
	NSString* _personID;
	MMCSEngine* _engine;
	double _maxMMCSTokenValidityTimeInterval;
	MSAlbumSharingDaemon* _daemon;
	MSASPersonModel* _model;
	MSBackoffManager* _backoffManager;
	int _maxBatchCount;
	int _maxRetryCount;
	NSString* _focusAlbumGUID;
	NSString* _focusAssetCollectionGUID;
	NSObject<OS_dispatch_queue>* _workQueue;
	NSObject<OS_dispatch_queue>* _eventQueue;
	BOOL _hasShutDown;
}
@property(assign, nonatomic) BOOL hasShutDown;	// @synthesize=_hasShutDown
@property(retain, nonatomic) NSObject<OS_dispatch_queue>* workQueue;	// @synthesize=_workQueue
@property(retain, nonatomic) NSObject<OS_dispatch_queue>* eventQueue;	// @synthesize=_eventQueue
@property(assign, nonatomic) int maxRetryCount;	// @synthesize=_maxRetryCount
@property(assign, nonatomic) int maxBatchCount;	// @synthesize=_maxBatchCount
@property(copy, nonatomic) NSString* focusAssetCollectionGUID;	// @synthesize=_focusAssetCollectionGUID
@property(copy, nonatomic) NSString* focusAlbumGUID;	// @synthesize=_focusAlbumGUID
@property(assign, nonatomic) __weak MSBackoffManager* backoffManager;	// @synthesize=_backoffManager
@property(assign, nonatomic) __weak MSASPersonModel* model;	// @synthesize=_model
@property(assign, nonatomic) __weak MSAlbumSharingDaemon* daemon;	// @synthesize=_daemon
@property(assign, nonatomic) double maxMMCSTokenValidityTimeInterval;	// @synthesize=_maxMMCSTokenValidityTimeInterval
@property(readonly, assign, nonatomic) MMCSEngine* engine;	// @synthesize=_engine
@property(copy, nonatomic) NSString* personID;	// @synthesize=_personID
@property(assign, nonatomic) __weak id delegate;	// @synthesize=_delegate
// declared property setter: -(void)setHasShutDown:(BOOL)down;
// declared property getter: -(BOOL)hasShutDown;
// declared property setter: -(void)setEventQueue:(id)queue;
// declared property getter: -(id)eventQueue;
// declared property setter: -(void)setWorkQueue:(id)queue;
// declared property getter: -(id)workQueue;
// declared property getter: -(id)focusAssetCollectionGUID;
// declared property getter: -(id)focusAlbumGUID;
// declared property setter: -(void)setMaxRetryCount:(int)count;
// declared property getter: -(int)maxRetryCount;
// declared property setter: -(void)setMaxBatchCount:(int)count;
// declared property getter: -(int)maxBatchCount;
// declared property setter: -(void)setBackoffManager:(id)manager;
// declared property getter: -(id)backoffManager;
// declared property setter: -(void)setModel:(id)model;
// declared property getter: -(id)model;
// declared property setter: -(void)setDaemon:(id)daemon;
// declared property getter: -(id)daemon;
// declared property getter: -(double)maxMMCSTokenValidityTimeInterval;
// declared property getter: -(id)engine;
// declared property setter: -(void)setPersonID:(id)anId;
// declared property getter: -(id)personID;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property getter: -(id)delegate;
-(void).cxx_destruct;
-(void)MMCSEngine:(id)engine logPerformanceMetrics:(id)metrics;
-(void)MMCSEngine:(id)engine logMessage:(id)message logLevel:(int)level;
-(BOOL)MMCSEngine:(id)engine shouldLogAtLogLevel:(int)logLevel;
-(void)MMCSEngine:(id)engine didFinishGettingAllAssetsContext:(id)context;
-(void)MMCSEngine:(id)engine didMakeGetProgress:(float)progress state:(int)state onAsset:(id)asset context:(id)context;
-(void)MMCSEngine:(id)engine didFinishGettingAsset:(id)asset path:(id)path context:(id)context error:(id)error;
-(void)MMCSEngine:(id)engine didFinishPuttingAllAssetsContext:(id)context;
-(void)MMCSEngine:(id)engine didMakePutProgress:(float)progress state:(int)state onAsset:(id)asset context:(id)context;
-(void)MMCSEngine:(id)engine didFinishPuttingAsset:(id)asset context:(id)context putReceipt:(id)receipt error:(id)error;
-(void)_sendDidIdleNotification;
-(id)_canceledError;
-(id)_MMCSTokenTooOldError;
-(id)_missingMMCSTokenError;
-(id)_missingURLError;
-(id)_pathForPersonID:(id)personID;
-(double)workQueueMaxMMCSTokenValidityTimeInterval;
-(unsigned long long)workQueueNextItemID;
-(void)workQueueRetryOutstandingActivities;
-(void)retryOutstandingActivities;
-(void)workQueueShutDownCompletionBlock:(id)block;
-(void)shutDownCompletionBlock:(id)block;
-(void)workQueueCancel;
-(void)cancelCompletionBlock:(id)block;
-(void)workQueueStop;
-(void)stopCompletionBlock:(id)block;
// declared property setter: -(void)setMaxMMCSTokenValidityTimeInterval:(double)interval;
// declared property setter: -(void)setFocusAssetCollectionGUID:(id)guid;
// declared property setter: -(void)setFocusAlbumGUID:(id)guid;
-(void)dealloc;
-(id)initWithPersonID:(id)personID eventQueue:(id)queue;
-(id)initWithPersonID:(id)personID;
-(void)_rereadPerformanceLoggingSetting;
@end

