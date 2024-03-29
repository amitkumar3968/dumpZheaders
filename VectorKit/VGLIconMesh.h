/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import "VectorKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface VGLIconMesh : XXUnknownSuperclass {
@private
	unordered_map<VGLUncompressedTexture *, VGLIconSubMesh *, std::__1::hash<VGLUncompressedTexture *>, std::__1::equal_to<VGLUncompressedTexture *>, std::__1::allocator<std::__1::pair<VGLUncompressedTexture *const, VGLIconSubMesh *>> > _textureToSubmeshes;
}
-(id).cxx_construct;
-(void).cxx_destruct;
-(void)purge;
-(void)reset;
-(void)drawDebug:(id)debug;
-(void)drawWithContext:(id)context;
-(void)addIcon:(id)icon corners:(const CGSize*)corners alpha:(float)alpha snapToPixels:(BOOL)pixels;
-(void)addIcon:(id)icon point:(CGSize)point alpha:(float)alpha snapToPixels:(BOOL)pixels;
-(void)dealloc;
@end

