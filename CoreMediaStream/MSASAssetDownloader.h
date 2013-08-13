/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "MSASAssetTransferer.h"

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol MSASAssetDownloaderDelegate;

@interface MSASAssetDownloader : MSASAssetTransferer {
@private
	int _state;
	NSMutableArray* _itemsInFlight;
	NSMutableDictionary* _assetToItemInFlightMap;
	NSMutableArray* _finishedAssets;
	BOOL _didEncounterNetworkConditionError;
	BOOL _isDownloadingThumbnails;
	NSString* _currentFocusAlbumGUID;
	NSString* _currentFocusAssetCollectionGUID;
	BOOL _isWaitingForFirstDownloadEvent;
	NSString* _objectGUID;
	NSString* _downloadBatchPerfGUID;
}
@property(retain, nonatomic) NSString* downloadBatchPerfGUID;	// @synthesize=_downloadBatchPerfGUID
@property(retain, nonatomic) NSString* objectGUID;	// @synthesize=_objectGUID
@property(assign, nonatomic) BOOL isWaitingForFirstDownloadEvent;	// @synthesize=_isWaitingForFirstDownloadEvent
@property(retain, nonatomic) NSString* currentFocusAssetCollectionGUID;	// @synthesize=_currentFocusAssetCollectionGUID
@property(retain, nonatomic) NSString* currentFocusAlbumGUID;	// @synthesize=_currentFocusAlbumGUID
@property(assign, nonatomic) BOOL isDownloadingThumbnails;	// @synthesize=_isDownloadingThumbnails
@property(assign, nonatomic) BOOL didEncounterNetworkConditionError;	// @synthesize=_didEncounterNetworkConditionError
@property(retain, nonatomic) NSMutableArray* finishedAssets;	// @synthesize=_finishedAssets
@property(retain, nonatomic) NSMutableDictionary* assetToItemInFlightMap;	// @synthesize=_assetToItemInFlightMap
@property(retain, nonatomic) NSMutableArray* itemsInFlight;	// @synthesize=_itemsInFlight
@property(assign, nonatomic) int state;	// @synthesize=_state
@property(assign, nonatomic) __weak id<MSASAssetDownloaderDelegate> delegate;	// @dynamic
// declared property setter: -(void)setDownloadBatchPerfGUID:(id)guid;
// declared property getter: -(id)downloadBatchPerfGUID;
// declared property setter: -(void)setObjectGUID:(id)guid;
// declared property getter: -(id)objectGUID;
// declared property setter: -(void)setIsWaitingForFirstDownloadEvent:(BOOL)firstDownloadEvent;
// declared property getter: -(BOOL)isWaitingForFirstDownloadEvent;
// declared property setter: -(void)setCurrentFocusAssetCollectionGUID:(id)guid;
// declared property getter: -(id)currentFocusAssetCollectionGUID;
// declared property setter: -(void)setCurrentFocusAlbumGUID:(id)guid;
// declared property getter: -(id)currentFocusAlbumGUID;
// declared property setter: -(void)setIsDownloadingThumbnails:(BOOL)thumbnails;
// declared property getter: -(BOOL)isDownloadingThumbnails;
// declared property setter: -(void)setDidEncounterNetworkConditionError:(BOOL)encounterNetworkConditionError;
// declared property getter: -(BOOL)didEncounterNetworkConditionError;
// declared property setter: -(void)setFinishedAssets:(id)assets;
// declared property getter: -(id)finishedAssets;
// declared property setter: -(void)setAssetToItemInFlightMap:(id)flightMap;
// declared property getter: -(id)assetToItemInFlightMap;
// declared property setter: -(void)setItemsInFlight:(id)flight;
// declared property getter: -(id)itemsInFlight;
// declared property setter: -(void)setState:(int)state;
// declared property getter: -(int)state;
-(void).cxx_destruct;
-(void)MMCSEngine:(id)engine didFinishGettingAllAssetsContext:(id)context;
-(void)MMCSEngine:(id)engine didMakeGetProgress:(float)progress state:(int)state onAsset:(id)asset context:(id)context;
-(id)_orphanedAssetError;
-(void)MMCSEngine:(id)engine didFinishGettingAsset:(id)asset path:(id)path context:(id)context error:(id)error;
-(void)MMCSEngine:(id)engine didFinishPuttingAllAssetsContext:(id)context;
-(void)MMCSEngine:(id)engine didMakePutProgress:(float)progress state:(int)state onAsset:(id)asset context:(id)context;
-(void)MMCSEngine:(id)engine didFinishPuttingAsset:(id)asset context:(id)context error:(id)error;
-(void)_workQueueDidFinishWithItem:(id)_workQueue error:(id)error;
-(void)_workQueueStopTrackingItem:(id)item;
-(void)didEnqueueAsset:(id)asset forAlbumGUID:(id)albumGUID;
-(void)workQueueUnregisterAssets:(id)assets;
-(void)unregisterAssets:(id)assets;
-(void)workQueueRegisterAssets:(id)assets completionBlock:(id)block;
-(void)registerAssets:(id)assets completionBlock:(id)block;
-(void)workQueueDownloadNextBatch;
-(void)_workQueueGoIdle;
-(void)workQueueCancel;
-(void)workQueueShutDownCompletionBlock:(id)block;
-(void)workQueueStop;
-(id)workQueueObjectGUID;
-(void)workQueueRetryOutstandingActivities;
-(id)_pathForPersonID:(id)personID;
@end

