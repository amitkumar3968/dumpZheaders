/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WebCore-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface WebGLLayer : XXUnknownSuperclass {
@private
	GraphicsLayer* m_layerOwner;
	GraphicsContext3D* m_context;
}
@property(assign) GraphicsLayer* layerOwner;	// converted property
-(void)display;
-(CGImageRef)copyImageSnapshotWithColorSpace:(CGColorSpaceRef)colorSpace;
-(id)initWithGraphicsContext3D:(GraphicsContext3D*)graphicsContext3D;
// converted property getter: -(GraphicsLayer*)layerOwner;
// converted property setter: -(void)setLayerOwner:(GraphicsLayer*)owner;
@end
