/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "MSDaemon.h"

@class MSASDaemonModel, NSObject, NSMutableDictionary;
@protocol MSAlbumSharingDaemonDelegate, OS_dispatch_queue;

@interface MSAlbumSharingDaemon : MSDaemon {
@private
	id<MSAlbumSharingDaemonDelegate> _delegate;
	NSMutableDictionary* _personIDToStateMachineMap;
	NSMutableDictionary* _personIDToDelegateMap;
	MSASDaemonModel* _daemonModel;
	int _busyCount;
	BOOL _isRetryingOutstandingActivities;
	NSObject<OS_dispatch_queue>* _mapQueue;
	NSObject<OS_dispatch_queue>* _workQueue;
	NSMutableDictionary* _nextUpdateDateByPersonID;
}
@property(retain, nonatomic) NSMutableDictionary* nextUpdateDateByPersonID;	// @synthesize=_nextUpdateDateByPersonID
@property(assign, nonatomic) BOOL isRetryingOutstandingActivities;	// @synthesize=_isRetryingOutstandingActivities
@property(assign, nonatomic) int busyCount;	// @synthesize=_busyCount
@property(retain, nonatomic) MSASDaemonModel* daemonModel;	// @synthesize=_daemonModel
@property(retain, nonatomic) NSMutableDictionary* personIDToDelegateMap;	// @synthesize=_personIDToDelegateMap
@property(retain, nonatomic) NSMutableDictionary* personIDToStateMachineMap;	// @synthesize=_personIDToStateMachineMap
@property(retain, nonatomic) NSObject<OS_dispatch_queue>* workQueue;	// @synthesize=_workQueue
@property(retain, nonatomic) NSObject<OS_dispatch_queue>* mapQueue;	// @synthesize=_mapQueue
@property(assign, nonatomic) __weak id<MSAlbumSharingDaemonDelegate> delegate;	// @synthesize=_delegate
// declared property setter: -(void)setNextUpdateDateByPersonID:(id)anId;
// declared property getter: -(id)nextUpdateDateByPersonID;
// declared property setter: -(void)setWorkQueue:(id)queue;
// declared property getter: -(id)workQueue;
// declared property setter: -(void)setMapQueue:(id)queue;
// declared property getter: -(id)mapQueue;
// declared property setter: -(void)setIsRetryingOutstandingActivities:(BOOL)activities;
// declared property getter: -(BOOL)isRetryingOutstandingActivities;
// declared property setter: -(void)setBusyCount:(int)count;
// declared property getter: -(int)busyCount;
// declared property setter: -(void)setDaemonModel:(id)model;
// declared property getter: -(id)daemonModel;
// declared property setter: -(void)setPersonIDToDelegateMap:(id)delegateMap;
// declared property getter: -(id)personIDToDelegateMap;
// declared property setter: -(void)setPersonIDToStateMachineMap:(id)stateMachineMap;
// declared property getter: -(id)personIDToStateMachineMap;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property getter: -(id)delegate;
-(void).cxx_destruct;
-(void)didReceiveCommentTooLongError:(id)error forAssetCollection:(id)assetCollection inAlbum:(id)album personID:(id)anId;
-(void)didReceiveTooManyCommentsError:(id)error forAssetCollection:(id)assetCollection inAlbum:(id)album personID:(id)anId;
-(void)didReceiveTooManySubscriptionsError:(id)error personID:(id)anId;
-(void)didReceiveTooManyPhotosError:(id)error forAlbum:(id)album personID:(id)anId;
-(void)didReceiveTooManyAlbumsError:(id)error personID:(id)anId;
-(id)boundStateMachineForPersonID:(id)personID;
-(id)existingStateMachineForPersonID:(id)personID;
-(id)_delegateForPersonID:(id)personID;
-(void)setPersistentObject:(id)object forKey:(id)key personID:(id)anId;
-(id)persistentObjectForKey:(id)key personID:(id)anId;
-(void)refreshServerSideConfigurationForPersonID:(id)personID;
-(id)serverSideConfigurationForPersonID:(id)personID;
-(void)forgetEverythingCompletionBlock:(id)block;
-(void)workQueueForgetEverythingAboutPersonIDs:(id)ids index:(unsigned)index completionBlock:(id)block;
-(void)forgetEverythingAboutPersonID:(id)anId completionBlock:(id)block;
-(void)workQueueForgetEverythingAboutPersonID:(id)anId completionBlock:(id)block;
-(void)shutDownStateMachine:(id)machine forDestruction:(BOOL)destruction completionBlock:(id)block;
-(void)_postModelShutdownForPersonID:(id)personID completionBlock:(id)block;
-(void)forgetEverythingAboutPersonID:(id)anId;
-(void)retrieveAssetsInAssetCollectionsWithGUIDs:(id)guids assetTypeFlags:(int)flags personID:(id)anId;
-(void)retrieveAssets:(id)assets inAlbumWithGUID:(id)guid personID:(id)anId;
-(void)deleteCommentWithGUID:(id)guid personID:(id)anId info:(id)info;
-(void)deleteCommentWithGUID:(id)guid personID:(id)anId;
-(void)addComments:(id)comments toAssetCollectionWithGUID:(id)guid personID:(id)anId info:(id)info;
-(void)addComments:(id)comments toAssetCollectionWithGUID:(id)guid personID:(id)anId;
-(void)markCommentsForAssetCollectionWithGUID:(id)guid asViewedWithLastViewedDate:(id)lastViewedDate personID:(id)anId info:(id)info;
-(void)markCommentsForAssetCollectionWithGUID:(id)guid asViewedWithLastViewedDate:(id)lastViewedDate personID:(id)anId;
-(void)deleteAssetCollectionWithGUID:(id)guid personID:(id)anId info:(id)info;
-(void)deleteAssetCollectionWithGUID:(id)guid personID:(id)anId;
-(void)addAssetCollections:(id)collections toAlbumWithGUID:(id)guid personID:(id)anId info:(id)info;
-(void)addAssetCollections:(id)collections toAlbumWithGUID:(id)guid personID:(id)anId;
-(void)setPublicAccessEnabled:(BOOL)enabled forAlbumWithGUID:(id)guid personID:(id)anId info:(id)info completionBlock:(id)block;
-(void)setPublicAccessEnabled:(BOOL)enabled forAlbumWithGUID:(id)guid personID:(id)anId completionBlock:(id)block;
-(void)removeAccessControlEntryWithGUID:(id)guid personID:(id)anId info:(id)info;
-(void)removeAccessControlEntryWithGUID:(id)guid personID:(id)anId;
-(void)addAccessControlEntries:(id)entries toAlbumWithGUID:(id)guid personID:(id)anId info:(id)info;
-(void)addAccessControlEntries:(id)entries toAlbumWithGUID:(id)guid personID:(id)anId;
-(void)rejectInvitationWithGUID:(id)guid personID:(id)anId info:(id)info;
-(void)rejectInvitationWithGUID:(id)guid personID:(id)anId;
-(void)acceptInvitationWithGUID:(id)guid personID:(id)anId info:(id)info;
-(void)acceptInvitationWithGUID:(id)guid personID:(id)anId;
-(void)acceptInvitationWithToken:(id)token personID:(id)anId info:(id)info completionBlock:(id)block;
-(void)acceptInvitationWithToken:(id)token personID:(id)anId completionBlock:(id)block;
-(void)unsubscribeFromAlbumWithGUID:(id)guid personID:(id)anId info:(id)info;
-(void)unsubscribeFromAlbumWithGUID:(id)guid personID:(id)anId;
-(void)subscribeToAlbumWithGUID:(id)guid personID:(id)anId info:(id)info;
-(void)subscribeToAlbumWithGUID:(id)guid personID:(id)anId;
-(void)markAlbumGUIDAsViewed:(id)viewed personID:(id)anId moveLastViewedAssetCollectionMarker:(BOOL)marker info:(id)info;
-(void)markAlbumGUIDAsViewed:(id)viewed personID:(id)anId info:(id)info;
-(void)markAlbumGUIDAsViewed:(id)viewed personID:(id)anId;
-(void)deleteAlbumWithGUID:(id)guid personID:(id)anId info:(id)info;
-(void)deleteAlbumWithGUID:(id)guid personID:(id)anId;
-(void)modifyAlbumMetadata:(id)metadata personID:(id)anId info:(id)info;
-(void)modifyAlbumMetadata:(id)metadata personID:(id)anId;
-(void)addAlbum:(id)album personID:(id)anId info:(id)info;
-(void)addAlbum:(id)album personID:(id)anId;
-(void)refreshCommentsForAssetCollectionWithGUID:(id)guid resetSync:(BOOL)sync personID:(id)anId info:(id)info;
-(void)refreshCommentsForAssetCollectionWithGUID:(id)guid resetSync:(BOOL)sync personID:(id)anId;
-(void)refreshAccessControlListOfAlbumWithGUID:(id)guid personID:(id)anId info:(id)info;
-(void)refreshAccessControlListOfAlbumWithGUID:(id)guid personID:(id)anId;
-(void)refreshContentOfAlbumWithGUID:(id)guid resetSync:(BOOL)sync personID:(id)anId info:(id)info;
-(void)refreshContentOfAlbumWithGUID:(id)guid resetSync:(BOOL)sync personID:(id)anId;
-(void)refreshResetSync:(BOOL)sync personID:(id)anId info:(id)info;
-(void)refreshResetSync:(BOOL)sync personID:(id)anId;
-(id)modelForPersonID:(id)personID;
-(id)existingModelForPersonID:(id)personID;
-(int)assetsInDownloadQueueCountForPersonID:(id)personID;
-(void)sendServerSideConfigurationDidChangeNotificationForPersonID:(id)sendServerSideConfiguration;
-(void)setNextActivityDate:(id)date forPersonID:(id)personID;
-(void)pollForSubscriptionUpdatesTriggeredByPushNotification;
-(id)personIDsListeningToPushNotification;
-(void)cancelActivitiesForPersonID:(id)personID;
-(void)stopAssetDownloadsForPersonID:(id)personID;
-(void)retryOutstandingActivities;
-(BOOL)hasCommandsInGroupedCommandQueue;
-(BOOL)isWaitingForAuth;
-(void)didReceiveGlobalResetSyncForPersonID:(id)personID;
-(void)didReceiveAuthSuccessForPersonID:(id)personID;
-(void)didReceiveAuthFailureForPersonID:(id)personID;
-(BOOL)isInRetryState;
-(void)didReceivePushNotificationForPersonID:(id)personID;
-(void)didDestroyStateMachineForPersonID:(id)personID;
-(void)willDestroyStateMachineForPersonID:(id)personID;
-(void)didCreateStateMachineForPersonID:(id)personID;
-(void)setFocusAssetCollectionGUID:(id)guid forPersonID:(id)personID;
-(void)setFocusAlbumGUID:(id)guid forPersonID:(id)personID;
-(void)didUnidle;
-(void)didIdle;
-(id)nextActivityDate;
-(void)shutDownCompletionBlock:(id)block;
-(void)mapQueueShutDownStateMachineInMap:(id)map personIDs:(id)ids index:(unsigned)index forDestruction:(BOOL)destruction completionBlock:(id)block;
-(void)shutDown;
-(void)start;
-(void)dealloc;
-(id)init;
@end

