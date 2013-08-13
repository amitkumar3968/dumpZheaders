/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import "PLAssetContainer.h"
#import "PhotoLibraryServices-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "PLIndexMappingCache.h"

@class PLManagedAsset, UIImage, NSDictionary, NSURL, NSObject, NSString, NSNumber, NSOrderedSet, NSMutableOrderedSet;
@protocol NSCopying;

@interface PLShuffledAlbum : XXUnknownSuperclass <PLIndexMappingCache, PLAssetContainer> {
	CFArrayRef _toBackingMap;
	CFArrayRef _fromBackingMap;
@private
	NSObject* _backingAlbum;
	PLManagedAsset* _startingAsset;
	NSMutableOrderedSet* _assets;
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
@property(retain, nonatomic) NSMutableOrderedSet* _assets;	// @synthesize
@property(readonly, assign, nonatomic) id<NSObject, NSCopying> cachedIndexMapState;
@property(readonly, assign, nonatomic) NSObject<PLAssetContainer>* backingAlbum;
@property(readonly, assign, nonatomic) PLManagedAsset* startingAsset;
@property(readonly, assign) CFArrayRef fromBackingMap;	// converted property
+(NSObject*)unshuffledAlbum:(NSObject*)album;
+(NSObject*)shuffledAlbum:(NSObject*)album startingAsset:(id)asset;
// declared property setter: -(void)set_assets:(id)assets;
// declared property getter: -(id)_assets;
-(void)batchFetchAssets:(id)assets;
-(id)displayableIndexesForCount:(unsigned)count;
-(id)titleForSectionStartingAtIndex:(unsigned)index;
// declared property getter: -(id)sectioningComparator;
// declared property getter: -(id)sortingComparator;
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
// declared property getter: -(id)name;
-(void)updateStackedImageShouldNotifyImmediately:(BOOL)updateStackedImage;
-(void)reducePendingItemsCountBy:(unsigned)by;
// declared property setter: -(void)setPendingItemsType:(unsigned)type;
// declared property getter: -(unsigned)pendingItemsType;
// declared property setter: -(void)setPendingItemsCount:(unsigned)count;
// declared property getter: -(unsigned)pendingItemsCount;
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
// declared property getter: -(id)localizedTitle;
// declared property getter: -(id)title;
// declared property getter: -(int)kindValue;
// declared property getter: -(id)kind;
// declared property getter: -(id)uuid;
-(void)dealloc;
-(id)init;
// declared property getter: -(id)startingAsset;
// declared property getter: -(NSObject*)backingAlbum;
-(id)initWithBackingAlbum:(NSObject*)backingAlbum startingAsset:(id)asset;
-(id)description;
-(Class)derivedChangeNotificationClass;
-(BOOL)mappedDataSourceChanged:(id)changed remoteNotificationData:(id)data;
// declared property getter: -(id)cachedIndexMapState;
-(void)createShuffledIndexesMaps;
-(void)createShuffledIndexesMapsIfNeeded;
// converted property getter: -(CFArrayRef)fromBackingMap;
-(void)replaceObjectInShuffledAssetsAtIndex:(unsigned)index withObject:(id)object;
-(void)removeObjectFromShuffledAssetsAtIndex:(unsigned)index;
-(void)insertObject:(id)object inShuffledAssetsAtIndex:(unsigned)index;
-(id)objectInShuffledAssetsAtIndex:(unsigned)index;
-(unsigned)indexInShuffledAssetsOfObject:(id)object;
-(unsigned)countOfShuffledAssets;
@end

