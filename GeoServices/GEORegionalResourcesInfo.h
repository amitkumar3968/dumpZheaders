/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class GEOResources, GEOTileGroup, NSSet;

__attribute__((visibility("hidden")))
@interface GEORegionalResourcesInfo : XXUnknownSuperclass {
@private
	GEOTileGroup* _tileGroup;
	GEOResources* _resources;
	NSSet* _nodes;
}
-(id)attributionsForKey:(GEOTileKey*)key;
-(void)findResourcesForTileKeys:(id)tileKeys visitor:(id)visitor;
-(void)_createNodes;
-(void)dealloc;
-(id)initWithTileGroup:(id)tileGroup inResourceManifest:(id)resourceManifest;
@end

