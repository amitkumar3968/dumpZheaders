/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import "PhotoLibraryServices-Structs.h"
#import "_PLManagedAlbum.h"
#import "PLUserEditableAssetContainer.h"

@class PLManagedAsset, UIImage, NSDictionary, NSURL, NSString, NSNumber, NSOrderedSet, NSMutableOrderedSet;

@interface PLManagedAlbum : _PLManagedAlbum <PLUserEditableAssetContainer> {
@private
	BOOL _resolvingConflicts;
	BOOL stackedImageNeedsUpdate;
	BOOL albumShouldBeAutomaticallyDeleted;
}
@property(readonly, assign, nonatomic) NSMutableOrderedSet* userEditableAssets;
@property(assign, nonatomic) unsigned pendingItemsType;
@property(assign, nonatomic) unsigned pendingItemsCount;
@property(readonly, assign, nonatomic) id sectioningComparator;
@property(readonly, assign, nonatomic) id sortingComparator;
@property(readonly, assign, nonatomic) NSURL* groupURL;
@property(retain, nonatomic) NSString* importSessionID;
@property(retain, nonatomic) NSDictionary* slideshowSettings;
@property(readonly, assign, nonatomic) BOOL shouldDeleteWhenEmpty;
@property(readonly, assign, nonatomic) BOOL canShowComments;
@property(readonly, assign, nonatomic) BOOL isOwnedCloudSharedAlbum;
@property(readonly, assign, nonatomic) BOOL isCloudSharedAlbum;
@property(readonly, assign, nonatomic) BOOL isPhotoStreamAlbum;
@property(readonly, assign, nonatomic) BOOL isCameraAlbum;
@property(readonly, assign, nonatomic) BOOL isLibrary;
@property(readonly, assign, nonatomic) UIImage* posterImage;
@property(retain, nonatomic) PLManagedAsset* keyAsset;
@property(readonly, assign, nonatomic) NSString* name;
@property(readonly, assign, nonatomic) BOOL isEmpty;
@property(assign, nonatomic) BOOL hasUnseenContentBoolValue;
@property(readonly, assign, nonatomic) unsigned videosCount;
@property(readonly, assign, nonatomic) unsigned photosCount;
@property(readonly, assign, nonatomic) unsigned count;
@property(readonly, assign, nonatomic) unsigned assetsCount;
@property(readonly, assign, nonatomic) unsigned approximateCount;
@property(readonly, assign, nonatomic) NSMutableOrderedSet* mutableAssets;
@property(readonly, assign, nonatomic) NSOrderedSet* assets;	// @dynamic
@property(readonly, assign, nonatomic) NSString* localizedTitle;
@property(readonly, assign, nonatomic) NSString* title;
@property(readonly, assign, nonatomic) int kindValue;
@property(readonly, assign, nonatomic) NSNumber* kind;
@property(readonly, assign, nonatomic) NSString* uuid;
@property(assign, nonatomic) BOOL albumShouldBeAutomaticallyDeleted;	// @synthesize
@property(assign, nonatomic) BOOL stackedImageNeedsUpdate;	// @synthesize
@property(assign, nonatomic) BOOL resolvingConflicts;	// @synthesize=_resolvingConflicts
+(void)clearAssetOrderByAbumUUIDs;
+(id)assetOrderByAbumUUIDs;
+(id)pathToAssetAlbumOrderStructure;
+(id)keyPathsForValuesAffectingVideosCount;
+(id)keyPathsForValuesAffectingPhotosCount;
+(id)keyPathsForValuesAffectingApproximateCount;
+(BOOL)deviceSupportsStackedImages;
// declared property setter: -(void)setAlbumShouldBeAutomaticallyDeleted:(BOOL)beAutomaticallyDeleted;
// declared property getter: -(BOOL)albumShouldBeAutomaticallyDeleted;
// declared property setter: -(void)setStackedImageNeedsUpdate:(BOOL)update;
// declared property getter: -(BOOL)stackedImageNeedsUpdate;
// declared property setter: -(void)setResolvingConflicts:(BOOL)conflicts;
// declared property getter: -(BOOL)resolvingConflicts;
-(void)refreshAssets;
-(id)filteredIndexesForPredicate:(id)predicate;
-(void)addAssetUsingiTunesAlbumOrder:(id)order;
-(void)sortAssetsUsingiTunesAlbumOrder;
-(id)_assetOrderByAssetUUID;
-(id)_orderComparisonValueForAsset:(id)asset iTunesLookupOrder:(id)order;
-(void)removePersistedFileSystemData;
-(void)persistMetadataToFileSystem;
-(void)awakeFromSnapshotEvents:(unsigned)snapshotEvents;
-(void)_recalculateCachedCounts;
-(void)replaceAssetsAtIndexes:(id)indexes withAssets:(id)assets;
-(void)removeAssetsAtIndexes:(id)indexes;
-(void)insertAssets:(id)assets atIndexes:(id)indexes;
// declared property getter: -(unsigned)videosCount;
// declared property getter: -(unsigned)photosCount;
-(unsigned)_cachedCountForMigration;
// declared property getter: -(unsigned)assetsCount;
// declared property getter: -(unsigned)approximateCount;
-(void)unregisterForChanges;
-(void)registerForChanges;
-(id)_keysToBeObserved;
-(void)_updateKeyAssetIfNeeded;
-(id)_expectedKeyAsset;
-(void)updateStackedImageShouldNotifyImmediately:(BOOL)updateStackedImage;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
-(void)removeInternalUserEditableAssetsAtIndexes:(id)indexes;
-(void)insertInternalUserEditableAssets:(id)assets atIndexes:(id)indexes;
-(id)internalUserEditableAssetsAtIndexes:(id)indexes;
-(void)getInternalUserEditableAssets:(id*)assets range:(NSRange)range;
-(id)objectInInternalUserEditableAssetsAtIndex:(unsigned)index;
-(unsigned)indexInInternalUserEditableAssetsOfObject:(id)object;
-(unsigned)countOfInternalUserEditableAssets;
// declared property getter: -(id)userEditableAssets;
-(void)didSave;
-(void)_handleStackedImageNeedsUpdate:(BOOL)update;
// declared property getter: -(id)mutableAssets;
-(BOOL)_shouldCopyAssetToCameraRollBeforeAdding:(id)cameraRollBeforeAdding;
-(BOOL)canPerformEditOperation:(int)operation;
@end
