/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import "ToneLibrary-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class TLVibrationRecorderProgressView;
@protocol TLVibrationRecorderControlsViewDelegate;

@interface TLVibrationRecorderControlsView : XXUnknownSuperclass {
	id<TLVibrationRecorderControlsViewDelegate> _delegate;
	TLVibrationRecorderProgressView* _progressView;
	id _leftButton;
	id _rightButton;
}
@property(retain, nonatomic, setter=_setRightButton:) id _rightButton;	// @synthesize
@property(retain, nonatomic, setter=_setLeftButton:) id _leftButton;	// @synthesize
@property(assign, nonatomic) int roundedCornersCompensationDelayMode;
@property(assign, nonatomic) double currentTimeInterval;
@property(assign, nonatomic, getter=isRightButtonEnabled) BOOL rightButtonEnabled;
@property(assign, nonatomic, getter=isLeftButtonEnabled) BOOL leftButtonEnabled;
@property(assign, nonatomic) id<TLVibrationRecorderControlsViewDelegate> delegate;	// @synthesize=_delegate
+(float)defaultHeight;
+(void)_loadImages;
// declared property setter: -(void)_setRightButton:(id)button;
// declared property getter: -(id)_rightButton;
// declared property setter: -(void)_setLeftButton:(id)button;
// declared property getter: -(id)_leftButton;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property getter: -(id)delegate;
-(void)_buttonTapped:(id)tapped;
-(void)drawRect:(CGRect)rect;
-(void)clearAllVibrationComponents;
-(void)vibrationComponentDidEnd;
-(void)vibrationComponentDidStart;
// declared property setter: -(void)setRoundedCornersCompensationDelayMode:(int)mode;
// declared property getter: -(int)roundedCornersCompensationDelayMode;
// declared property setter: -(void)setCurrentTimeInterval:(double)interval;
// declared property getter: -(double)currentTimeInterval;
// declared property setter: -(void)setRightButtonEnabled:(BOOL)enabled;
// declared property getter: -(BOOL)isRightButtonEnabled;
// declared property setter: -(void)setLeftButtonEnabled:(BOOL)enabled;
// declared property getter: -(BOOL)isLeftButtonEnabled;
-(void)setLeftButtonColor:(int)color title:(id)title icon:(id)icon enabled:(BOOL)enabled rightButtonColor:(int)color5 title:(id)title6 icon:(id)icon7 enabled:(BOOL)enabled8 animationDuration:(double)duration completion:(id)completion;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame vibrationPatternMaximumDuration:(double)duration;
@end

