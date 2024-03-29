/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import "VectorKit-Structs.h"
#import "VGLCullableMesh.h"

@class VGLTexture;

__attribute__((visibility("hidden")))
@interface VGLSingleTexturedCullableMesh : VGLCullableMesh {
@private
	VGLTexture* _texture;
}
@property(retain, nonatomic) VGLTexture* texture;	// @synthesize=_texture
// declared property setter: -(void)setTexture:(id)texture;
// declared property getter: -(id)texture;
-(void)drawInRects:(const UIEdgeInsets*)rects numRects:(unsigned)rects2 context:(id)context;
-(void)drawTrianglesWithContext:(id)context;
-(void)dealloc;
-(id)init;
@end

