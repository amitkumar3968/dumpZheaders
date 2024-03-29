/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "NSObject.h"


@protocol GEOResourceManifestServerProxy <NSObject>
-(void)getResourceManifestWithHandler:(id)handler;
-(oneway void)refreshActiveTileGroup;
-(oneway void)forceUpdate;
-(oneway void)resetActiveTileGroup;
-(oneway void)setActiveTileGroupIdentifier:(id)identifier;
-(id)authToken;
-(oneway void)cancelRegionalResourcesLoadForKeys:(id)keys;
-(oneway void)loadRegionalResourcesForKeys:(id)keys allowNetwork:(BOOL)network;
-(void)closeConnection;
-(void)openConnection;
-(oneway void)startServer:(id)server;
@end

