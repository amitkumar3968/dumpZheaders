/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import "MLSQLiteConnectionSQLiteDelegate.h"
#import </libobjc.A.h>

@class ML3NondurableWriteSet, ML3MusicLibrary, CPLRUDictionary, MLSQLiteConnectionQueue, MLSQLiteConnection;

__attribute__((visibility("hidden")))
@interface ML3MusicLibrary_SQLiteDatabaseContext : NSObject <MLSQLiteConnectionSQLiteDelegate> {
@private
	ML3MusicLibrary* _library;
	MLSQLiteConnection* _connection;
	const void* _iTunesExtensions;
	iPhoneSortKeyBuilder* _sortKeyBuilder;
	CPLRUDictionary* _statementCache;
	ML3NondurableWriteSet* _nondurableWriteSet;
	int _transactionKind;
	unsigned _writeStatementCount;
	unsigned _transactionHasChanges : 1;
	unsigned _transactionHasNonContentsChanges : 1;
	unsigned _transactionHasInvisiblePropertyChanges : 1;
	unsigned _transactionHasDisplayValuesChanges : 1;
	MLSQLiteConnectionQueue* _connectionQueue;
}
@property(assign, nonatomic) BOOL transactionHasDisplayValuesChanges;
@property(assign, nonatomic) BOOL transactionHasInvisiblePropertyChanges;
@property(assign, nonatomic) BOOL transactionHasNonContentsChanges;
@property(assign, nonatomic) BOOL transactionHasChanges;
@property(assign, nonatomic) int transactionKind;	// @synthesize=_transactionKind
@property(retain, nonatomic) ML3NondurableWriteSet* nondurableWriteSet;	// @synthesize=_nondurableWriteSet
@property(readonly, assign, nonatomic) iPhoneSortKeyBuilder* sortKeyBuilder;	// @synthesize=_sortKeyBuilder
@property(readonly, assign, nonatomic) MLSQLiteConnectionQueue* connectionQueue;	// @synthesize=_connectionQueue
@property(readonly, assign, nonatomic) MLSQLiteConnection* connection;	// @synthesize=_connection
// declared property setter: -(void)setTransactionKind:(int)kind;
// declared property getter: -(int)transactionKind;
// declared property setter: -(void)setNondurableWriteSet:(id)set;
// declared property getter: -(id)nondurableWriteSet;
// declared property getter: -(iPhoneSortKeyBuilder*)sortKeyBuilder;
// declared property getter: -(id)connectionQueue;
// declared property getter: -(id)connection;
-(void).cxx_destruct;
// declared property setter: -(void)setTransactionHasDisplayValuesChanges:(BOOL)changes;
// declared property getter: -(BOOL)transactionHasDisplayValuesChanges;
// declared property setter: -(void)setTransactionHasInvisiblePropertyChanges:(BOOL)changes;
// declared property getter: -(BOOL)transactionHasInvisiblePropertyChanges;
// declared property setter: -(void)setTransactionHasNonContentsChanges:(BOOL)changes;
// declared property getter: -(BOOL)transactionHasNonContentsChanges;
// declared property setter: -(void)setTransactionHasChanges:(BOOL)changes;
// declared property getter: -(BOOL)transactionHasChanges;
-(void)connection:(id)connection willCloseDBHandle:(sqlite3*)handle;
-(void)connection:(id)connection didOpenDBHandle:(sqlite3*)handle;
-(void)dealloc;
-(id)initWithLibrary:(id)library connectionQueue:(id)queue;
@end

