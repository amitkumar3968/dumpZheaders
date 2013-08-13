/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import "VectorKit-Structs.h"
#import "VGLGroupCullableMesh.h"

@class VGLTexture;

__attribute__((visibility("hidden")))
@interface VGLSingleTexturedGroupCullableMesh : VGLGroupCullableMesh {
@private
	VGLTexture* _texture;
}
@property(retain, nonatomic) VGLTexture* texture;	// @synthesize=_texture
// declared property setter: -(void)setTexture:(id)texture;
// declared property getter: -(id)texture;
-(void)drawGroup:(unsigned)group context:(id)context;
-(void)drawInRects:(const UIEdgeInsets*)rects rectCount:(unsigned)count excludeGroup:(int)group context:(id)context;
-(void)drawInRects:(const UIEdgeInsets*)rects rectCount:(unsigned)count context:(id)context;
-(void)drawInPreparedCulls:(id)preparedCulls;
-(void)drawInPreparedCulls:(id)preparedCulls excludeGroup:(int)group;
-(void)dealloc;
@end

