/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "VectorKit-Structs.h"

@class VKCamera, VKScreenCanvas;
@protocol VKCameraControllerCanvasDelegate;

__attribute__((visibility("hidden")))
@interface VKCameraController : XXUnknownSuperclass {
@private
	VKCamera* _camera;
	VKScreenCanvas* _canvas;
	BOOL _gesturing;
	int _animating;
}
@property(readonly, assign, nonatomic, getter=isAnimating) BOOL animating;
@property(assign, nonatomic, getter=isGesturing) BOOL gesturing;	// @synthesize=_gesturing
@property(assign, nonatomic) VKScreenCanvas<VKCameraControllerCanvasDelegate>* canvas;	// @synthesize=_canvas
@property(retain, nonatomic) VKCamera* camera;	// @synthesize=_camera
// declared property setter: -(void)setGesturing:(BOOL)gesturing;
// declared property getter: -(BOOL)isGesturing;
// declared property setter: -(void)setCanvas:(id)canvas;
// declared property getter: -(id)canvas;
// declared property setter: -(void)setCamera:(id)camera;
// declared property getter: -(id)camera;
-(id)detailedDescription;
// declared property getter: -(BOOL)isAnimating;
-(void)endAnimating;
-(void)beginAnimating;
-(CGPoint)screenPointWithIndex:(int)index fromRecognizer:(id)recognizer;
-(void)canvasDidLayout;
-(void)dealloc;
@end
