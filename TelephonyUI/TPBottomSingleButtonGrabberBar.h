/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import "TelephonyUI-Structs.h"
#import "TPBottomSingleButtonBar.h"
#import "TPBottomGrabberBar.h"

@class UIImage, NSArray, UIView;

@interface TPBottomSingleButtonGrabberBar : TPBottomSingleButtonBar <TPBottomGrabberBar> {
	UIView* _grabberView;
	UIImage* _grabberImage;
	NSArray* _grabberGestureRecognizers;
	BOOL _isAnimatingOutGrabber;
}
@property(retain, nonatomic) NSArray* grabberGestureRecognizers;	// @synthesize=_grabberGestureRecognizers
@property(readonly, assign) UIView* grabberView;	// @synthesize=_grabberView
@property(retain, nonatomic) UIImage* grabberImage;	// @synthesize=_grabberImage
+(id)answerButtonImage;
// declared property getter: -(id)grabberGestureRecognizers;
// declared property getter: -(id)grabberView;
// declared property getter: -(id)grabberImage;
// declared property setter: -(void)setGrabberGestureRecognizers:(id)recognizers;
// declared property setter: -(void)setGrabberImage:(id)image;
-(id)hitTest:(CGPoint)test withEvent:(id)event;
-(void)animateGrabberOutWithCompletion:(id)completion;
-(void)layoutSubviews;
-(void)_updateButtonAndWellWidths;
-(float)buttonWidth;
-(void)setButton:(id)button andStyle:(BOOL)style;
-(void)dealloc;
-(id)initForIncomingCallWaitingWithFrame:(CGRect)frame;
@end

