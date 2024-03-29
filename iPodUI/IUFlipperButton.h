/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import "iPodUI-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIView, UIImageView;

@interface IUFlipperButton : XXUnknownSuperclass {
	UIView* _flipper;
	UIImageView* _backgroundView;
	UIImageView* _frontView;
	UIImageView* _backView;
	id _delegate;
	BOOL _isFlipping;
}
@property(readonly, assign) BOOL isFlipping;	// converted property
-(void)toggle;
-(void)setBackImage:(id)image;
-(void)setFrontImage:(id)image;
-(BOOL)isOnFront;
// converted property getter: -(BOOL)isFlipping;
-(void)animationDidStop:(id)animation finished:(BOOL)finished;
-(void)flipBasedOnFlip:(id)flip;
-(BOOL)pointInside:(CGPoint)inside withEvent:(id)event;
-(CGRect)hitRect;
-(void)dealloc;
-(void)setDelegate:(id)delegate;
-(id)initWithImage:(id)image;
@end

