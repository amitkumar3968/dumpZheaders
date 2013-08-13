/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import "VectorKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface VKTileSelection : XXUnknownSuperclass {
@private
	int _tileSize;
	BOOL _bootstrap;
	unsigned _maxZ;
}
@property(assign, nonatomic) unsigned maxZ;	// @synthesize=_maxZ
@property(assign, nonatomic) BOOL bootstrap;	// @synthesize=_bootstrap
@property(assign, nonatomic) int tileSize;	// @synthesize=_tileSize
// declared property setter: -(void)setMaxZ:(unsigned)z;
// declared property getter: -(unsigned)maxZ;
// declared property setter: -(void)setBootstrap:(BOOL)bootstrap;
// declared property getter: -(BOOL)bootstrap;
// declared property setter: -(void)setTileSize:(int)size;
// declared property getter: -(int)tileSize;
-(XXStruct_0cBcmA)relevantTilesForContext:(id)context;
-(float)_zoomLevelForGroundPoint:(const XXStruct_taVrlB*)groundPoint context:(id)context;
-(float)_zoomLevelForScreenPoint:(CGPoint)screenPoint context:(id)context;
-(id)keysForContext:(id)context;
-(id)init;
@end

