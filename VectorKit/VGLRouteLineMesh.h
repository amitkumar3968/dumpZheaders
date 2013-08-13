/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import "VectorKit-Structs.h"
#import "VGLMesh.h"

@class VGLTexture;

__attribute__((visibility("hidden")))
@interface VGLRouteLineMesh : VGLMesh {
@private
	int _z;
	VGLTexture* _texture;
	BOOL _trafficSpeed;
	float _totalArchLength;
	float _splitLocation;
}
@property(assign, nonatomic) float splitLocation;	// @synthesize=_splitLocation
@property(assign, nonatomic) float totalArchLength;	// @synthesize=_totalArchLength
@property(retain, nonatomic) VGLTexture* texture;	// @synthesize=_texture
@property(assign, nonatomic) BOOL trafficSpeed;	// @synthesize=_trafficSpeed
@property(assign, nonatomic) int z;	// @synthesize=_z
// declared property setter: -(void)setSplitLocation:(float)location;
// declared property getter: -(float)splitLocation;
// declared property setter: -(void)setTotalArchLength:(float)length;
// declared property getter: -(float)totalArchLength;
// declared property setter: -(void)setTrafficSpeed:(BOOL)speed;
// declared property getter: -(BOOL)trafficSpeed;
// declared property setter: -(void)setTexture:(id)texture;
// declared property getter: -(id)texture;
// declared property setter: -(void)setZ:(int)z;
// declared property getter: -(int)z;
-(void)drawTrianglesWithContext:(id)context offset:(int)offset count:(int)count;
-(void)drawTrianglesWithContext:(id)context;
-(void)dealloc;
-(id)init;
-(id)initWithVertexCapacity:(int)vertexCapacity indexCapacity:(int)capacity;
@end

