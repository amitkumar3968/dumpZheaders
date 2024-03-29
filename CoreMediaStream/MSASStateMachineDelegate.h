/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */


@class MSASStateMachine;

@protocol MSASStateMachineDelegate
@property(assign, nonatomic) MSASStateMachine* MSASCounterpartInstance;
// declared property setter: -(void)setMSASCounterpartInstance:(id)instance;
// declared property getter: -(id)MSASCounterpartInstance;
-(void)MSASStateMachine:(id)machine didFireScheduledEvent:(id)event forAssetCollectionGUID:(id)assetCollectionGUID albumGUID:(id)guid info:(id)info;
-(void)MSASStateMachine:(id)machine didFinishAddingComment:(id)comment toAssetCollection:(id)assetCollection inAlbum:(id)album info:(id)info error:(id)error;
-(void)MSASStateMachine:(id)machine didFinishRemovingSharingRelationship:(id)relationship fromOwnedAlbum:(id)ownedAlbum info:(id)info error:(id)error;
-(void)MSASStateMachine:(id)machine didFinishAddingSharingRelationships:(id)relationships toOwnedAlbum:(id)ownedAlbum info:(id)info error:(id)error;
-(void)MSASStateMachine:(id)machine didFinishAddingAssetCollection:(id)collection toAlbum:(id)album info:(id)info error:(id)error;
-(void)MSASStateMachine:(id)machine didRequestAssetsForAddingAssetCollections:(id)addingAssetCollections inAlbum:(id)album specifications:(id)specifications info:(id)info;
-(void)MSASStateMachine:(id)machine didFinishUpdatingAlbum:(id)album info:(id)info error:(id)error;
-(void)MSASStateMachine:(id)machine didFinishCreatingAlbum:(id)album info:(id)info error:(id)error;
-(void)MSASStateMachine:(id)machine didFinishDeletingComment:(id)comment inAssetCollection:(id)assetCollection inAlbum:(id)album info:(id)info error:(id)error;
-(void)MSASStateMachine:(id)machine didFinishDeletingAssetCollection:(id)collection inAlbum:(id)album info:(id)info error:(id)error;
-(void)MSASStateMachine:(id)machine didFinishDeletingAlbum:(id)album info:(id)info error:(id)error;
-(void)MSASStateMachine:(id)machine didFinishRetrievingAsset:(id)asset inAlbum:(id)album error:(id)error;
-(BOOL)MSASStateMachine:(id)machine didQueryIsAssetCollectionWithGUIDInModel:(id)model;
-(id)MSASStateMachineDidRequestAssetCollectionStateCtagForAssetCollectionWithGUID:(id)msasstateMachine info:(id)info;
-(id)MSASStateMachineDidRequestAlbumURLStringForAlbumWithGUID:(id)msasstateMachine info:(id)info;
-(id)MSASStateMachineDidRequestAlbumStateCtagForAlbumWithGUID:(id)msasstateMachine info:(id)info;
-(void)MSASStateMachine:(id)machine didFinishSettingSyncedStateForAssetCollection:(id)assetCollection inAlbum:(id)album assetStateCtag:(id)ctag info:(id)info error:(id)error;
-(void)MSASStateMachine:(id)machine didFinishSettingSyncedStateForAlbum:(id)album info:(id)info error:(id)error newAlbumStateCtag:(id)ctag;
-(void)MSASStateMachine:(id)machine didFinishCheckingForAlbumSyncedStateChangesInAlbum:(id)album info:(id)info error:(id)error newAlbumStateCtag:(id)ctag;
-(void)MSASStateMachine:(id)machine didFindAlbumSyncedState:(id)state forAlbum:(id)album info:(id)info;
-(void)MSASStateMachine:(id)machine didFindAssetCollectionSyncedState:(id)state forAssetCollectionGUID:(id)assetCollectionGUID inAlbum:(id)album assetCollectionStateCtag:(id)ctag info:(id)info;
-(void)MSASStateMachine:(id)machine willCheckForAlbumSyncedStateChangesInAlbum:(id)album info:(id)info;
-(void)MSASStateMachine:(id)machine didFinishCheckingForCommentChangesInAssetCollection:(id)assetCollection inAlbum:(id)album largestCommentID:(int)anId info:(id)info error:(id)error;
-(void)MSASStateMachine:(id)machine didFindCommentChanges:(id)changes inAssetCollection:(id)assetCollection inAlbum:(id)album info:(id)info;
-(void)MSASStateMachine:(id)machine willCheckForCommentChangesInAssetCollection:(id)assetCollection inAlbum:(id)album info:(id)info;
-(void)MSASStateMachine:(id)machine didFinishUnsubscribingFromAlbum:(id)album info:(id)info error:(id)error;
-(void)MSASStateMachine:(id)machine didFinishSubscribingToAlbum:(id)album info:(id)info error:(id)error;
-(void)MSASStateMachine:(id)machine didFinishUpdatingAssetCollection:(id)collection inAlbum:(id)album info:(id)info error:(id)error;
-(void)MSASStateMachine:(id)machine willUpdateAssetCollections:(id)collections inAlbum:(id)album info:(id)info;
-(void)MSASStateMachine:(id)machine didFinishGettingAccessControls:(id)controls forAlbum:(id)album info:(id)info error:(id)error;
-(void)MSASStateMachine:(id)machine didFindNewURLString:(id)string forAlbumWithGUID:(id)guid info:(id)info;
-(void)MSASStateMachine:(id)machine didFinishCheckingForUpdatesInAlbums:(id)albums info:(id)info;
-(void)MSASStateMachine:(id)machine didFinishCheckingForUpdatesInAlbum:(id)album info:(id)info error:(id)error;
-(void)MSASStateMachine:(id)machine didFindSharingRelationshipChanges:(id)changes info:(id)info;
-(void)MSASStateMachine:(id)machine didFindAssetCollectionChanges:(id)changes forAlbum:(id)album info:(id)info;
-(void)MSASStateMachine:(id)machine didFindResetSyncForAlbum:(id)album info:(id)info;
-(void)MSASStateMachine:(id)machine willCheckForUpdatesInAlbum:(id)album info:(id)info;
-(void)MSASStateMachine:(id)machine didFinishCheckingForChangesInfo:(id)changesInfo error:(id)error;
-(void)MSASStateMachine:(id)machine didFindSyncedKeyValueChangesForAlbumGUIDS:(id)albumGUIDS info:(id)info;
-(void)MSASStateMachine:(id)machine didFindAccessControlChangesForAlbumGUIDS:(id)albumGUIDS info:(id)info;
-(void)MSASStateMachine:(id)machine didFindAlbumChanges:(id)changes info:(id)info;
-(void)MSASStateMachineDidFindGlobalResetSync:(id)msasstateMachine info:(id)info;
-(void)MSASStateMachineWillCheckForChanges:(id)msasstateMachine info:(id)info;
-(void)MSASStateMachineDidStart:(id)msasstateMachine;
@end

