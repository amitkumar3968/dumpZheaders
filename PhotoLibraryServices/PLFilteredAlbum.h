/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import "PLCloudSharedContainer.h"
#import "PLUserEditableAssetContainer.h"
#import "PLIndexMapperDataSource.h"
#import "PhotoLibraryServices-Structs.h"
#import "PLIndexMappingCache.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSNumber, NSOrderedSet, NSMutableOrderedSet, PLManagedAsset, NSObject, UIImage, NSDictionary, NSArray, NSURL, NSDate, NSPredicate, NSIndexSet, NSMutableIndexSet, PLIndexMapper;
@protocol NSCopying;

@interface PLFilteredAlbum : XXUnknownSuperclass <PLUserEditableAssetContainer, PLCloudSharedContainer, PLIndexMapperDataSource, PLIndexMappingCache> {
@private
	PLIndexMapper* _indexMapper;
	NSMutableIndexSet* _filteredIndexes;
	BOOL _backingAlbumSupportsEdits;
	BOOL _backingAlbumSupportsCloudShared;
	NSMutableOrderedSet* _weak_assets;
	NSObject* _backingAlbum;
	int filter;
	NSPredicate* predicate;
	BOOL isObservingContextChanges;
	NSArray* _filterParameters;
}
@property(readonly, assign, nonatomic) id<NSObject, NSCopying> cachedIndexMapState;
@property(readonly, assign, nonatomic) NSIndexSet* filteredIndexes;
@property(readonly, assign, nonatomic) NSDate* cloudFirstRecentBatchDate;
@property(readonly, assign, nonatomic) NSOrderedSet* cloudAlbumSubscriberRecords;
@property(readonly, assign, nonatomic) NSString* localizedSharedWithLabel;
@property(readonly, assign) int cloudRelationshipStateLocalValue;
@property(readonly, assign) int cloudRelationshipStateValue;
@property(retain, nonatomic) NSString* cloudPersonID;
@property(retain, nonatomic) NSDate* cloudLastInterestingChangeDate;
@property(retain, nonatomic) NSNumber* cloudPublicURLEnabledLocal;
@property(retain, nonatomic) NSNumber* cloudPublicURLEnabled;
@property(assign) unsigned unseenAssetsCountIntegerValue;
@property(retain, nonatomic) NSNumber* unseenAssetsCount;
@property(retain, nonatomic) NSOrderedSet* invitationRecords;
@property(retain, nonatomic) NSString* publicURL;
@property(retain, nonatomic) NSString* cloudOwnerEmail;
@property(retain, nonatomic) NSString* cloudOwnerLastName;
@property(retain, nonatomic) NSString* cloudOwnerFirstName;
@property(retain, nonatomic) NSDictionary* cloudMetadata;
@property(retain, nonatomic) NSString* cloudGUID;
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
@property(readonly, assign, nonatomic) NSOrderedSet* assets;
@property(readonly, assign, nonatomic) NSString* localizedTitle;
@property(readonly, assign, nonatomic) NSString* title;
@property(readonly, assign, nonatomic) int kindValue;
@property(readonly, assign, nonatomic) NSNumber* kind;
@property(readonly, assign, nonatomic) NSString* uuid;
@property(assign, nonatomic) NSMutableOrderedSet* _assets;
@property(assign, nonatomic) BOOL isObservingContextChanges;	// @synthesize
@property(retain, nonatomic) NSPredicate* predicate;	// @synthesize
@property(retain, nonatomic) NSObject<PLAssetContainer>* backingAlbum;	// @synthesize=_backingAlbum
@property(readonly, assign, nonatomic) PLIndexMapper* indexMapper;
@property(readonly, assign, nonatomic) NSArray* filterParameters;	// @synthesize=_filterParameters
@property(assign, nonatomic) int filter;	// @synthesize
+(id)filteredIndexesInAlbum:(NSObject*)album predicate:(id)predicate;
+(id)descriptionForAlbumFilter:(int)albumFilter parameters:(id)parameters;
+(id)predicateForAlbumFilter:(int)albumFilter parameters:(id)parameters;
+(NSObject*)unfilteredAlbum:(NSObject*)album;
+(NSObject*)filteredAlbum:(NSObject*)album intersectFilter:(int)filter;
+(NSObject*)filteredAlbum:(NSObject*)album filter:(int)filter parameters:(id)parameters;
+(NSObject*)filteredAlbum:(NSObject*)album filter:(int)filter;
// declared property getter: -(id)filterParameters;
// declared property setter: -(void)setIsObservingContextChanges:(BOOL)changes;
// declared property getter: -(BOOL)isObservingContextChanges;
// declared property setter: -(void)setPredicate:(id)predicate;
// declared property getter: -(id)predicate;
// declared property setter: -(void)setFilter:(int)filter;
// declared property getter: -(int)filter;
// declared property getter: -(NSObject*)backingAlbum;
-(void)replaceFilteredAssetsAtIndexes:(id)indexes withFilteredValues:(id)filteredValues;
-(void)replaceObjectInFilteredAssetsAtIndex:(unsigned)index withObject:(id)object;
-(void)removeFilteredAssetsAtIndexes:(id)indexes;
-(void)insertFilteredAssets:(id)assets atIndexes:(id)indexes;
-(void)removeObjectFromFilteredAssetsAtIndex:(unsigned)index;
-(void)insertObject:(id)object inFilteredAssetsAtIndex:(unsigned)index;
-(id)_editableBackingAlbum;
-(void)getFilteredAssets:(id*)assets range:(NSRange)range;
-(id)filteredAssetsAtIndexes:(id)indexes;
-(id)objectInFilteredAssetsAtIndex:(unsigned)index;
-(unsigned)indexInFilteredAssetsOfObject:(id)object;
-(unsigned)countOfFilteredAssets;
-(Class)derivedChangeNotificationClass;
-(BOOL)mappedDataSourceChanged:(id)changed remoteNotificationData:(id)data;
-(BOOL)shouldIncludeObjectAtIndex:(unsigned)index;
-(id)currentStateForChange;
// declared property getter: -(id)cachedIndexMapState;
// declared property getter: -(id)filteredIndexes;
// declared property getter: -(id)indexMapper;
-(id)initWithBackingAlbum:(NSObject*)backingAlbum filter:(int)filter parameters:(id)parameters;
-(void)updateStackedImageShouldNotifyImmediately:(BOOL)updateStackedImage;
-(void)reducePendingItemsCountBy:(unsigned)by;
// declared property setter: -(void)setPendingItemsType:(unsigned)type;
// declared property getter: -(unsigned)pendingItemsType;
// declared property setter: -(void)setPendingItemsCount:(unsigned)count;
// declared property getter: -(unsigned)pendingItemsCount;
-(void)backingContextDidChange:(id)backingContext;
-(void)userDeleteSubscriberRecord:(id)record;
-(void)getUnseenStartMarkerIndex:(unsigned*)index count:(unsigned*)count showsProgress:(BOOL*)progress;
-(void)updateCloudLastInterestingChangeDateWithDate:(id)date;
-(id)cloudOwnerDisplayNameIncludingEmail:(BOOL)email allowsEmail:(BOOL)email2;
// declared property getter: -(id)cloudAlbumSubscriberRecords;
// declared property getter: -(id)cloudFirstRecentBatchDate;
// declared property getter: -(id)localizedSharedWithLabel;
-(id)localizedSharedByLabelAllowsEmail:(BOOL)email;
// declared property getter: -(int)cloudRelationshipStateLocalValue;
// declared property getter: -(int)cloudRelationshipStateValue;
// declared property setter: -(void)setCloudLastInterestingChangeDate:(id)date;
// declared property getter: -(id)cloudLastInterestingChangeDate;
// declared property setter: -(void)setCloudPublicURLEnabledLocal:(id)local;
// declared property getter: -(id)cloudPublicURLEnabledLocal;
// declared property setter: -(void)setCloudPublicURLEnabled:(id)enabled;
// declared property getter: -(id)cloudPublicURLEnabled;
// declared property setter: -(void)setUnseenAssetsCountIntegerValue:(unsigned)value;
// declared property getter: -(unsigned)unseenAssetsCountIntegerValue;
// declared property setter: -(void)setUnseenAssetsCount:(id)count;
// declared property getter: -(id)unseenAssetsCount;
// declared property setter: -(void)setInvitationRecords:(id)records;
// declared property getter: -(id)invitationRecords;
// declared property setter: -(void)setCloudPersonID:(id)anId;
// declared property getter: -(id)cloudPersonID;
// declared property setter: -(void)setPublicURL:(id)url;
// declared property getter: -(id)publicURL;
// declared property setter: -(void)setCloudOwnerEmail:(id)email;
// declared property getter: -(id)cloudOwnerEmail;
// declared property setter: -(void)setCloudOwnerLastName:(id)name;
// declared property getter: -(id)cloudOwnerLastName;
// declared property setter: -(void)setCloudOwnerFirstName:(id)name;
// declared property getter: -(id)cloudOwnerFirstName;
// declared property setter: -(void)setCloudMetadata:(id)metadata;
// declared property getter: -(id)cloudMetadata;
// declared property setter: -(void)setCloudGUID:(id)guid;
// declared property getter: -(id)cloudGUID;
-(id)_cloudSharedBackingAlbum;
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
// declared property getter: -(id)localizedTitle;
// declared property getter: -(unsigned)videosCount;
// declared property getter: -(unsigned)photosCount;
// declared property getter: -(BOOL)isEmpty;
// declared property setter: -(void)setHasUnseenContentBoolValue:(BOOL)value;
// declared property getter: -(BOOL)hasUnseenContentBoolValue;
// declared property getter: -(unsigned)count;
// declared property getter: -(unsigned)assetsCount;
// declared property getter: -(unsigned)approximateCount;
// declared property getter: -(id)userEditableAssets;
// declared property getter: -(id)mutableAssets;
// declared property getter: -(id)assets;
// declared property getter: -(int)kindValue;
// declared property getter: -(id)kind;
// declared property getter: -(id)title;
// declared property getter: -(id)uuid;
// declared property setter: -(void)set_assets:(id)assets;
// declared property getter: -(id)_assets;
// declared property setter: -(void)setBackingAlbum:(id)album;
-(id)description;
-(void)dealloc;
@end
