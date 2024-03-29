/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import "iPodUI-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class CAMediaTimingFunction, UIView, NSString;

@interface IUScalingFlipTransitionView : XXUnknownSuperclass {
	id _delegate;
	SEL _didStopSelector;
	UIView* _backView;
	float _duration;
	CGSize _edgeConstraints;
	UIView* _frontView;
	NSString* _subtype;
	CAMediaTimingFunction* _timingFunction;
	float _initialBackSize;
	float _initialFrontSize;
	CGPoint _initialPosition;
	double _startTime;
	CGSize _translationSize;
	UIView* _toView;
	int _type;
}
@property(retain, nonatomic) CAMediaTimingFunction* timingFunction;	// @synthesize=_timingFunction
@property(retain, nonatomic) NSString* subtype;	// @synthesize=_subtype
@property(retain, nonatomic) UIView* frontView;	// @synthesize=_frontView
@property(assign, nonatomic) CGSize edgeConstraints;	// @synthesize=_edgeConstraints
@property(assign, nonatomic) float duration;	// @synthesize=_duration
@property(retain, nonatomic) UIView* backView;	// @synthesize=_backView
@property(assign, nonatomic) SEL didStopSelector;	// @synthesize=_didStopSelector
@property(assign, nonatomic) id delegate;	// @synthesize=_delegate
// declared property setter: -(void)setTimingFunction:(id)function;
// declared property getter: -(id)timingFunction;
// declared property setter: -(void)setSubtype:(id)subtype;
// declared property getter: -(id)subtype;
// declared property setter: -(void)setFrontView:(id)view;
// declared property getter: -(id)frontView;
// declared property setter: -(void)setEdgeConstraints:(CGSize)constraints;
// declared property getter: -(CGSize)edgeConstraints;
// declared property setter: -(void)setDuration:(float)duration;
// declared property getter: -(float)duration;
// declared property setter: -(void)setDidStopSelector:(SEL)stopSelector;
// declared property getter: -(SEL)didStopSelector;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property getter: -(id)delegate;
// declared property setter: -(void)setBackView:(id)view;
// declared property getter: -(id)backView;
-(void)_tick;
-(void)_prepareForInitialFlip;
-(CGSize)_visibilityTranslationWithSuperviewBounds:(CGRect)superviewBounds viewFrame:(CGRect)frame edgeConstraints:(CGSize)constraints;
-(void)resetFrame:(CGRect)frame;
-(void)performFlip;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end

