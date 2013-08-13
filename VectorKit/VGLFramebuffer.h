/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class VGLTexture, CAEAGLLayer, EAGLContext;

__attribute__((visibility("hidden")))
@interface VGLFramebuffer : XXUnknownSuperclass {
@private
	EAGLContext* _eaglContext;
	CAEAGLLayer* _eaglLayer;
	unsigned _framebuffer;
	unsigned _renderbuffer;
	unsigned _depthbuffer;
	unsigned _multisampleFramebuffer;
	unsigned _multisampleRenderbuffer;
	unsigned _multisampleDepthbuffer;
	int _width;
	int _height;
	BOOL _createdWithDepth;
	BOOL _createdWithStencil;
	BOOL _isPresentable;
	BOOL _multisampleModeCurrent;
	BOOL _multisampleModeNext;
	VGLTexture* _texture;
}
@property(assign, nonatomic) BOOL useMultisampling;
@property(readonly, assign, nonatomic) int height;	// @synthesize=_height
@property(readonly, assign, nonatomic) int width;	// @synthesize=_width
@property(readonly, assign, nonatomic) BOOL isPresentable;	// @synthesize=_isPresentable
// declared property getter: -(int)height;
// declared property getter: -(int)width;
// declared property getter: -(BOOL)isPresentable;
-(void)deleteUnusedFramebuffers;
-(void)deleteResolveFramebuffers;
-(void)deleteFramebuffers;
-(void)finalize;
-(void)makeTarget;
-(void)preloadMultisampleFramebuffer;
-(void)_bindFramebuffers;
-(void)_deallocMultisampleFramebuffer;
-(void)_deallocSecondaryFramebuffer;
-(void)_deallocResolveFramebuffer;
-(BOOL)_createMultisampleFramebufferWithDepth:(BOOL)depth stencil:(BOOL)stencil;
-(BOOL)_createSecondaryFramebufferWithDepth:(BOOL)depth stencil:(BOOL)stencil;
-(BOOL)_createResolveFramebuffer;
-(void)dealloc;
-(id)initWithContext:(id)context texture:(id)texture depth:(BOOL)depth stencil:(BOOL)stencil;
-(id)initWithContext:(id)context layer:(id)layer depth:(BOOL)depth stencil:(BOOL)stencil multisampling:(BOOL)multisampling;
-(id)initWithContext:(id)context layer:(id)layer;
// declared property setter: -(void)setUseMultisampling:(BOOL)multisampling;
// declared property getter: -(BOOL)useMultisampling;
@end
