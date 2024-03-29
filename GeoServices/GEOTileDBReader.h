/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSObject, GEOTileDBMRU;
@protocol OS_dispatch_queue;

@interface GEOTileDBReader : XXUnknownSuperclass {
	BOOL _defunct;
	BOOL _closed;
	int _editionUpdating;
	NSObject<OS_dispatch_queue>* _readQueue;
	NSString* _path;
	sqlite3* _db;
	sqlite3_stmt* _tileQuery;
	sqlite3_stmt* _versionQuery;
	GEOTileDBMRU* _tileDBMRU;
	XXStruct_nbUehC* _expirationRecords;
	unsigned _expirationRecordCount;
}
@property(retain, nonatomic) GEOTileDBMRU* tileDBMRU;	// @synthesize=_tileDBMRU
@property(assign) BOOL closed;
// declared property setter: -(void)setTileDBMRU:(id)dbmru;
// declared property getter: -(id)tileDBMRU;
-(void)setExpirationRecords:(XXStruct_nbUehC*)records count:(unsigned)count;
-(void)dataForKeys:(id)keys asyncHandler:(id)handler;
-(void)dataForKey:(GEOTileKey*)key asyncHandler:(id)handler;
-(id)dataForKey:(GEOTileKey*)key;
-(id)_dataForKey:(GEOTileKey)key;
// declared property setter: -(void)setClosed:(BOOL)closed;
// declared property getter: -(BOOL)closed;
-(void)_openDB;
-(void)_closeDB;
-(void)_editionUpdateEnd:(id)end;
-(void)_editionUpdateBegin:(id)begin;
-(void)_deviceLocking;
-(void)_databaseReset:(id)reset;
-(void)dealloc;
-(id)initWithPath:(id)path;
@end

