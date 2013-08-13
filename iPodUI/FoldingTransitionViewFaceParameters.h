/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import "iPodUI-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface FoldingTransitionViewFaceParameters : XXUnknownSuperclass {
	CGRect _sourceFrame;
	int _pivotEdge;
	float _skewDegrees;
	float _partialSkewDegrees;
	float _beginFractionFold;
	float _durationFractionFold;
	float _beginFractionUnfold;
	float _durationFractionUnfold;
	float _heightShrink;
	BOOL _doubleSided;
	BOOL _slowDarkeningFold;
	NSString* _timingFunction;
}
@property(copy, nonatomic) NSString* timingFunction;	// @synthesize=_timingFunction
@property(assign, nonatomic) BOOL slowDarkeningFold;	// @synthesize=_slowDarkeningFold
@property(assign, nonatomic) BOOL doubleSided;	// @synthesize=_doubleSided
@property(assign, nonatomic) float heightShrink;	// @synthesize=_heightShrink
@property(assign, nonatomic) float durationFractionUnfold;	// @synthesize=_durationFractionUnfold
@property(assign, nonatomic) float beginFractionUnfold;	// @synthesize=_beginFractionUnfold
@property(assign, nonatomic) float durationFractionFold;	// @synthesize=_durationFractionFold
@property(assign, nonatomic) float beginFractionFold;	// @synthesize=_beginFractionFold
@property(assign, nonatomic) float partialSkewDegrees;	// @synthesize=_partialSkewDegrees
@property(assign, nonatomic) float skewDegrees;	// @synthesize=_skewDegrees
@property(assign, nonatomic) int pivotEdge;	// @synthesize=_pivotEdge
@property(assign, nonatomic) CGRect sourceFrame;	// @synthesize=_sourceFrame
// declared property setter: -(void)setTimingFunction:(id)function;
// declared property getter: -(id)timingFunction;
// declared property setter: -(void)setSlowDarkeningFold:(BOOL)fold;
// declared property getter: -(BOOL)slowDarkeningFold;
// declared property setter: -(void)setDoubleSided:(BOOL)sided;
// declared property getter: -(BOOL)doubleSided;
// declared property setter: -(void)setHeightShrink:(float)shrink;
// declared property getter: -(float)heightShrink;
// declared property setter: -(void)setDurationFractionUnfold:(float)unfold;
// declared property getter: -(float)durationFractionUnfold;
// declared property setter: -(void)setBeginFractionUnfold:(float)unfold;
// declared property getter: -(float)beginFractionUnfold;
// declared property setter: -(void)setDurationFractionFold:(float)fold;
// declared property getter: -(float)durationFractionFold;
// declared property setter: -(void)setBeginFractionFold:(float)fold;
// declared property getter: -(float)beginFractionFold;
// declared property setter: -(void)setPartialSkewDegrees:(float)degrees;
// declared property getter: -(float)partialSkewDegrees;
// declared property setter: -(void)setSkewDegrees:(float)degrees;
// declared property getter: -(float)skewDegrees;
// declared property setter: -(void)setPivotEdge:(int)edge;
// declared property getter: -(int)pivotEdge;
// declared property setter: -(void)setSourceFrame:(CGRect)frame;
// declared property getter: -(CGRect)sourceFrame;
-(void)dealloc;
-(id)init;
@end
