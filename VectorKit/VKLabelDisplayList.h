/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "VectorKit-Structs.h"

@class VGLTextMesh, VGLIconMesh, VGLRenderState;

__attribute__((visibility("hidden")))
@interface VKLabelDisplayList : XXUnknownSuperclass {
@private
	VGLTextMesh* _textMesh;
	VGLIconMesh* _iconUpperMesh;
	VGLIconMesh* _iconLowerMesh;
	VGLIconMesh* _roadSignMesh;
	BOOL _shouldStencil;
	VGLRenderState* _iconRenderState;
	VGLRenderState* _textRenderState;
}
-(void)purge;
-(void)drawWithContext:(id)context;
-(void)pushLabels:(const vector<std::__1::shared_ptr<vk::Label>, vk_allocator<std::__1::shared_ptr<vk::Label>> >*)labels roadSigns:(const vector<std::__1::shared_ptr<vk::Label>, vk_allocator<std::__1::shared_ptr<vk::Label>> >*)signs drawContext:(id)context renderStamp:(unsigned)stamp snapToPixels:(BOOL)pixels satImages:(BOOL)images;
-(void)setShouldStencil:(BOOL)stencil;
-(void)dealloc;
-(id)init;
@end

