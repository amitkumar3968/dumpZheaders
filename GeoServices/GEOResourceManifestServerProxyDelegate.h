/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import "NSObject.h"


@protocol GEOResourceManifestServerProxyDelegate <NSObject>
-(oneway void)serverProxyDidFinishLoadingForList:(id)serverProxy;
-(oneway void)serverProxyDidReceiveError:(id)serverProxy forList:(id)list;
-(oneway void)serverProxyDidReceiveResourceNames:(id)serverProxy attributions:(id)attributions forKey:(GEOTileKey)key fromList:(id)list;
-(oneway void)serverProxyDidChangeActiveTileGroup:(id)serverProxy finishedCallback:(id)callback;
@end

