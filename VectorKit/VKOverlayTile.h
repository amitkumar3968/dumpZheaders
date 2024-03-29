/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import "VectorKit-Structs.h"
#import "VKTile.h"

@class NSMutableArray, NSMapTable, NSArray, VKVectorTile;

__attribute__((visibility("hidden")))
@interface VKOverlayTile : VKTile {
@private
	NSMutableArray* _overlays;
	VKVectorTile* _roadTile;
	NSMapTable* _tileForOverlay;
	float _maximumStyleZ;
}
@property(readonly, assign, nonatomic) float maximumStyleZ;	// @synthesize=_maximumStyleZ
@property(retain, nonatomic) VKVectorTile* roadTile;	// @synthesize=_roadTile
@property(readonly, assign, nonatomic) NSArray* overlays;	// @synthesize=_overlays
// declared property getter: -(float)maximumStyleZ;
// declared property setter: -(void)setRoadTile:(id)tile;
// declared property getter: -(id)roadTile;
// declared property getter: -(id)overlays;
-(id)tileForOverlay:(id)overlay;
-(void)setTile:(id)tile forOverlay:(id)overlay;
-(void)updateViewDependentStateWithContext:(id)context;
-(void)addOverlay:(id)overlay;
-(void)dealloc;
@end

