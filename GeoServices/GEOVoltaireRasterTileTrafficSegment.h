/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "GeoServices-Structs.h"


@interface GEOVoltaireRasterTileTrafficSegment : XXUnknownSuperclass {
@private
	XXStruct_K5nmsA* _vertices;
	int _vertexCount;
	BOOL _hasSpeed;
	int _speed;
	BOOL _hasWidth;
	int _width;
}
@property(assign, nonatomic) int width;	// @synthesize=_width
@property(assign, nonatomic) BOOL hasWidth;	// @synthesize=_hasWidth
@property(assign, nonatomic) int speed;	// @synthesize=_speed
@property(assign, nonatomic) BOOL hasSpeed;	// @synthesize=_hasSpeed
@property(readonly, assign, nonatomic) int vertexCount;	// @synthesize=_vertexCount
@property(readonly, assign, nonatomic) XXStruct_K5nmsA* vertices;	// @synthesize=_vertices
// declared property getter: -(int)width;
// declared property getter: -(int)speed;
// declared property setter: -(void)setHasWidth:(BOOL)width;
// declared property getter: -(BOOL)hasWidth;
// declared property setter: -(void)setHasSpeed:(BOOL)speed;
// declared property getter: -(BOOL)hasSpeed;
// declared property getter: -(int)vertexCount;
// declared property getter: -(XXStruct_K5nmsA*)vertices;
// declared property setter: -(void)setWidth:(int)width;
// declared property setter: -(void)setSpeed:(int)speed;
-(void)setVertices:(XXStruct_K5nmsA*)vertices count:(int)count;
@end
