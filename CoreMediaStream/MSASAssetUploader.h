/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "MSASAssetTransferer.h"

@class NSMutableArray, NSMutableDictionary;
@protocol MSASAssetUploaderDelegate;

@interface MSASAssetUploader : MSASAssetTransferer {
@private
	int _state;
	NSMutableArray* _itemsInFlight;
	NSMutableDictionary* _assetCollectionsToItemInFlightMap;
	NSMutableDictionary* _assetToAssetCollectionMap;
	NSMutableArray* _finishedAssetCollections;
	BOOL _didEncounterNetworkConditionError;
}
@property(assign, nonatomic) BOOL didEncounterNetworkConditionError;	// @synthesize=_didEncounterNetworkConditionError
@property(retain, nonatomic) NSMutableArray* finishedAssetCollections;	// @synthesize=_finishedAssetCollections
@property(retain, nonatomic) NSMutableDictionary* assetToAssetCollectionMap;	// @synthesize=_assetToAssetCollectionMap
@property(retain, nonatomic) NSMutableDictionary* assetCollectionsToItemInFlightMap;	// @synthesize=_assetCollectionsToItemInFlightMap
@property(retain, nonatomic) NSMutableArray* itemsInFlight;	// @synthesize=_itemsInFlight
@property(assign, nonatomic) int state;	// @synthesize=_state
@property(assign, nonatomic) __weak id<MSASAssetUploaderDelegate> delegate;	// @dynamic
// declared property setter: -(void)setDidEncounterNetworkConditionError:(BOOL)encounterNetworkConditionError;
// declared property getter: -(BOOL)didEncounterNetworkConditionError;
// declared property setter: -(void)setFinishedAssetCollections:(id)collections;
// declared property getter: -(id)finishedAssetCollections;
// declared property setter: -(void)setAssetToAssetCollectionMap:(id)assetCollectionMap;
// declared property getter: -(id)assetToAssetCollectionMap;
// declared property setter: -(void)setAssetCollectionsToItemInFlightMap:(id)flightMap;
// declared property getter: -(id)assetCollectionsToItemInFlightMap;
// declared property setter: -(void)setItemsInFlight:(id)flight;
// declared property getter: -(id)itemsInFlight;
// declared property setter: -(void)setState:(int)state;
// declared property getter: -(int)state;
-(void).cxx_destruct;
-(void)MMCSEngine:(id)engine didFinishGettingAllAssetsContext:(id)context;
-(void)MMCSEngine:(id)engine didMakeGetProgress:(float)progress state:(int)state onAsset:(id)asset context:(id)context;
-(void)MMCSEngine:(id)engine didFinishGettingAsset:(id)asset path:(id)path context:(id)context error:(id)error;
-(void)MMCSEngine:(id)engine didFinishPuttingAllAssetsContext:(id)context;
-(void)MMCSEngine:(id)engine didMakePutProgress:(float)progress state:(int)state onAsset:(id)asset context:(id)context;
-(void)MMCSEngine:(id)engine didFinishPuttingAsset:(id)asset context:(id)context putReceipt:(id)receipt error:(id)error;
-(void)workQueueDidFinishWithItem:(id)workQueue error:(id)error;
-(void)workQueueStopTrackingItem:(id)item;
-(void)unregisterAssetCollections:(id)collections completionBlock:(id)block;
-(void)unregisterAssetCollections:(id)collections;
-(void)registerAssetCollections:(id)collections completionBlock:(id)block;
-(void)workQueueRegisterAssetCollections:(id)collections index:(unsigned)index results:(id)results completionBlock:(id)block;
-(void)workQueueRegisterAssets:(id)assets index:(unsigned)index completionBlock:(id)block;
-(void)workQueueUploadNextBatch;
-(id)_orphanedAssetCollectionError;
-(void)workQueueCancel;
-(void)workQueueShutDownCompletionBlock:(id)block;
-(void)workQueueStop;
-(void)_workQueueStop;
-(void)workQueueGoIdle;
-(void)workQueueRetryOutstandingActivities;
-(id)_pathForPersonID:(id)personID;
@end

