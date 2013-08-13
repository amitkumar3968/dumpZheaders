/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import "PLCameraButtonBarProtocol.h"
#import "PhotoLibrary-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class PLCameraOptionsButton, PLCameraButton, PLCameraToggleButton;

@interface PLCameraButtonBar : XXUnknownSuperclass <PLCameraButtonBarProtocol> {
	PLCameraOptionsButton* _optionsButton;
	PLCameraButton* _cameraButton;
	PLCameraToggleButton* _toggleButton;
	int _buttonBarStyle;
	int _buttonBarMode;
	unsigned _isBackgroundVisible : 1;
}
@property(assign, nonatomic) int buttonBarMode;	// @synthesize=_buttonBarMode
@property(assign, nonatomic) int buttonBarStyle;	// @synthesize=_buttonBarStyle
@property(retain, nonatomic) PLCameraToggleButton* toggleButton;	// @synthesize=_toggleButton
@property(retain, nonatomic) PLCameraButton* cameraButton;	// @synthesize=_cameraButton
@property(retain, nonatomic) PLCameraOptionsButton* optionsButton;	// @synthesize=_optionsButton
+(float)defaultHeight;
+(id)backgroundImage;
+(id)backgroundImageForButtonBarStyle:(int)buttonBarStyle;
+(float)buttonBarHeightForTallScreen:(BOOL)tallScreen;
// declared property setter: -(void)setButtonBarMode:(int)mode;
// declared property getter: -(int)buttonBarMode;
// declared property setter: -(void)setButtonBarStyle:(int)style;
// declared property getter: -(int)buttonBarStyle;
// declared property setter: -(void)setToggleButton:(id)button;
// declared property getter: -(id)toggleButton;
// declared property setter: -(void)setCameraButton:(id)button;
// declared property getter: -(id)cameraButton;
// declared property setter: -(void)setOptionsButton:(id)button;
// declared property getter: -(id)optionsButton;
-(void)layoutSubviews;
-(void)setButtonBarMode:(int)mode animationDuration:(double)duration;
-(void)_setVisibility:(BOOL)visibility;
-(BOOL)isBackgroundVisible;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
-(id)initWithFrame:(CGRect)frame buttonBarStyle:(int)style;
@end
