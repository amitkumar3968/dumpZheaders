/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import "PhotoLibraryServices-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSMutableIndexSet, NSDictionary, NSMutableDictionary, NSObject, NSMutableSet, PLManagedObjectContext, NSNumber, NSMapTable, NSNotificationCenter;
@protocol OS_dispatch_queue;

@interface PLChangeNotificationCenter : XXUnknownSuperclass {
@private
	BOOL _isPostingChanges;
	NSMutableDictionary* _delayedBlocks;
	BOOL _isProcessingRemoteDidSave;
	NSObject<OS_dispatch_queue>* _thumbnailIndexIsolation;
	NSMutableIndexSet* _changedThumbnailIndexes;
	unsigned _thumbnailIndexesChangeCounter;
	int _cameraPreviewChangeListenerCount;
	NSNumber* _cameraPreviewChangedToken;
	int _stackViewImageChangeListenerCount;
	NSMutableArray* _snapshots;
	changeList_s _changedAlbumLists;
	contentChanges_s _albumListsContent;
	changeList_s _changedAlbums;
	contentChanges_s _albumsContent;
	changeList_s _changedAssets;
	PLManagedObjectContext* _moc;
	NSMutableArray* _enqueuedNotifications;
	NSMapTable* _changedInflightAssetsAlbumsToSnapshots;
	NSDictionary* _remoteNotificationData;
	BOOL _isOverloaded;
	NSMutableSet* _overloadedObjects;
}
@property(readonly, assign, nonatomic) BOOL _shouldForceFetchingAlbumsToReload;
@property(readonly, assign, nonatomic) NSNotificationCenter* backingCenter;
+(void)forceFetchingAlbumReload;
+(void)getInsertedAssets:(id)assets deletedAssets:(id)assets2 changedAssets:(id)assets3 fromContextDidChangeNotification:(id)fromContext;
+(void)getInsertedAssetCount:(unsigned*)count deletedAssetCount:(unsigned*)count2 updatedAssets:(id)assets fromContextDidChangeNotification:(id)fromContext;
+(void)processChangeHubEvent:(id)event withGroup:(id)group;
+(void)distributeStackViewImageUpdatedForAlbumID:(id)albumID;
+(void)distributeThumbnailUpdatedAtIndexes:(id)indexes;
+(void)distributeThumbnailUpdatedAtIndex:(unsigned)index;
+(id)allManagedObjectKeysStrategy;
+(id)defaultCenter;
-(void)removeStackViewImageChangeObserver:(id)observer;
-(void)addStackViewImageChangeObserver:(id)observer;
-(void)_unregisterForStackViewImageChanges;
-(void)_registerForStackViewImageChanges;
-(void)removeCameraPreviewWellImageChangeObserver:(id)observer;
-(void)addCameraPreviewWellImageChangeObserver:(id)observer;
-(void)_unregisterForCameraPreviewWellChanges;
-(void)_registerForCameraPreviewWellChanges;
-(void)managedObjectContext:(id)context didProcessRemoteContextSave:(id)save usingObjectIDs:(BOOL)ids;
-(void)managedObjectContext:(id)context willProcessRemoteContextSave:(id)save usingObjectIDs:(BOOL)ids isCoalescedEvent:(BOOL)event;
-(void)managedObjectContextWasOverloaded:(id)overloaded withNotificationData:(id)notificationData usingObjectIDs:(BOOL)ids;
-(void)managedObjectContextWillBeOverloaded:(id)managedObjectContext withNotificationData:(id)notificationData usingObjectIDs:(BOOL)ids;
// declared property getter: -(BOOL)_shouldForceFetchingAlbumsToReload;
-(id)_takeSnapshotOfObject:(id)object useCommitedValues:(BOOL)values;
-(id)_takeSnapshotFromCommittedValuesOfObject:(id)object;
-(id)_takeSnapshotOfObject:(id)object;
-(void)_takeSnapshotsFromContext:(id)context forRemoteContextSaveNotification:(id)remoteContextSaveNotification usingObjectIDs:(BOOL)ids;
-(id)_snapshotForObject:(id)object;
-(id)descriptionOfSplitChanges;
-(id)_keysOfInterestForObject:(id)object;
-(BOOL)_isInterestedInUpdatesOfObject:(id)object;
-(void)_postEnqueuedNotifications;
-(void)_enqueueNotification:(id)notification object:(id)object userInfoWithObjects:(const id*)objects forKeys:(const id*)keys count:(unsigned)count;
-(void)_enqueueNotification:(id)notification object:(id)object userInfo:(id)info;
-(void)_enqueueAlbumListChangeNotification:(id)notification;
-(void)_enqueueAlbumChangeNotification:(id)notification;
-(void)_evaluateContainersWithUpdatedContent;
-(void)_splitContextDidChangeNotification:(id)_splitContext;
-(void)_cleanupState;
-(void)_persistUserAlbumChanges;
-(void)_enqueueCloudCommentsNotifications;
-(void)_enqueueAlbumNotifications;
-(void)_enqueueAlbumListNotifications;
-(void)_enqueuePhotoLibraryNotifications;
-(void)_sendNotificationsForSplitChanges;
-(void)postShouldReloadNotification;
-(void)processChangeHubEvent:(id)event withGroup:(id)group;
-(void)_processStackViewAlbumUpdatedEvent:(id)event withGroup:(id)group;
-(void)_processThumbnailsUpdatedEvent:(id)event;
-(void)enumerateIndexMappingCachesForObject:(id)object withBlock:(id)block;
-(id)_toOneRelationshipsOfInterestForObject:(id)object;
-(id)_attributesOfInterestForObject:(id)object;
-(id)_orderedRelationshipsOfInterestForObject:(id)object;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
-(void)processContextDidChangeNotification:(id)processContext;
-(void)inflightAssetsAlbumWillChange:(id)inflightAssetsAlbum;
-(void)_saveCurrentStateForAlbum:(id)album;
-(void)setPostProcessingHandlerForIdentifier:(id)identifier block:(id)block;
-(void)removeObserver:(id)observer name:(id)name object:(id)object;
-(void)removeObserver:(id)observer;
-(id)addObserverForName:(id)name object:(id)object queue:(id)queue usingBlock:(id)block;
-(void)addObserver:(id)observer selector:(SEL)selector name:(id)name object:(id)object;
-(void)removeShouldReloadObserver:(id)remove;
-(void)addShouldReloadObserver:(id)add;
-(void)removeCloudCommentsChangeObserver:(id)observer asset:(id)asset;
-(void)addCloudCommentsChangeObserver:(id)observer asset:(id)asset;
-(void)removeAlbumListChangeObserver:(id)observer albumList:(NSObject*)list;
-(void)addAlbumListChangeObserver:(id)observer albumList:(NSObject*)list;
-(void)removeAlbumChangeObserver:(id)observer album:(NSObject*)album;
-(void)addAlbumChangeObserver:(id)observer album:(NSObject*)album;
// declared property getter: -(id)backingCenter;
-(void)enqueueNotification:(id)notification;
-(void)dealloc;
-(id)init;
@end

