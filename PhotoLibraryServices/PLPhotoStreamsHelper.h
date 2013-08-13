/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import "PhotoLibraryServices-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface PLPhotoStreamsHelper : XXUnknownSuperclass {
	BOOL _appHasPolledOnceThisForegroundSession;
}
+(BOOL)canInitiateDistributedPhotoStreamDeletionForAssetUUID:(id)assetUUID;
+(BOOL)writeBreadcrumbContent:(id)content forHashString:(id)hashString;
+(id)publishBreadcrumbsPath;
+(id)iCloudServiceAccount;
+(BOOL)photoStreamsEnabled;
+(id)sharedPhotoStreamsHelper;
-(void)initiateDeletionOfPhotoStreamAssets:(id)photoStreamAssets;
-(void)resume_mstreamd:(id)mstreamd;
-(id)pause_mstreamd;
-(void)resetServerState;
-(void)cleanupPhotoStreamMetadataForAssetsWithUUIDs:(id)uuids forStreamID:(id)streamID;
-(void)savePhotoStreamMetadata:(id)metadata forAsset:(id)asset;
-(id)pathToSavedMetadataForAssetHash:(id)assetHash streamID:(id)anId createIntermediateDirs:(BOOL)dirs;
-(void)resetMstreamdStateForPersonID:(id)personID;
-(id)derivedAssetForMasterAsset:(id)masterAsset;
-(CGSize)derivedAssetSizeForMasterSizeWidth:(float)masterSizeWidth height:(float)height;
-(id)temporaryPathForRecentlyUploadedAsset:(id)recentlyUploadedAsset;
-(float)derivedAssetDimensionLimit;
-(int)friendsLimit;
-(int)imageLimitForFriendStream;
-(int)imageLimitForOwnStream;
-(id)imageLimitsByAssetType;
-(int)_serverIntegerLimitForKey:(id)key debugDefaultKey:(id)key2;
-(BOOL)shouldUploadVideos;
-(BOOL)shouldPublishScreenShots;
-(id)_photoStreamAlbumNameWithFirstName:(id)firstName lastName:(id)name email:(id)email;
-(void)pollForNewSubscriptionContentOncePerAppForegroundSession;
-(void)pollForNewSubscriptionContent;
-(BOOL)enqueueAssetForPSPublishing:(id)pspublishing assetHash:(id)hash fullPath:(id)path fileSize:(id)size type:(id)type reenqueueCount:(id)count;
-(BOOL)isValidUploadAsset:(id)asset type:(id)type fileSize:(id)size;
-(void)writeDidPublishBreadcrumbforHash:(id)write imagePath:(id)path;
-(void)writeDidEnqueueBreadcrumbForHash:(id)write imagePath:(id)path;
-(void)writeWillEnqueueBreadcrumbForHash:(id)write imagePath:(id)path;
-(BOOL)removeBreadcrumbsForHashString:(id)hashString;
-(id)lastPhotoStreamUpdateDate;
-(id)psHashAsString:(id)string;
-(id)psHashForData:(id)data;
-(id)photoStreamsPublishStreamID;
-(void)_appDidEnterBackground:(id)_app;
-(void)clearCachedAccountState;
-(void)dealloc;
-(id)init;
@end
