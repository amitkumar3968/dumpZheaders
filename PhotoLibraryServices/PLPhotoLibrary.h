/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import "PhotoLibraryServices-Structs.h"
#import <CoreMediaStream/_kMSAssetMetadataAssetTypeFullSizeDerivative.h>

@class NSMutableArray, NSCalendar, NSMutableDictionary, NSSet, NSObject, NSArray, NSDictionary, PLInFlightAssetsAlbum, PLManagedObjectContext, PLFetchingAlbum, PLGenericAlbum, PLWStackedImageCache, PLThumbnailManager, PLManagedAlbum;
@protocol PLAssetContainer;

@interface PLPhotoLibrary : _kMSAssetMetadataAssetTypeFullSizeDerivative {
	BOOL _listeningForITunesSyncing;
	BOOL _canTriggerDatabaseUpdate;
	BOOL _isTransient;
	unsigned _pendingTransactions;
	CFDictionaryRef _allPhotos;
	int _databaseMigrationKind;
	NSMutableArray* _transactionCompletionHandlers;
	PLThumbnailManager* _thumbnailManager;
	NSDictionary* _existingThumbnailEntries;
	PLGenericAlbum* _allImportedPhotosAlbum;
	PLGenericAlbum* _lastImportedPhotosAlbum;
	NSCalendar* _exifConversionCalendar;
	NSMutableDictionary* _photoStreamAlbumsByStreamID;
	NSMutableArray* _photoStreamAlbums;
	id _ptpDelegate;
	PLWStackedImageCache* _stackedImageCache;
	NSSet* _imageFileExtensions;
	NSSet* _rawImageFileExtensions;
	NSSet* _audioFileExtensions;
	NSSet* _extraVideoExtensions;
	unsigned _lastFetchedGPSCount;
	unsigned _insertedCountSinceLastFetchedGPSCount;
	unsigned _deletedCountSinceLastFetchedGPSCount;
	unsigned _newlyCompleteWithGPS;
@private
	PLManagedAlbum* _cameraRollAlbum;
	PLFetchingAlbum* _cameraSessionAlbum;
	PLInFlightAssetsAlbum* _inFlightAssetsAlbum;
	PLManagedObjectContext* managedObjectContext;
}
@property(readonly, assign, nonatomic) NSArray* photoStreamAlbumsForPreferences;
@property(readonly, assign, nonatomic) NSArray* photoStreamAlbums;
@property(readonly, assign, nonatomic) NSArray* placeAlbums;
@property(readonly, assign, nonatomic) NSArray* faceAlbums;
@property(readonly, assign, nonatomic) NSArray* eventAlbums;
@property(readonly, assign, nonatomic) NSArray* wallpaperAlbums;
@property(readonly, assign, nonatomic) NSArray* imagePickerAlbums;
@property(readonly, assign, nonatomic) NSArray* userAlbums;
@property(readonly, assign, nonatomic) NSArray* albums;
@property(readonly, assign, nonatomic) NSObject<PLAssetContainer>* inFlightAssetsAlbum;
@property(readonly, assign, nonatomic) NSObject<PLAssetContainer>* savedPhotosAlbum;
@property(readonly, assign, nonatomic) PLThumbnailManager* thumbnailManager;
@property(retain, nonatomic) PLManagedObjectContext* managedObjectContext;	// @synthesize
@property(retain) id lastImportSessionUUID;	// converted property
@property(readonly, assign) BOOL isTransient;	// converted property
@property(readonly, retain) PLGenericAlbum* allImportedPhotosAlbum;	// converted property
@property(readonly, retain) PLGenericAlbum* lastImportedPhotosAlbum;	// converted property
+(BOOL)_assetsLibrary_isSharedPhotoStreamsSupportEnabled;
+(void)_assetsLibrary_disableSharedPhotoStreamsSupport;
+(BOOL)canSaveVideoToCameraRoll:(id)cameraRoll;
+(id)calculatedDisplayableIndexesForAlbum:(NSObject*)album count:(unsigned)count;
+(void)resetSyncedAssetsDCIMDirectory;
+(void)initializeGraphicsServices;
+(void)setSqliteErrorAndExitIfNecessary;
+(BOOL)processCanWriteSandboxForPath:(id)path;
+(BOOL)processCanReadSandboxForPath:(id)path;
+(id)persistedAlbumDataDirectoryURL;
+(id)iTunesSyncedFaceDataDirectory;
+(id)iTunesSyncedFaceAlbumThumbnailsDirectory;
+(id)iTunesSyncedAssetThumbnailsDirectory;
+(id)iTunesSyncedAssetsDirectory;
+(id)simpleDCIMDirectory;
+(id)dcimDirectory;
+(id)dcimDirectoryURL;
+(id)iTunesPhotosDirectory;
+(id)photoDataMiscDirectory;
+(id)videosPath;
+(id)photoMetadataDirectoryURL;
+(id)photoDataDirectory;
+(id)photoDataDirectoryURL;
+(id)mediaFilesDirectoryURL;
+(BOOL)needsToBeSyncedWithiTunesBecauseFormatIDsChanged;
+(void)setTakingPhotoIsBusy:(BOOL)busy;
+(void)setVideoCaptureIsBusy:(BOOL)busy;
+(void)setImageWriterIsBusy:(BOOL)busy;
+(void)setMigratorIsBusy:(BOOL)busy;
+(void)repairSingletonObjects;
+(BOOL)isRunningInStoreDemoMode;
+(id)pathToAssetsToAlbumsMapping;
+(id)crashRecoveryIndicatorFilePaths;
+(id)migrationIndicatorFilePath;
+(id)sqliteErrorIndicatorFilePath;
+(id)imageWriterIndicatorFilePath;
+(id)takingVideoIndicatorFilePath;
+(id)takingPhotoIndicatorFilePath;
+(void)_presentSqliteCorruptionErrorDialog;
+(void)createPhotoStreamAlbumWithStreamID:(id)streamID completionHandler:(id)handler;
+(id)assetsDataDirectory;
+(id)photoCloudSharingDataDirectory;
+(id)photoStreamsDataDirectory;
+(void)setCloudAlbumSharingEnabled:(BOOL)enabled;
+(void)setPhotoStreamEnabled:(BOOL)enabled;
+(NSObject*)savedPhotosAlbum;
+(void)_doFilesystemImportIfNeeded;
+(BOOL)isCrashRecoveryDisabled;
+(void)disableCrashRecovery:(BOOL)recovery;
+(void)recoverFromCrashIfNeeded;
+(void)enqeueRecoveryJob:(id)job;
+(void)handlePossibleCoreDataError:(id)error;
+(BOOL)isApplicationWildcat;
+(void)setApplicationIsWildcat:(BOOL)wildcat;
+(id)sharedPhotoLibrary;
// declared property setter: -(void)setManagedObjectContext:(id)context;
// declared property getter: -(id)managedObjectContext;
-(id)librarySizes;
-(BOOL)getPhotoCount:(unsigned*)count videoCount:(unsigned*)count2;
-(id)albumListForContentMode:(int)contentMode;
-(id)albumsForContentMode:(int)contentMode;
-(BOOL)isPhotoInSavedPhotosAlbum:(id)savedPhotosAlbum;
-(void)processSyncSaveJob:(id)job albumMap:(id)map;
-(BOOL)hasPhotoWithFileCreationDate:(id)fileCreationDate fileName:(id)name fileSize:(int)size;
-(int)priorityForFileExtension:(id)fileExtension;
-(BOOL)isAudioFileExtension:(id)extension;
-(BOOL)isVideoFileExtension:(id)extension;
-(BOOL)isNonRawImageFileExtension:(id)extension;
-(BOOL)isRawImageFileExtension:(id)extension;
-(BOOL)isImageFileExtension:(id)extension;
-(void)_loadFileExtensionInformation;
-(id)masterFilenameFromSidecarFileInfo:(id)sidecarFileInfo;
-(id)masterURLFromSidecarURLs:(id)sidecarURLs;
-(id)addDCIMEntryAtFileURL:(id)fileURL toEvent:(NSObject*)event sidecarFileInfo:(id)info progress:(id)progress importSessionIdentifier:(id)identifier isImported:(BOOL)imported previewImage:(id)image thumbnailImage:(id)image8 savedAssetType:(int)type replacementUUID:(id)uuid extendedInfo:(id)info11 thumbnailsData:(CFDictionaryRef)data withUUID:(id)uuid13;
-(void)modifyDCIMEntryForVideo:(id)video progress:(id)progress previewImage:(id)image thumbnailImage:(id)image4;
-(void)modifyDCIMEntryForPhoto:(id)photo;
-(id)newImageForDulcimerPhoto:(id)dulcimerPhoto format:(int)format;
-(id)newImageForDulcimerPhoto:(id)dulcimerPhoto format:(int)format outImageProperties:(const CFDictionaryRef*)properties;
-(id)dataForPhoto:(id)photo format:(int)format width:(int*)width height:(int*)height bytesPerRow:(int*)row dataWidth:(int*)width6 dataHeight:(int*)height7 imageDataOffset:(int*)offset;
-(id)imageForFormat:(int)format forAsset:(id)asset;
-(void)preheatImageDataForAssets:(id)assets format:(int)format;
-(NSObject*)filesystemImportProgressAlbum;
-(NSObject*)otaRestoreProgressAlbum;
-(NSObject*)syncProgressAlbum;
-(NSObject*)iPadAllPhotosAlbumIfExists;
-(NSObject*)iPadAllPhotosAlbum;
-(NSObject*)allPhotosAlbumIfExists;
-(NSObject*)allPhotosAlbum;
-(unsigned)editableAlbumCount;
-(id)editableAlbums;
-(id)syncedAlbums;
-(void)_updateWithInsertedAssetsCount:(unsigned)insertedAssetsCount deletedCount:(unsigned)count updatedAssets:(id)assets;
-(void)_updateHasAtLeastOnePhotoWithGPSWithInsertedCount:(unsigned)insertedCount deletedCount:(unsigned)count updatedAssets:(id)assets;
-(BOOL)hasAtLeastOnePhotoWithGPS;
-(void)resetCachedImportAlbumsIfNeededForAlbum:(id)album;
-(id)lastImportedPhotosAlbumCreateIfNeeded:(BOOL)needed;
// converted property getter: -(id)lastImportedPhotosAlbum;
-(id)allImportedPhotosAlbumCreateIfNeeded:(BOOL)needed;
// converted property getter: -(id)allImportedPhotosAlbum;
-(void)recreateAlbumsFromMetadata;
-(BOOL)needsMigration;
-(id)managedObjectWithObjectID:(id)objectID;
-(void)setGlobalValue:(id)value forKey:(id)key;
-(id)globalValueForKey:(id)key;
-(void)_unloadExistingThumbnailEntries;
-(void)_loadExistingThumbnailEntries;
-(void)_removeOrphanedThumbnailEntries;
-(unsigned)concurrencyType;
// converted property getter: -(BOOL)isTransient;
-(void)loadDatabase;
-(void)_linkAsideAlbumMetadataForOTARestore;
-(void)cleanupForStoreDemoMode;
-(void)cleanupModelAfterRestoreFromiTunesBackup;
-(void)prepareDatabaseForOTAAssetsPhase;
-(id)_allAssetsForDeletion:(id)deletion;
-(void)_batchDeleteAssets:(id)assets inManagedObjectContext:(id)managedObjectContext;
-(void)_safeSave:(id)save;
-(void)_calculatePendingItemCountsAfterOTARestoreWithMangedObjectContext:(id)mangedObjectContext;
-(void)_removeSyncedAlbumsInTransactionWithManagedObjectContext:(id)managedObjectContext;
-(int)_orientationOfFileAtPath:(id)path;
-(int)_orientationAfterRotatingOrientation:(int)orientation clockwiseByDegrees:(int)degrees transposeCoordinatesOut:(BOOL*)anOut;
-(BOOL)_hasAtLeastOneItem:(BOOL)leastOneItem;
-(void)_migrationDidFinish;
-(void)_deleteObsoleteMetadataFiles;
-(id)_init;
-(id)_getGlobal:(id)global userInfo:(id)info;
-(id)_setGlobal:(id)global userInfo:(id)info;
-(NSObject*)albumFromGroupURL:(id)groupURL;
-(id)photoFromAssetURL:(id)assetURL;
-(id)assetURLForManagedPhoto:(id)managedPhoto;
-(id)assetURLForPhoto:(id)photo;
-(id)assetURLForPhoto:(id)photo extension:(id)extension;
// converted property setter: -(void)setLastImportSessionUUID:(id)uuid;
// converted property getter: -(id)lastImportSessionUUID;
-(void)removeFromKnownPhotoStreamAlbums:(id)knownPhotoStreamAlbums;
-(void)addToKnownPhotoStreamAlbums:(id)knownPhotoStreamAlbums;
-(NSObject*)allPhotoStreamPhotosAlbum;
-(void)userDeleteAssets:(id)assets;
-(id)assetWithUUID:(id)uuid inAlbum:(NSObject*)album;
-(id)assetWithUUID:(id)uuid;
-(id)existingObjectWithID:(id)anId error:(id*)error;
-(id)objectWithObjectID:(id)objectID;
-(unsigned)countOfAlbumsContainingItems:(id)albumsContainingItems;
-(id)_albumsContainingItems:(id)items;
-(NSObject*)eventAlbumContainingPhoto:(id)photo;
// declared property getter: -(id)photoStreamAlbumsForPreferences;
// declared property getter: -(id)photoStreamAlbums;
-(void)userDeleteAlbums:(id)albums;
// declared property getter: -(id)placeAlbums;
// declared property getter: -(id)faceAlbums;
// declared property getter: -(id)eventAlbums;
// declared property getter: -(id)wallpaperAlbums;
// declared property getter: -(id)imagePickerAlbums;
// declared property getter: -(id)userAlbums;
// declared property getter: -(id)albums;
-(NSObject*)albumWithUuid:(id)uuid;
-(NSObject*)eventWithName:(id)name andImportSessionIdentifier:(id)identifier;
-(void)deleteInflightAssets:(id)assets;
-(void)addInflightAsset:(id)asset;
// declared property getter: -(NSObject*)inFlightAssetsAlbum;
// declared property getter: -(NSObject*)savedPhotosAlbum;
-(void)withDispatchGroup:(id)dispatchGroup synchronously:(BOOL)synchronously performBlock:(id)block completionHandler:(id)handler;
-(void)withDispatchGroup:(id)dispatchGroup performBlock:(id)block completionHandler:(id)handler;
-(void)withDispatchGroup:(id)dispatchGroup performBlock:(id)block;
-(void)_withDispatchGroup:(id)dispatchGroup synchronously:(BOOL)synchronously performTransaction:(id)transaction completionHandler:(id)handler;
-(void)withDispatchGroup:(id)dispatchGroup performTransaction:(id)transaction completionHandler:(id)handler;
-(void)withDispatchGroup:(id)dispatchGroup performTransaction:(id)transaction;
-(void)performBlockAndWait:(id)wait completionHandler:(id)handler;
-(void)performBlock:(id)block completionHandler:(id)handler;
-(void)performBlock:(id)block;
-(void)addCompletionHandlerToCurrentTransaction:(id)currentTransaction;
-(void)performTransactionAndWait:(id)wait completionHandler:(id)handler;
-(void)performTransaction:(id)transaction completionHandler:(id)handler;
-(void)performTransactionAndWait:(id)wait;
-(void)performTransaction:(id)transaction;
-(void)updateThumbnailsForPhoto:(id)photo previewImage:(id)image thumbnailImage:(id)image3;
-(void)deleteAllImages;
-(void)_compactThumbnailTablesIfNecessary;
-(void)_deleteFilesAndEmptyDirectoriesAtPaths:(id)paths;
-(BOOL)rotateCameraPhoto:(id)photo byDegrees:(int)degrees;
-(void)deleteImages:(id)images;
-(BOOL)hasAtLeastOnePhoto;
-(BOOL)hasAtLeastOneItem;
-(id)iTunesFaceImageForRecordID:(int)recordID faceIndex:(int)index size:(CGSize)size returnLocationInImage:(CGRect*)image;
-(void)photoLibraryAvailableNotification;
-(void)photoLibraryRebuildingNotification;
-(void)photoLibraryCorruptNotification;
-(void)_notifyPhotoLibraryIsNoLongerAvailableOnMainThread;
-(void)_loadPhotoLibraryAfterMigration;
-(id)_iTunesPhotos;
-(void)copyAssetToCameraRoll:(id)cameraRoll;
-(void)clientApplicationWillEnterForeground;
-(id)countOfAllPhotosAndVideos;
-(void)flushAlbums;
-(void)flushPhotoStreamAlbums;
-(void)flushDCIMAlbums;
-(BOOL)libraryIsAvailable;
-(void)_releaseThumbnailManager;
// declared property getter: -(id)thumbnailManager;
-(void)dealloc;
-(id)initWithTransientContext:(BOOL)transientContext;
-(id)init;
-(void)testForRecoveryInBackground;
@end

