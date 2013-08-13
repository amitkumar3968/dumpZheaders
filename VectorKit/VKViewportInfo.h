/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "VectorKit-Structs.h"

@class NSDictionary;

@interface VKViewportInfo : XXUnknownSuperclass {
@private
	XXStruct_zYrK5D _centerCoordinate;
	int _tileSize;
	float _zoomLevel;
	double _pitch;
	double _yaw;
}
@property(assign, nonatomic) double yaw;	// @synthesize=_yaw
@property(assign, nonatomic) double pitch;	// @synthesize=_pitch
@property(assign, nonatomic) int tileSize;	// @synthesize=_tileSize
@property(assign, nonatomic) float zoomLevel;	// @synthesize=_zoomLevel
@property(assign, nonatomic) XXStruct_zYrK5D centerCoordinate;	// @synthesize=_centerCoordinate
@property(readonly, assign, nonatomic) NSDictionary* dictionaryRepresentation;
// declared property setter: -(void)setYaw:(double)yaw;
// declared property getter: -(double)yaw;
// declared property setter: -(void)setPitch:(double)pitch;
// declared property getter: -(double)pitch;
// declared property setter: -(void)setZoomLevel:(float)level;
// declared property getter: -(float)zoomLevel;
// declared property setter: -(void)setTileSize:(int)size;
// declared property getter: -(int)tileSize;
// declared property setter: -(void)setCenterCoordinate:(XXStruct_zYrK5D)coordinate;
// declared property getter: -(XXStruct_zYrK5D)centerCoordinate;
// declared property getter: -(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)dictionaryRepresentation;
@end
