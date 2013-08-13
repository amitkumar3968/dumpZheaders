/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface VGLRenderState : XXUnknownSuperclass {
@private
	BOOL _enableDepthTest;
	int _depthMode;
	BOOL _depthMask;
	BOOL _enableCullFace;
	int _blendMode;
	BOOL _stencilTest;
}
@property(assign, nonatomic) BOOL stencilTest;	// @synthesize=_stencilTest
@property(assign, nonatomic) int blendMode;	// @synthesize=_blendMode
@property(assign, nonatomic) BOOL enableCullFace;	// @synthesize=_enableCullFace
@property(assign, nonatomic) BOOL depthMask;	// @synthesize=_depthMask
@property(assign, nonatomic) int depthMode;	// @synthesize=_depthMode
@property(assign, nonatomic) BOOL enableDepthTest;	// @synthesize=_enableDepthTest
+(id)sharedSimpleState;
// declared property setter: -(void)setStencilTest:(BOOL)test;
// declared property getter: -(BOOL)stencilTest;
// declared property setter: -(void)setBlendMode:(int)mode;
// declared property getter: -(int)blendMode;
// declared property setter: -(void)setEnableCullFace:(BOOL)face;
// declared property getter: -(BOOL)enableCullFace;
// declared property setter: -(void)setDepthMask:(BOOL)mask;
// declared property getter: -(BOOL)depthMask;
// declared property setter: -(void)setDepthMode:(int)mode;
// declared property getter: -(int)depthMode;
// declared property setter: -(void)setEnableDepthTest:(BOOL)test;
// declared property getter: -(BOOL)enableDepthTest;
-(void)pushStateIntoContext:(id)context;
-(void)loadStateFromContext:(id)context;
-(void)reset;
-(id)initWithContext:(id)context;
-(id)init;
@end

