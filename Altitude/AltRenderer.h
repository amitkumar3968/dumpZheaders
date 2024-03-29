/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Altitude.framework/Altitude
 */

#import "Altitude-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class EAGLContext, CAEAGLLayer;
@protocol AltRendererCallback;

__attribute__((visibility("hidden")))
@interface AltRenderer : XXUnknownSuperclass {
@private
	EAGLContext* context;
	CAEAGLLayer* _layer;
	int _backingWidth;
	int _backingHeight;
	ViewerImp* _viewer;
	CameraManager _cameraManager;
	TestManager _testManager;
	unsigned defaultFramebuffer;
	unsigned colorRenderbuffer;
	unsigned depthRenderbuffer;
	unsigned _frameCount;
	bool _isLoading;
	BOOL _alwaysDraws;
	BOOL _updateCalledNeedsRedraw;
	BOOL _needsToCreateFrameBuffer;
	id<AltRendererCallback> _callback;
	id _launchCallback;
	id _sceneDidLoadCallback;
	double _fps;
	unsigned _systemIcon;
}
@property(assign, nonatomic) BOOL alwaysDraws;	// @synthesize=_alwaysDraws
@property(copy, nonatomic) id launchCallback;	// @synthesize=_launchCallback
@property(copy, nonatomic) id sceneDidLoadCallback;	// @synthesize=_sceneDidLoadCallback
@property(assign) id<AltRendererCallback> callback;	// @synthesize=_callback
@property(readonly, assign) int backingHeight;	// @synthesize=_backingHeight
@property(readonly, assign) int backingWidth;	// @synthesize=_backingWidth
@property(readonly, assign) unsigned systemIcon;	// @synthesize=_systemIcon
@property(readonly, assign) double fps;	// @synthesize=_fps
@property(readonly, assign) CameraManager* cameraManager;	// @synthesize=_cameraManager
@property(readonly, assign) ViewerImp* viewer;	// @synthesize=_viewer
// declared property getter: -(unsigned)systemIcon;
// declared property getter: -(double)fps;
// declared property getter: -(int)backingHeight;
// declared property getter: -(int)backingWidth;
// declared property setter: -(void)setAlwaysDraws:(BOOL)draws;
// declared property getter: -(BOOL)alwaysDraws;
// declared property setter: -(void)setLaunchCallback:(id)callback;
// declared property getter: -(id)launchCallback;
// declared property setter: -(void)setSceneDidLoadCallback:(id)loadCallback;
// declared property getter: -(id)sceneDidLoadCallback;
// declared property setter: -(void)setCallback:(id)callback;
// declared property getter: -(id)callback;
// declared property getter: -(CameraManager*)cameraManager;
// declared property getter: -(ViewerImp*)viewer;
-(id).cxx_construct;
-(void).cxx_destruct;
-(void)dealloc;
-(void)setSceneDidFinishLoadCompletion:(id)finishLoadCompletion;
-(bool)setUseMipmaps:(BOOL)mipmaps;
-(BOOL)resizeFromLayer:(id)layer;
-(BOOL)createOrResizeFrameBuffers:(id)buffers;
-(void)destroyFrameBuffers;
-(void)render;
-(void)update;
-(void)didEnterBackground;
-(void)clearAllMemory;
-(void)pruneCachedMemory;
-(void)reload;
-(BOOL)needsRepaint;
-(void)checkGraphics;
-(void)runPerformanceTest:(int)test;
-(id)initWithContext:(id)context;
-(id)init;
@end

