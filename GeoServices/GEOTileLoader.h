/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class GEOExpiringTileCache, NSLock, NSMutableArray, GEOTileCache;
@protocol GEOTileServerProxy;

@interface GEOTileLoader : XXUnknownSuperclass {
@private
	GEOTileCache* _tiles;
	GEOExpiringTileCache* _expTiles;
	NSMutableArray* _pendingLoads;
	NSLock* _pendingLoadsLock;
	NSMutableArray* _tileDecoders;
	id<GEOTileServerProxy> _serverConnection;
	int _memoryHits;
	int _diskHits;
	int _networkHits;
}
@property(readonly, assign, nonatomic) int networkHits;
@property(readonly, assign, nonatomic) int diskHits;
@property(readonly, assign, nonatomic) int memoryHits;
+(id)sharedLoader;
+(id)diskCacheLocation;
+(void)setDiskCacheLocation:(id)location;
+(void)setMemoryCacheTotalCostLimit:(unsigned)limit;
+(void)setMemoryCacheCountLimit:(unsigned)limit;
+(void)setMemoryCacheMinCapacity:(unsigned)capacity;
+(void)useLocalLoader;
+(void)useRemoteLoader;
-(id)expireTilesWithType:(unsigned char)type provider:(unsigned short)provider olderThan:(double)than;
-(void)tileServerProxy:(id)proxy requestFinished:(id)finished;
-(void)tileServerProxy:(id)proxy receivedError:(id)error forRequest:(id)request;
-(void)tileServerProxy:(id)proxy requestMovedToNetwork:(id)network;
-(void)tileServerProxy:(id)proxy receivedData:(id)data forKey:(GEOTileKey)key forRequest:(id)request fromDisk:(BOOL)disk userInfo:(id)info;
-(void)endPreloadSession;
-(void)beginPreloadSessionOfSize:(unsigned long long)size;
-(void)reportCorruptTile:(const GEOTileKey*)tile;
-(void)_preempt:(id)preempt;
-(void)cancelRequest:(id)request;
-(void)preloadTiles:(id)tiles requireWiFi:(BOOL)fi progress:(id)progress finished:(id)finished error:(id)error;
-(void)loadTiles:(id)tiles progress:(id)progress finished:(id)finished error:(id)error;
-(void)loadTilesFromCache:(id)cache progress:(id)progress finished:(id)finished error:(id)error;
-(void)loadTilesFromCacheAndNetwork:(id)cacheAndNetwork progress:(id)progress finished:(id)finished error:(id)error;
-(void)loadTilesFromCacheAndNetwork:(id)cacheAndNetwork progress:(id)progress finished:(id)finished error:(id)error skipNetwork:(BOOL)network;
-(void)_loadTilesFromServer:(id)server checkDisk:(BOOL)disk allowNetworking:(BOOL)networking requireWiFi:(BOOL)fi;
-(id)_pendingLoadForNetworkLoadList:(id)networkLoadList acquireLock:(BOOL)lock;
-(id)_pendingLoadForOriginalList:(id)originalList acquireLock:(BOOL)lock;
-(void)_activeTileGroupChanged:(id)changed;
-(void)_tileEditionChanged:(id)changed;
-(void)openDatabase;
-(void)closeDatabase;
-(id)renderDataForKey:(GEOTileKey*)key asyncHandler:(id)handler;
-(id)renderDataForKey:(GEOTileKey*)key;
-(void)_asyncDecodeTile:(id)tile forKey:(const GEOTileKey*)key completion:(id)completion;
-(id)_decodeTile:(id)tile forKey:(const GEOTileKey*)key;
-(void)clearAllCaches;
-(void)registerTileDecoder:(id)decoder;
-(void)dealloc;
-(id)init;
-(void)registerTileLoader:(Class)loader;
// declared property getter: -(int)networkHits;
// declared property getter: -(int)diskHits;
// declared property getter: -(int)memoryHits;
-(void)shrinkDiskCacheToSize:(unsigned long long)size finished:(id)finished;
@end

