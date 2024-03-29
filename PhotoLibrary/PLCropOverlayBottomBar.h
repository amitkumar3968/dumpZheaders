/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import "PLCameraButtonBarProtocol.h"
#import "PhotoLibrary-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UILabel, UIButton, PLCropOverlayBottomBarButton, UIImage, UIImageView, UIView, PLCameraToggleButton, PLCameraButton, NSString;

@interface PLCropOverlayBottomBar : XXUnknownSuperclass <PLCameraButtonBarProtocol> {
	UIImage* _backgroundImage;
	int _buttonBarStyle;
	int _buttonBarMode;
	UIImageView* _takePhotoView;
	PLCameraButton* _shutterButton;
	PLCameraToggleButton* _toggleButton;
	PLCropOverlayBottomBarButton* _cancelButton;
	UIView* _modeSwitch;
	UIButton* _playPauseButton;
	UIImage* _playImage;
	UIImage* _pauseImage;
	NSString* _title;
	UIImageView* _editPhotoView;
	PLCropOverlayBottomBarButton* _editCancelButton;
	PLCropOverlayBottomBarButton* _editDoneButton;
	UILabel* _editLabel;
	id _delegate;
	unsigned _takingPhotoView : 1;
	unsigned _wasEnabled : 1;
	unsigned _slideBottomBarVertically : 1;
	unsigned _isBackgroundVisible : 1;
}
@property(assign, nonatomic) int buttonBarMode;	// @synthesize=_buttonBarMode
@property(assign, nonatomic) int buttonBarStyle;	// @synthesize=_buttonBarStyle
@property(assign) id delegate;	// converted property
@property(retain) UIView* modeSwitch;	// converted property
@property(readonly, retain) PLCameraButton* shutterButton;	// converted property
@property(readonly, retain) PLCameraToggleButton* toggleButton;	// converted property
// declared property setter: -(void)setButtonBarMode:(int)mode;
// declared property getter: -(int)buttonBarMode;
// declared property setter: -(void)setButtonBarStyle:(int)style;
// declared property getter: -(int)buttonBarStyle;
-(void)setButtonBarMode:(int)mode animationDuration:(double)duration;
-(void)_setVisibility:(BOOL)visibility;
-(BOOL)isBackgroundVisible;
-(void)_slideAnimationComplete:(id)complete;
-(void)didCaptureVideo;
-(void)didCapturePhoto;
-(void)_didCapture;
-(void)doneButtonClicked:(id)clicked;
-(void)toggleButtonClicked:(id)clicked;
-(void)editCancelButtonClicked:(id)clicked;
-(void)_animateEditViewUp:(BOOL)up;
-(void)_animateEditViewLeft:(BOOL)left;
-(void)cancelButtonClicked:(id)clicked;
// converted property getter: -(id)delegate;
// converted property setter: -(void)setDelegate:(id)delegate;
-(void)setCancelButtonHidden:(BOOL)hidden;
-(void)setCancelButtonTitle:(id)title;
-(void)setOKButtonTitle:(id)title;
-(CGRect)titleRect;
-(void)setTitle:(id)title;
// converted property getter: -(id)modeSwitch;
// converted property setter: -(void)setModeSwitch:(id)aSwitch;
// converted property getter: -(id)toggleButton;
// converted property getter: -(id)shutterButton;
-(void)setEnabled:(BOOL)enabled;
-(void)setTakePhoto:(BOOL)photo;
-(void)didPauseVideo;
-(void)didPlayVideo;
-(void)_updatePlayPauseButtonImage:(id)image;
-(void)_playPause:(id)pause;
-(void)prepareForVideoEdit;
-(id)_pauseImage;
-(id)_playImage;
-(void)_prepareForPhotoEdit;
-(void)_createTakePhotoView;
-(void)layoutSubviews;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame buttonBarStyle:(int)style;
@end

