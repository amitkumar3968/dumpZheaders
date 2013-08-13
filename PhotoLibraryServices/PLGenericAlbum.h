/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import "PLAssetContainer.h"
#import "PLDerivedAlbumOrigin.h"
#import "PLIndexMappersDataOrigin.h"
#import "PhotoLibraryServices-Structs.h"
#import "_PLGenericAlbum.h"

@class NSString, NSNumber, NSOrderedSet, NSMutableOrderedSet, NSObject, PLManagedAsset, UIImage, NSDictionary, NSURL, PLPhotoLibrary;
@protocol PLIndexMappingCache;

@interface PLGenericAlbum : _PLGenericAlbum <PLAssetContainer, PLDerivedAlbumOrigin, PLIndexMappersDataOrigin> {
@private
	NSObject<PLIndexMappingCache>* _derivededAlbums[5];
	BOOL isRegisteredForChanges;
	BOOL didRegisteredWithUserInterfaceContext;
}
@property(assign, nonatomic) unsigned pendingItemsType;	// @dynamic
@property(assign, nonatomic) unsigned pendingItemsCount;	// @dynamic
@property(readonly, assign, nonatomic) id sectioningComparator;
@property(readonly, assign, nonatomic) id sortingComparator;
@property(readonly, assign, nonatomic) NSURL* groupURL;
@property(retain, nonatomic) NSString* importSessionID;	// @dynamic
@property(retain, nonatomic) NSDictionary* slideshowSettings;
@property(readonly, assign, nonatomic) BOOL canShowComments;
@property(readonly, assign, nonatomic) BOOL isOwnedCloudSharedAlbum;
@property(readonly, assign, nonatomic) BOOL isCloudSharedAlbum;
@property(readonly, assign, nonatomic) BOOL isPhotoStreamAlbum;
@property(readonly, assign, nonatomic) UIImage* posterImage;
@property(retain, nonatomic) PLManagedAsset* keyAsset;	// @dynamic
@property(readonly, assign, nonatomic) NSString* name;
@property(readonly, assign, nonatomic) BOOL isEmpty;
@property(assign, nonatomic) BOOL hasUnseenContentBoolValue;
@property(readonly, assign, nonatomic) unsigned videosCount;
@property(readonly, assign, nonatomic) unsigned photosCount;
@property(readonly, assign, nonatomic) unsigned count;
@property(readonly, assign, nonatomic) unsigned assetsCount;
@property(readonly, assign, nonatomic) unsigned approximateCount;
@property(readonly, assign, nonatomic) NSMutableOrderedSet* mutableAssets;	// @dynamic
@property(readonly, assign, nonatomic) NSOrderedSet* assets;	// @dynamic
@property(readonly, assign, nonatomic) NSString* localizedTitle;
@property(readonly, assign, nonatomic) NSNumber* kind;
@property(assign, nonatomic) BOOL didRegisteredWithUserInterfaceContext;	// @synthesize
@property(assign, nonatomic) BOOL isRegisteredForChanges;	// @synthesize
@property(readonly, assign, nonatomic) unsigned indexOfPosterImage;
@property(readonly, assign, nonatomic) BOOL shouldDeleteWhenEmpty;
@property(readonly, assign, nonatomic) BOOL isCameraAlbum;
@property(readonly, assign, nonatomic) BOOL isLibrary;
@property(retain, nonatomic) NSString* title;
@property(assign, nonatomic) int kindValue;
@property(retain, nonatomic) NSString* uuid;
@property(readonly, assign, nonatomic) PLPhotoLibrary* photoLibrary;
+(void)addSingletonObjectsToContext:(id)context;
+(id)albumsMatchingPredicate:(id)predicate inManagedObjectContext:(id)managedObjectContext;
+(id)albumWithKind:(int)kind inManagedObjectContext:(id)managedObjectContext;
+(id)insertAlbumWithKind:(int)kind title:(id)title uuid:(id)uuid inManagedObjectContext:(id)managedObjectContext;
+(id)eventsWithName:(id)name andImportSessionIdentifier:(id)identifier inManagedObjectContext:(id)managedObjectContext;
+(id)albumsWithUUID:(id)uuid inManagedObjectContext:(id)managedObjectContext;
+(id)albumsWithKind:(int)kind inManagedObjectContext:(id)managedObjectContext;
+(id)allAlbumsRegisteredWithManagedObjectContext:(id)managedObjectContext;
+(id)allAlbumsInManagedObjectContext:(id)managedObjectContext;
+(NSObject*)albumFromGroupURL:(id)groupURL photoLibrary:(id)library;
+(id)insertNewFaceAlbumIntoLibrary:(id)library;
+(id)insertNewCloudSharedAlbumWithTitle:(id)title lastInterestingDate:(id)date intoLibrary:(id)library;
+(id)insertNewEventIntoLibrary:(id)library;
+(id)insertNewEventWithTitle:(id)title intoLibrary:(id)library;
+(id)insertNewAlbumIntoLibrary:(id)library;
+(id)insertNewAlbumWithTitle:(id)title intoLibrary:(id)library;
+(id)insertNewAlbumWithKind:(int)kind title:(id)title intoLibrary:(id)library;
+(id)_insertNewAlbumWithKind:(int)kind title:(id)title lastInterestingDate:(id)date intoLibrary:(id)library;
+(id)albumsMatchingPredicate:(id)predicate inLibrary:(id)library;
+(id)albumsForStreamID:(id)streamID inLibrary:(id)library;
+(id)albumWithName:(id)name inLibrary:(id)library;
+(id)albumWithObjectID:(id)objectID inLibrary:(id)library;
+(id)albumWithUUID:(id)uuid inLibrary:(id)library;
+(id)allAlbumsInLibrary:(id)library;
+(id)filesystemImportProgressAlbumInLibrary:(id)library;
+(id)otaRestoreProgressAlbumInLibrary:(id)library;
+(id)syncProgressAlbumInLibrary:(id)library;
+(id)iTunesLibraryAlbumInLibrary:(id)library;
+(id)wallpaperAlbumInLibrary:(id)library;
+(id)allPhotoStreamAssetsAlbumInLibrary:(id)library;
+(id)allNonPhotoStreamAssetsAlbumInLibrary:(id)library;
+(id)allAssetsAlbumInLibrary:(id)library;
+(id)cameraRollAlbumInLibrary:(id)library;
+(id)_singletonManagedAlbumWithKind:(int)kind library:(id)library;
+(id)_singletonFetchingAlbumWithKind:(int)kind library:(id)library;
+(id)keyPathsForValuesAffectingKindValue;
+(id)keyPathsForValuesAffectingName;
// declared property setter: -(void)setDidRegisteredWithUserInterfaceContext:(BOOL)registeredWithUserInterfaceContext;
// declared property getter: -(BOOL)didRegisteredWithUserInterfaceContext;
// declared property setter: -(void)setIsRegisteredForChanges:(BOOL)changes;
// declared property getter: -(BOOL)isRegisteredForChanges;
-(void)enumerateDerivedIndexMappers:(id)mappers;
-(BOOL)hasDerivedIndexMappers;
-(void)enumerateDerivedAlbums:(id)albums;
-(void)unregisterAllDerivedAlbums;
-(void)registerDerivedAlbum:(NSObject*)album;
-(id)_prettyDescription;
-(id)_compactDebugDescription;
-(id)_kindDescription;
-(unsigned)countForAssetsOfKind:(int)kind;
// declared property getter: -(unsigned)indexOfPosterImage;
-(void)unregisterForChanges;
-(void)registerForChanges;
-(void)updateStackedImageShouldNotifyImmediately:(BOOL)updateStackedImage;
-(void)reducePendingItemsCountBy:(unsigned)by;
-(void)batchFetchAssets:(id)assets;
-(id)assetsByObjectIDAtIndexes:(id)indexes;
-(id)displayableIndexesForCount:(unsigned)count;
-(id)titleForSectionStartingAtIndex:(unsigned)index;
// declared property getter: -(id)sectioningComparator;
// declared property getter: -(id)sortingComparator;
// declared property getter: -(id)groupURL;
// declared property getter: -(BOOL)shouldDeleteWhenEmpty;
-(BOOL)canPerformEditOperation:(int)operation;
// declared property getter: -(BOOL)canShowComments;
// declared property getter: -(BOOL)isOwnedCloudSharedAlbum;
// declared property getter: -(BOOL)isCloudSharedAlbum;
// declared property getter: -(BOOL)isPhotoStreamAlbum;
// declared property getter: -(BOOL)isCameraAlbum;
// declared property getter: -(BOOL)isLibrary;
// declared property setter: -(void)setKindValue:(int)value;
// declared property getter: -(int)kindValue;
// declared property getter: -(id)posterImage;
// declared property getter: -(id)name;
// declared property getter: -(id)localizedTitle;
// declared property setter: -(void)setHasUnseenContentBoolValue:(BOOL)value;
// declared property getter: -(BOOL)hasUnseenContentBoolValue;
// declared property getter: -(unsigned)videosCount;
// declared property getter: -(unsigned)photosCount;
// declared property getter: -(BOOL)isEmpty;
// declared property getter: -(unsigned)count;
// declared property getter: -(unsigned)assetsCount;
// declared property getter: -(unsigned)approximateCount;
-(void)willTurnIntoFault;
-(void)awakeFromFetch;
-(void)awakeFromInsert;
// declared property getter: -(id)photoLibrary;
-(void)delete;
// declared property setter: -(void)setSlideshowSettings:(id)settings;
// declared property getter: -(id)slideshowSettings;
-(void)setKind:(id)kind;
// declared property getter: -(id)kind;
// declared property setter: -(void)setTitle:(id)title;
// declared property getter: -(id)title;
// declared property setter: -(void)setUuid:(id)uuid;
// declared property getter: -(id)uuid;
-(void)dealloc;
@end
