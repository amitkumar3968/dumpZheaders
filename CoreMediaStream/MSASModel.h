/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "NSObject.h"

@class NSString;

@protocol MSASModel <NSObject>
@property(assign, nonatomic) double maxGroupedCallbackEventStaleness;
@property(assign, nonatomic) double maxGroupedCallbackEventIdleInterval;
@property(assign, nonatomic) int maxGroupedCallbackEventBatchCount;
@property(readonly, assign, nonatomic) NSString* personID;
// declared property setter: -(void)setMaxGroupedCallbackEventStaleness:(double)staleness;
// declared property getter: -(double)maxGroupedCallbackEventStaleness;
// declared property setter: -(void)setMaxGroupedCallbackEventIdleInterval:(double)interval;
// declared property getter: -(double)maxGroupedCallbackEventIdleInterval;
// declared property setter: -(void)setMaxGroupedCallbackEventBatchCount:(int)count;
// declared property getter: -(int)maxGroupedCallbackEventBatchCount;
// declared property getter: -(id)personID;
-(BOOL)errorIsCancellation:(id)cancellation;
-(void)setFocusAssetCollectionGUID:(id)guid;
-(void)setFocusAlbumGUID:(id)guid;
-(id)serverSideConfiguration;
-(int)assetsInDownloadQueueCount;
-(void)retrieveAssetsFromAssetCollectionsWithGUIDs:(id)guids assetTypeFlags:(int)flags;
-(void)retrieveAssets:(id)assets inAlbumWithGUID:(id)guid;
-(void)forgetEverything;
-(void)deleteCommentWithGUID:(id)guid;
-(void)addComments:(id)comments toAssetCollectionWithGUID:(id)guid;
-(void)markCommentsForAssetCollectionWithGUID:(id)guid asViewedWithLastViewedDate:(id)lastViewedDate;
-(void)deleteAssetCollectionWithGUID:(id)guid;
-(void)addAssetCollections:(id)collections toAlbumWithGUID:(id)guid;
-(void)setPublicAccessEnabled:(BOOL)enabled forAlbumWithGUID:(id)guid completionBlock:(id)block;
-(void)removeAccessControlEntryWithGUID:(id)guid;
-(void)addAccessControlEntries:(id)entries toAlbumWithGUID:(id)guid;
-(void)rejectInvitationWithGUID:(id)guid;
-(void)acceptInvitationWithGUID:(id)guid;
-(void)acceptInvitationWithToken:(id)token completionBlock:(id)block;
-(void)unsubscribeFromAlbumWithGUID:(id)guid;
-(void)subscribeToAlbumWithGUID:(id)guid;
-(void)markAlbumGUIDAsViewed:(id)viewed;
-(void)deleteAlbumWithGUID:(id)guid;
-(void)modifyAlbumMetadata:(id)metadata;
-(void)addAlbum:(id)album;
-(void)refreshAccessControlListForAlbumWithGUID:(id)guid;
-(void)refreshCommentsForAssetCollectionWithGUID:(id)guid resetSync:(BOOL)sync;
-(void)refreshContentOfAlbumWithGUID:(id)guid resetSync:(BOOL)sync;
-(void)refreshResetSync:(BOOL)sync;
-(void)forgetEverythingInfo:(id)info completionBlock:(id)block;
-(void)forgetEverythingInfo:(id)info;
-(void)deleteCommentWithGUID:(id)guid info:(id)info;
-(void)addComments:(id)comments toAssetCollectionWithGUID:(id)guid info:(id)info;
-(void)markCommentsForAssetCollectionWithGUID:(id)guid asViewedWithLastViewedDate:(id)lastViewedDate info:(id)info;
-(void)deleteAssetCollectionWithGUID:(id)guid info:(id)info;
-(void)addAssetCollections:(id)collections toAlbumWithGUID:(id)guid info:(id)info;
-(void)setPublicAccessEnabled:(BOOL)enabled forAlbumWithGUID:(id)guid info:(id)info completionBlock:(id)block;
-(void)removeAccessControlEntryWithGUID:(id)guid info:(id)info;
-(void)addAccessControlEntries:(id)entries toAlbumWithGUID:(id)guid info:(id)info;
-(void)rejectInvitationWithGUID:(id)guid info:(id)info;
-(void)acceptInvitationWithGUID:(id)guid info:(id)info;
-(void)acceptInvitationWithToken:(id)token info:(id)info completionBlock:(id)block;
-(void)unsubscribeFromAlbumWithGUID:(id)guid info:(id)info;
-(void)subscribeToAlbumWithGUID:(id)guid info:(id)info;
-(void)markAlbumGUIDAsViewed:(id)viewed moveLastViewedAssetCollectionMarker:(BOOL)marker info:(id)info;
-(void)markAlbumGUIDAsViewed:(id)viewed info:(id)info;
-(void)deleteAlbumWithGUID:(id)guid info:(id)info;
-(void)modifyAlbumMetadata:(id)metadata info:(id)info;
-(void)addAlbum:(id)album info:(id)info;
-(void)refreshAccessControlListForAlbumWithGUID:(id)guid info:(id)info;
-(void)refreshCommentsForAssetCollectionWithGUID:(id)guid resetSync:(BOOL)sync info:(id)info;
-(void)refreshContentOfAlbumWithGUID:(id)guid resetSync:(BOOL)sync info:(id)info;
-(void)refreshResetSync:(BOOL)sync info:(id)info;
-(id)userInfoForCommentWithGUID:(id)guid;
-(void)setUserInfo:(id)info forCommentWithGUID:(id)guid;
-(id)userInfoForInvitationWithGUID:(id)guid;
-(void)setUserInfo:(id)info forInvitationWithGUID:(id)guid;
-(id)userInfoForAccessControlWithGUID:(id)guid;
-(void)setUserInfo:(id)info forAccessControlWithGUID:(id)guid;
-(id)userInfoForAssetCollectionWithGUID:(id)guid;
-(void)setUserInfo:(id)info forAssetCollectionWithGUID:(id)guid;
-(id)userInfoForAlbumWithGUID:(id)guid;
-(void)setUserInfo:(id)info forAlbumWithGUID:(id)guid;
-(id)lastViewedCommentDateForAssetCollectionWithGUID:(id)guid;
-(id)earliestUnviewedAssetCollectionGUIDInAlbumWithGUID:(id)guid;
-(int)unviewedAssetCollectionCountForAlbumWithGUID:(id)guid;
-(BOOL)isAssetCollectionWithGUIDMarkedAsUnviewed:(id)guidmarkedAsUnviewed;
-(int)unviewedAlbumCount;
-(BOOL)isAlbumWithGUIDMarkedAsUnviewed:(id)guidmarkedAsUnviewed;
-(id)captionForAssetCollectionWithGUID:(id)guid;
-(id)commentWithGUID:(id)guid;
-(id)commentsForAssetCollectionWithGUID:(id)guid;
-(id)assetCollectionWithGUID:(id)guid;
-(id)assetCollectionGUIDsInAlbumWithGUID:(id)guid;
-(id)assetCollectionsInAlbumWithGUID:(id)guid;
-(id)isPublicAccessEnabledForAlbumWithGUID:(id)guid;
-(id)invitationWithGUID:(id)guid;
-(id)invitationForAlbumWithGUID:(id)guid;
-(id)invitationGUIDs;
-(id)invitations;
-(id)accessControlWithGUID:(id)guid;
-(id)accessControlGUIDsForAlbumWithGUID:(id)guid;
-(id)accessControlsForAlbumWithGUID:(id)guid;
-(id)albumWithGUID:(id)guid;
-(id)albumGUIDs;
-(id)albums;
-(void)removeObserver:(id)observer;
-(void)addObserver:(id)observer;
-(BOOL)hasEnqueuedActivities;
-(BOOL)hasCommandsInGroupedCommandQueue;
-(void)shutDownForDestruction:(BOOL)destruction completionBlock:(id)block;
-(void)shutDown;
-(void)cancel;
-(void)start;
@end

