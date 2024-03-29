/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import "NSCopying.h"
#import </libobjc.A.h>

@class NSMutableArray, ML3QueryResultSet_BackingStore, ML3Query;
@protocol OS_dispatch_queue;

@interface ML3QueryResultSet : NSObject <NSCopying> {
@private
	ML3QueryResultSet_BackingStore* _backingStore;
	ML3Query* _query;
	long long _revision;
	BOOL _supportsIncrementalUpdate;
	NSMutableArray* _updateToLibraryCurrentRevisionCompletionBlocks;
	NSObject<OS_dispatch_queue>* _queue;
}
@property(readonly, assign, nonatomic) unsigned count;
@property(readonly, assign, nonatomic) long long revision;	// @synthesize=_revision
@property(readonly, assign, nonatomic) ML3Query* query;	// @synthesize=_query
// declared property getter: -(long long)revision;
// declared property getter: -(id)query;
-(void).cxx_destruct;
-(unsigned)songLimit;
-(void)enumerateSectionsUsingBlock:(id)block;
-(void)enumeratePersistentIDsUsingBlock:(id)block;
-(long long)persistentIDAtIndex:(unsigned)index;
-(BOOL)_updateToLibraryCurrentRevision;
-(BOOL)updateToLibraryCurrentRevision;
-(void)_onQueueInvokeAndClearUpdateFinishedBlocksWithDidUpdateResult:(BOOL)_onQueueInvokeAndClearUpdateFinishedBlocksWith;
-(void)_onQueueAddUpdateFinishedBlock:(id)block;
-(void)_mergeChangesWithFromNewPIDs:(const vector<long long, std::allocator<long long> >*)newPIDs changedPIDs:(unordered_set<long long, std::tr1::hash<long long>, std::equal_to<long long>, std::allocator<long long>, false>*)pids;
-(void)_loadCurrentFullResults;
-(id)copyWithZone:(NSZone*)zone;
-(id)initWithQuery:(id)query;
-(id)_initWithQuery:(id)query supportsIncrementalUpdate:(BOOL)update;
// declared property getter: -(unsigned)count;
@end

