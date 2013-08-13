/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import "TelephonyUI-Structs.h"
#import "TPBottomGrabberBar.h"
#import "TPBottomLockBar.h"

@class UIImage, NSArray, UIView;

@interface TPBottomGrabberLockBar : TPBottomLockBar <TPBottomGrabberBar> {
	UIView* _grabberView;
	UIImage* _grabberImage;
	NSArray* _grabberGestureRecognizers;
}
@property(retain, nonatomic) NSArray* grabberGestureRecognizers;	// @synthesize=_grabberGestureRecognizers
@property(readonly, assign) UIView* grabberView;	// @synthesize=_grabberView
@property(retain, nonatomic) UIImage* grabberImage;	// @synthesize=_grabberImage
// declared property getter: -(id)grabberGestureRecognizers;
// declared property getter: -(id)grabberView;
// declared property getter: -(id)grabberImage;
-(void)setSuppressDrawingBackground:(BOOL)background;
// declared property setter: -(void)setGrabberGestureRecognizers:(id)recognizers;
// declared property setter: -(void)setGrabberImage:(id)image;
-(void)animateGrabberOutWithCompletion:(id)completion;
-(id)hitTest:(CGPoint)test withEvent:(id)event;
-(void)layoutSubviews;
-(void)dealloc;
@end
