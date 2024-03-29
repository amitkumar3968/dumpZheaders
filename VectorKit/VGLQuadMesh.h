/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import "VectorKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class VGLMesh;

__attribute__((visibility("hidden")))
@interface VGLQuadMesh : XXUnknownSuperclass {
@private
	int _quadCount;
	VGLMesh* _mesh;
}
@property(readonly, assign, nonatomic) int quadCount;	// @synthesize=_quadCount
// declared property getter: -(int)quadCount;
-(void)drawWireframeQuadsWithContext:(id)context;
-(void)drawQuadsWithContext:(id)context;
-(void*)reserveQuads:(int)quads;
-(void)appendQuads:(void*)quads count:(int)count;
-(void)resetVertices;
-(void)reset;
-(void)extendIndexBuffer:(int)buffer;
-(void)dealloc;
-(id)initWithStride:(int)stride attributes:(const XXStruct_peQPEB*)attributes attributeCount:(unsigned char)count quadCapacity:(int)capacity;
@end

