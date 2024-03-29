/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, GEOTileKeyList, GEOTileKeyMap;

@interface GEOTileSource : XXUnknownSuperclass {
	GEOTileKeyMap* _callbackMap;
	GEOTileKeyList* _downloadQueue;
	CFRunLoopObserverRef _observer;
	BOOL _observing;
	XXStruct_zYrK5D _downloadSortPoint;
	NSMutableArray* _downloadsInFlight;
	GEOTileKeyList* _failedTiles;
	BOOL _networkReachable;
	unsigned _queueSize;
	BOOL _log;
}
@property(readonly, assign, nonatomic) int maximumDownloadZoomLevel;
@property(readonly, assign, nonatomic) int minimumDownloadZoomLevel;
@property(readonly, assign, nonatomic) int zEquivalenceClass;
@property(readonly, assign, nonatomic) int tileSize;
@property(readonly, assign, nonatomic) GEOTileKeyList* failedTiles;	// @synthesize=_failedTiles
@property(readonly, assign, nonatomic) unsigned queueSize;	// @synthesize=_queueSize
@property(assign, nonatomic) XXStruct_zYrK5D sortPoint;	// @synthesize=_downloadSortPoint
+(id)sharedSource;
// declared property getter: -(id)failedTiles;
// declared property setter: -(void)setSortPoint:(XXStruct_zYrK5D)point;
// declared property getter: -(XXStruct_zYrK5D)sortPoint;
// declared property getter: -(unsigned)queueSize;
-(id)detailedDescription;
-(void)_download;
-(void)forceDownload;
-(void)fetchDataForKey:(const GEOTileKey*)key callback:(id)callback allowNetwork:(BOOL)network;
-(GEOTileKey)tileKeyForX:(unsigned)x y:(unsigned)y z:(unsigned)z;
-(id)dataForKey:(const GEOTileKey*)key;
-(BOOL)canDownloadKey:(const GEOTileKey*)key;
-(void)_resetFailedTileList;
-(void)_reachabilityChanged:(id)changed;
-(void)dealloc;
-(void)cancelAllFetches;
-(id)init;
// declared property getter: -(int)maximumDownloadZoomLevel;
// declared property getter: -(int)minimumDownloadZoomLevel;
// declared property getter: -(int)zEquivalenceClass;
// declared property getter: -(int)tileSize;
-(void)changeQueueSizeFrom:(unsigned)from to:(unsigned)to;
@end

