/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "MZKeyValueStoreControllerDelegate.h"
#import "MZKeyValueStoreTransactionProcessing.h"

@class MZUPPBagContext, NSMutableDictionary, MZKeyValueStoreController, NSString, NSObject, MZKeyValueStoreTransaction, NSError;
@protocol MZUniversalPlaybackPositionDataSource, MZUniversalPlaybackPositionTransactionContext, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MZUniversalPlaybackPositionSyncHandler : XXUnknownSuperclass <MZKeyValueStoreControllerDelegate, MZKeyValueStoreTransactionProcessing> {
@private
	NSObject<OS_dispatch_queue>* _queue;
	NSObject<OS_dispatch_queue>* _syncOperationQueue;
	MZUPPBagContext* _bagContext;
	id<MZUniversalPlaybackPositionDataSource> _dataSource;
	NSMutableDictionary* _metadataItemsToCommitToKVSStorage;
	NSError* _fatalSyncError;
	NSMutableDictionary* _metadataItemsFromKVSStorage;
	NSMutableDictionary* _metadataItemsToCommitToDataSource;
	BOOL _syncInProgress;
	NSString* _responseDomainVersion;
	BOOL _canceled;
	NSMutableDictionary* _metadataItemsFromDataSource;
	MZKeyValueStoreController* _kvsController;
	NSMutableDictionary* _reportedItemVersionForIdentifier;
	id<MZUniversalPlaybackPositionTransactionContext> _dataSourceTransactionContext;
	MZKeyValueStoreTransaction* _currentKVSTransaction;
}
@property(retain) NSError* fatalSyncError;	// @synthesize=_fatalSyncError
@property(assign) BOOL canceled;	// @synthesize=_canceled
@property(assign) BOOL syncInProgress;	// @synthesize=_syncInProgress
@property(retain) MZKeyValueStoreTransaction* currentKVSTransaction;	// @synthesize=_currentKVSTransaction
@property(retain) NSMutableDictionary* reportedItemVersionForIdentifier;	// @synthesize=_reportedItemVersionForIdentifier
@property(retain) NSMutableDictionary* metadataItemsToCommitToKVSStorage;	// @synthesize=_metadataItemsToCommitToKVSStorage
@property(retain) NSMutableDictionary* metadataItemsToCommitToDataSource;	// @synthesize=_metadataItemsToCommitToDataSource
@property(retain) NSMutableDictionary* metadataItemsFromKVSStorage;	// @synthesize=_metadataItemsFromKVSStorage
@property(retain) NSMutableDictionary* metadataItemsFromDataSource;	// @synthesize=_metadataItemsFromDataSource
@property(retain) NSString* responseDomainVersion;	// @synthesize=_responseDomainVersion
@property(retain) id<MZUniversalPlaybackPositionTransactionContext> dataSourceTransactionContext;	// @synthesize=_dataSourceTransactionContext
@property(retain) MZKeyValueStoreController* kvsController;	// @synthesize=_kvsController
@property(retain) MZUPPBagContext* bagContext;	// @synthesize=_bagContext
@property(retain) id<MZUniversalPlaybackPositionDataSource> dataSource;	// @synthesize=_dataSource
// declared property setter: -(void)setCurrentKVSTransaction:(id)transaction;
// declared property getter: -(id)currentKVSTransaction;
// declared property setter: -(void)setDataSourceTransactionContext:(id)context;
// declared property getter: -(id)dataSourceTransactionContext;
// declared property setter: -(void)setReportedItemVersionForIdentifier:(id)identifier;
// declared property getter: -(id)reportedItemVersionForIdentifier;
// declared property setter: -(void)setKvsController:(id)controller;
// declared property getter: -(id)kvsController;
// declared property setter: -(void)setMetadataItemsFromDataSource:(id)dataSource;
// declared property getter: -(id)metadataItemsFromDataSource;
// declared property setter: -(void)setCanceled:(BOOL)canceled;
// declared property getter: -(BOOL)canceled;
// declared property setter: -(void)setResponseDomainVersion:(id)version;
// declared property getter: -(id)responseDomainVersion;
// declared property setter: -(void)setSyncInProgress:(BOOL)progress;
// declared property getter: -(BOOL)syncInProgress;
// declared property setter: -(void)setMetadataItemsToCommitToDataSource:(id)dataSource;
// declared property getter: -(id)metadataItemsToCommitToDataSource;
// declared property setter: -(void)setMetadataItemsFromKVSStorage:(id)kvsstorage;
// declared property getter: -(id)metadataItemsFromKVSStorage;
// declared property setter: -(void)setFatalSyncError:(id)error;
// declared property getter: -(id)fatalSyncError;
// declared property setter: -(void)setMetadataItemsToCommitToKVSStorage:(id)kvsstorage;
// declared property getter: -(id)metadataItemsToCommitToKVSStorage;
// declared property setter: -(void)setDataSource:(id)source;
// declared property getter: -(id)dataSource;
// declared property setter: -(void)setBagContext:(id)context;
// declared property getter: -(id)bagContext;
-(id)sinceDomainVersionForTransaction:(id)transaction;
-(id)keysForTransaction:(id)transaction;
-(void)transaction:(id)transaction mergeData:(id)data forKey:(id)key domainVersion:(id)version version:(id)version5 mismatch:(BOOL)mismatch finishedBlock:(id)block;
-(void)transaction:(id)transaction didProcessResponseWithDomainVersion:(id)domainVersion;
-(void)transaction:(id)transaction willProcessResponseWithDomainVersion:(id)domainVersion;
-(id)dataForSetTransaction:(id)setTransaction key:(id)key version:(id*)version;
-(id)versionForGetTransaction:(id)getTransaction key:(id)key;
-(void)keyValueStoreController:(id)controller transactionDidFinish:(id)transaction;
-(void)keyValueStoreController:(id)controller transaction:(id)transaction didCancelWithError:(id)error;
-(BOOL)keyValueStoreController:(id)controller transaction:(id)transaction didFailWithError:(id)error;
-(BOOL)keyValueStoreController:(id)controller shouldScheduleTransaction:(id)transaction;
-(void)_signalKVSTransactionCompletion:(id)completion withError:(id)error;
-(void)_signalKVSTransactionCompletion:(id)completion;
-(id)_synchronouslyRunKVSTransaction:(id)transaction;
-(id)newKVSGetAllTransactionSinceDomainVersion:(id)version;
-(id)newKVSPutAllTransactionWithMetadataItems:(id)metadataItems;
-(id)newKVSTransactionWithType:(int)type keys:(id)keys;
-(void)_mergeMetadataItemsFromGetResponse;
-(int)_mergeMetadataItemFromSetResponse:(id)setResponse;
-(void)synchronizeWithCompletionHandler:(id)completionHandler;
-(void)cancel;
-(void)timeout;
-(void)cancelWithError:(id)error;
-(BOOL)_shouldStop;
-(BOOL)_synchronize:(id*)synchronize;
-(void)_dataSourceCancelTransaction;
-(void)_resetState;
-(void)dealloc;
-(id)initWithDataSource:(id)dataSource bagContext:(id)context;
@end

