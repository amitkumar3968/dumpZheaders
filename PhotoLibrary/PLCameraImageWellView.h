/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import "PLCameraButtonBarSubviewProtocol.h"
#import "PhotoLibrary-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIView, UIImageView, UIImage;

@interface PLCameraImageWellView : XXUnknownSuperclass <PLCameraButtonBarSubviewProtocol> {
	UIImage* _thumbnailImage;
	int _buttonBarStyle;
	UIImageView* _backgroundImageView;
	UIView* _containerView;
	UIImageView* _thumbnailImageView;
	UIView* _thumbnailOverlayView;
	BOOL _watchingOrientationChanges;
	int _deviceOrientation;
}
@property(retain) UIImage* thumbnailImage;	// converted property
-(void)setButtonOrientation:(int)orientation animated:(BOOL)animated;
-(void)_deviceOrientationChanged:(id)changed;
-(void)_stopWatchingDeviceOrientationChanges;
-(void)_startWatchingDeviceOrientationChanges;
-(void)touchesCancelled:(id)cancelled withEvent:(id)event;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)touchesMoved:(id)moved withEvent:(id)event;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)_setImageViewHighlighted:(BOOL)highlighted;
-(void)setHighlighted:(BOOL)highlighted;
// converted property getter: -(id)thumbnailImage;
-(CGRect)thumbnailFrame;
-(void)addMaskedSubview:(id)subview;
-(void)beginContentFadeOutWithDuration:(float)duration;
-(void)buttonBar:(id)bar didChangeMode:(int)mode;
// converted property setter: -(void)setThumbnailImage:(id)image;
-(void)setFrame:(CGRect)frame;
-(void)setEnabled:(BOOL)enabled;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame image:(id)image buttonBarStyle:(int)style;
@end
