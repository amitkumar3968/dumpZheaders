/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Conference.framework/Conference
 */

#import "Conference-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "UIGestureRecognizerDelegate.h"

@class CADisplayLink;

@interface CNFVideoGroupView : XXUnknownSuperclass <UIGestureRecognizerDelegate> {
	CADisplayLink* _displayLink;
	CGPoint _velocity;
	CGPoint _target;
	CGRect _cornerLocationsRect;
	BOOL _startedThrowAnimation;
	int _corner;
}
@property(assign, nonatomic) CGRect cornerLocationsRect;	// @synthesize=_cornerLocationsRect
// declared property getter: -(CGRect)cornerLocationsRect;
-(BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)gestureRecognizer;
-(BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
-(BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;
-(void)cancelThrowAnimation;
-(void)finishedThrowAnimation;
-(void)updateThrowAnimation:(id)animation;
-(void)startThrowAnimation;
-(float)_gridViewRubberBandValueForValue:(float)value target:(float)target timeInterval:(float)interval velocity:(float*)velocity;
-(void)handlePanDetected:(id)detected;
-(void)handlePanGestureFinished:(id)finished;
-(void)addPanningGestureRecognizer;
-(void)refreshPositionInCorner;
-(CGPoint)centerPointForCurrentVideoGroupCorner;
-(void)setCorner:(int)corner;
// declared property setter: -(void)setCornerLocationsRect:(CGRect)rect;
-(void)setTransformForNewCenter:(CGPoint)newCenter;
-(CGPoint)transformedCenter;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end

