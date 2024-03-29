/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import "NSObject.h"


@protocol GEOTileServerProxy <NSObject>
-(BOOL)skipNetworkForKeysWhenPreloading:(id)keysWhenPreloading;
-(void)endPreloadSession;
-(void)beginPreloadSessionOfSize:(unsigned long long)size;
-(void)shrinkDiskCacheToSize:(unsigned long long)size finished:(id)finished;
-(void)flushPendingWrites;
-(void)openCacheConnection;
-(void)closeCacheConnection;
-(void)reportCorruptTile:(const GEOTileKey*)tile;
-(void)dataForKey:(GEOTileKey*)key asyncHandler:(id)handler;
-(id)dataForKey:(GEOTileKey*)key;
-(void)cancelLoad:(id)load;
-(void)loadTiles:(id)tiles checkDisk:(BOOL)disk allowNetworking:(BOOL)networking requireWiFi:(BOOL)fi bundleIdentifier:(id)identifier bundleVersion:(id)version;
-(void)setDelegate:(id)delegate;
@end

