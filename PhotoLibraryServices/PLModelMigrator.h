/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSFileManager, PLCurrentThumbnailsInformation, PLPhotoLibrary, PLXPCTransaction;

@interface PLModelMigrator : XXUnknownSuperclass {
@private
	double startTime;
	NSFileManager* _fileManager;
	PLXPCTransaction* _transaction;
	PLPhotoLibrary* _photoLibrary;
	long _photoLibraryOnce;
	PLCurrentThumbnailsInformation* _thumbnailsInformation;
}
@property(retain, nonatomic) PLCurrentThumbnailsInformation* _thumbnailsInformation;	// @synthesize
@property(readonly, assign, nonatomic) PLPhotoLibrary* photoLibrary;
@property(retain, nonatomic) NSFileManager* fileManager;	// @synthesize=_fileManager
+(void)repairSingletonObjectsInDatabaseWithCompletionHandler:(id)completionHandler;
+(BOOL)shouldRebuildDCIMSubDirectoryAtURL:(id)url directoryEnumerator:(id)enumerator assetsKind:(int*)kind;
+(void)setDidImportFileSystemAssets:(BOOL)importFileSystemAssets;
+(id)modelMigrator;
+(id)sharedModelMigratorForImport;
+(id)eventNameFromDate:(id)date;
+(id)generateAssetUUIDForPathPlist;
+(void)archiveAssetUUIDForPathPlist:(id)pathPlist;
+(id)archivedAssetUUIDForURL:(id)url;
+(id)assetUUIDForPathPlistURL;
+(void)importAfterCrash:(id)crash dictionariesByPhotoStreamID:(id)anId completionBlock:(id)block;
+(BOOL)didImportFileSystemAssets;
+(void)dontImportFileSystemDataIntoDatabase;
+(BOOL)restartingAfterOTAMigration;
+(BOOL)restartingAfterRestoreFromBackup;
+(long long)secondsNeededToCleanupModelAfteriTunesRestore;
+(void)recalculateCachedCounts;
+(void)repairPotentialModelCorruption;
+(void)cleanupModelAfterRestoreFromiTunes;
+(void)recreateThumbnailTablesIfNecessary;
+(void)loadFileSystemDataIntoDatabase;
+(void)waitForDataMigratorToExit;
+(void)createDatabase;
// declared property setter: -(void)set_thumbnailsInformation:(id)information;
// declared property getter: -(id)_thumbnailsInformation;
// declared property setter: -(void)setFileManager:(id)manager;
// declared property getter: -(id)fileManager;
-(id)importFileSystemImportAssets:(id)assets forceUpdate:(BOOL)update;
-(void)importAfterCrash:(id)crash dictionariesByPhotoStreamID:(id)anId completionBlock:(id)block;
-(void)collectContentsOfDirectoryURL:(id)directoryURL forAddingToAlbum:(id)album intoAssetsArray:(id)array assetsKind:(int)kind;
-(void)collectFileURLs:(id)urls forAddingToAlbum:(id)album intoAssetsArray:(id)array assetsKind:(int)kind;
-(void)_importAllDCIMAssets;
-(BOOL)_shouldReimportCameraRollAssets;
-(id)_orderedAssetsToImportCameraRollOnly:(BOOL)importCameraRollOnly;
-(BOOL)shouldRebuildDCIMDirectoryAtURL:(id)url directoryEnumerator:(id)enumerator isPhotoStream:(BOOL*)stream cameraRollOnly:(BOOL)only;
-(void)resumePhotoStreams;
-(void)pausePhotoStreams;
-(void)dontImportFileSystemDataIntoDatabase;
-(void)recreateThumbnailTablesIfNecessary;
-(void)recalculateCachedCountsWithSemaphore:(id)semaphore;
-(void)repairPotentialModelCorruption;
-(void)cleanupModelAfterRestoreFromiTunes;
-(long long)secondsNeededToCleanupModelAfteriTunesRestore;
-(void)loadFileSystemDataIntoDatabase;
// declared property getter: -(id)photoLibrary;
-(void)dealloc;
-(id)init;
-(id)initWithImplicitTransaction:(BOOL)implicitTransaction;
@end

