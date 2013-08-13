/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import "PhotoLibrary-Structs.h"
#import "PLCameraButtonBarSubviewProtocol.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIImageView, UIImage;

@interface PLCameraVideoSwitch : XXUnknownSuperclass <PLCameraButtonBarSubviewProtocol> {
	UIImageView* _wellImageView;
	UIImageView* _handleImageView;
	UIImageView* _cameraImageView;
	UIImageView* _videoImageView;
	int _buttonBarStyle;
	UIImage* _wellImage;
	UIImage* _handleImage;
	UIImage* _handleDownImage;
	UIImage* _cameraImage;
	UIImage* _cameraLandscapeImage;
	UIImage* _videoImage;
	UIImage* _videoLandscapeImage;
	float _trackOriginY;
	CGPoint _handleOffOrigin;
	CGPoint _handleOnOrigin;
	CGRect _hitRect;
	int _orientation;
	BOOL _watchingOrientationChanges;
	float _trackingHorizontalLocation;
	unsigned _on : 1;
	unsigned _didLayoutViews : 1;
	unsigned _didMove : 1;
	unsigned _lockEnabled : 1;
}
@property(assign, nonatomic, getter=isOn) BOOL on;
@property(readonly, assign) int orientation;	// converted property
// converted property getter: -(int)orientation;
-(void)setButtonOrientation:(int)orientation animated:(BOOL)animated;
-(void)_deviceOrientationChanged:(id)changed;
-(void)_stopWatchingDeviceOrientationChanges;
-(void)_startWatchingDeviceOrientationChanges;
-(void)_animateImageView:(id)view toTransform:(CGAffineTransform)transform withImage:(id)image animated:(BOOL)animated;
-(CGAffineTransform)_rotationAndTranslationTransformForDeviceOrientation:(int)deviceOrientation;
-(CGAffineTransform)_rotationTransformForDeviceOrientation:(int)deviceOrientation;
-(CGAffineTransform)_transformForVideoImageForDeviceOrientation:(int)deviceOrientation;
-(CGAffineTransform)_transformForCameraImageForDeviceOrientation:(int)deviceOrientation;
-(CGAffineTransform)_transformWithTranslationOffset:(CGSize)translationOffset deviceOrientation:(int)orientation;
-(void)_setOn:(BOOL)on animationDuration:(float)duration;
-(void)setOn:(BOOL)on animated:(BOOL)animated;
// declared property setter: -(void)setOn:(BOOL)on;
// declared property getter: -(BOOL)isOn;
-(void)cancelTrackingWithEvent:(id)event;
-(void)endTrackingWithTouch:(id)touch withEvent:(id)event;
-(BOOL)continueTrackingWithTouch:(id)touch withEvent:(id)event;
-(BOOL)beginTrackingWithTouch:(id)touch withEvent:(id)event;
-(BOOL)pointInside:(CGPoint)inside withEvent:(id)event;
-(void)layoutSubviews;
-(void)buttonBar:(id)bar didChangeMode:(int)mode;
-(void)setLockEnabled:(BOOL)enabled;
-(void)setEnabled:(BOOL)enabled;
-(void)_updateEnabledness;
-(void)_loadTallImageResourcesForButtonBarMode:(int)buttonBarMode;
-(void)_loadTrackingResources;
-(void)_loadLandscapeResources;
-(void)_loadInitialResources;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
-(id)initWithFrame:(CGRect)frame buttonBarStyle:(int)style;
@end

