/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import "PLAssetContainer.h"
#import "PLDerivedAlbumOrigin.h"
#import "PhotoLibraryServices-Structs.h"
#import "PLIndexMappingCache.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSNumber, NSOrderedSet, NSMutableOrderedSet, NSObject, PLManagedAsset, UIImage, NSDictionary, NSURL, NSFetchRequest, NSCache, PLManagedAlbum;

@interface PLInFlightAssetsAlbum : XXUnknownSuperclass <PLAssetContainer, PLIndexMappingCache, PLDerivedAlbumOrigin> {
@private
	NSFetchRequest* _fetchRequest;
	NSMutableOrderedSet* _albumOIDs;
	NSMutableOrderedSet* _inflightAssets;
	unsigned _photosCount;
	unsigned _videosCount;
	NSCache* __assetCache;
	PLManagedAlbum* _backingAlbum;
	BOOL _sessionLimited;
	id _weak_assets;
	NSObject<PLIndexMappingCache>* _derivedAlbums[5];
}
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
@property(readonly, assign, nonatomic) NSOrderedSet* assets;
@property(readonly, assign, nonatomic) NSString* localizedTitle;
@property(readonly, assign, nonatomic) NSString* title;
@property(readonly, assign, nonatomic) int kindValue;
@property(readonly, assign, nonatomic) NSNumber* kind;
@property(readonly, assign, nonatomic) NSString* uuid;
@property(assign, nonatomic) NSMutableOrderedSet* _assets;
@property(assign, nonatomic) BOOL sessionLimited;
@property(readonly, assign, nonatomic) PLManagedAlbum* backingAlbum;	// @synthesize=_backingAlbum
@property(readonly, retain) NSFetchRequest* fetchRequest;	// converted property
+(NSObject*)inFlightAssetsAlbumWithBackingAlbum:(NSObject*)backingAlbum;
// declared property getter: -(id)backingAlbum;
-(id)filteredIndexesForPredicate:(id)predicate;
-(void)startNewSession;
// declared property getter: -(BOOL)sessionLimited;
// declared property setter: -(void)setSessionLimited:(BOOL)limited;
-(void)removeObjectFromMergedAssetsAtIndex:(unsigned)index;
-(void)insertObject:(id)object inMergedAssetsAtIndex:(unsigned)index;
-(void)getMergedAssets:(id*)assets range:(NSRange)range;
-(id)objectInMergedAssetsAtIndex:(unsigned)index;
-(unsigned)indexInMergedAssetsOfObject:(id)object;
-(unsigned)countOfMergedAssets;
-(id)managedObjectsForOIDs:(id)oids;
-(id)managedObjectsAtAlbumIndexes:(id)albumIndexes;
-(id)managedObjectAtAlbumIndex:(unsigned)albumIndex;
-(id)managedObjectForOID:(id)oid;
-(unsigned)batchSize;
-(BOOL)hasDerivedIndexMappers;
-(void)enumerateDerivedAlbums:(id)albums;
-(void)unregisterAllDerivedAlbums;
-(void)registerDerivedAlbum:(NSObject*)album;
-(id)titleForSectionStartingAtIndex:(unsigned)index;
// declared property getter: -(id)sectioningComparator;
// declared property getter: -(id)sortingComparator;
-(void)batchFetchAssets:(id)assets;
-(id)assetsByObjectIDAtIndexes:(id)indexes;
-(void)updateStackedImageShouldNotifyImmediately:(BOOL)updateStackedImage;
-(void)reducePendingItemsCountBy:(unsigned)by;
// declared property setter: -(void)setPendingItemsType:(unsigned)type;
// declared property getter: -(unsigned)pendingItemsType;
// declared property setter: -(void)setPendingItemsCount:(unsigned)count;
// declared property getter: -(unsigned)pendingItemsCount;
-(id)displayableIndexesForCount:(unsigned)count;
// declared property getter: -(id)groupURL;
// declared property setter: -(void)setImportSessionID:(id)anId;
// declared property getter: -(id)importSessionID;
// declared property setter: -(void)setSlideshowSettings:(id)settings;
// declared property getter: -(id)slideshowSettings;
// declared property getter: -(BOOL)shouldDeleteWhenEmpty;
-(BOOL)canPerformEditOperation:(int)operation;
// declared property getter: -(BOOL)canShowComments;
// declared property getter: -(BOOL)isOwnedCloudSharedAlbum;
// declared property getter: -(BOOL)isCloudSharedAlbum;
// declared property getter: -(BOOL)isPhotoStreamAlbum;
// declared property getter: -(BOOL)isCameraAlbum;
// declared property getter: -(BOOL)isLibrary;
// declared property getter: -(id)posterImage;
// declared property setter: -(void)setKeyAsset:(id)asset;
// declared property getter: -(id)keyAsset;
// declared property getter: -(id)localizedTitle;
// declared property setter: -(void)setHasUnseenContentBoolValue:(BOOL)value;
// declared property getter: -(BOOL)hasUnseenContentBoolValue;
// declared property getter: -(unsigned)videosCount;
// declared property getter: -(unsigned)photosCount;
// declared property getter: -(BOOL)isEmpty;
// declared property getter: -(unsigned)count;
// declared property getter: -(unsigned)assetsCount;
// declared property getter: -(unsigned)approximateCount;
// declared property getter: -(id)mutableAssets;
// declared property getter: -(id)assets;
// declared property getter: -(int)kindValue;
// declared property getter: -(id)kind;
// declared property getter: -(id)title;
// declared property getter: -(id)uuid;
-(unsigned)countForAssetsOfKind:(int)kind;
-(unsigned)_fetchedCountForAssetsOfKind:(int)kind;
-(id)_albumOIDs;
-(void)_resetAlbumOIDs;
// converted property getter: -(id)fetchRequest;
// declared property setter: -(void)set_assets:(id)assets;
// declared property getter: -(id)_assets;
-(Class)derivedChangeNotificationClass;
-(BOOL)mappedDataSourceChanged:(id)changed remoteNotificationData:(id)data;
-(id)currentStateForChange;
-(id)cachedIndexMapState;
-(void)deleteInflightAssets:(id)assets;
-(void)addInFlightAsset:(id)flightAsset;
-(id)description;
-(void)dealloc;
-(id)initWithBackingAlbum:(NSObject*)backingAlbum;
@end

