/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "iLifeSlideshow-Structs.h"

@class MRHitBlob;

@interface MRGesture : XXUnknownSuperclass {
@private
	MRHitBlob* _hitBlob;
	CGPoint _locationInViewAtStart;
	CGPoint _locationInSlideAtStart;
	float _linearScaleAtStart;
	CGPoint _slideCenterAtStart;
	float _slideRotationAtStart;
	float _slideScaleAtStart;
	CGPoint _currentTranslation;
	float _currentRotation;
	float _currentScale;
}
@property(assign) float currentScale;	// @synthesize=_currentScale
@property(assign) float currentRotation;	// @synthesize=_currentRotation
@property(assign) CGPoint currentTranslation;	// @synthesize=_currentTranslation
@property(assign) float slideScaleAtStart;	// @synthesize=_slideScaleAtStart
@property(assign) float slideRotationAtStart;	// @synthesize=_slideRotationAtStart
@property(assign) CGPoint slideCenterAtStart;	// @synthesize=_slideCenterAtStart
@property(assign) float linearScaleAtStart;	// @synthesize=_linearScaleAtStart
@property(assign) CGPoint locationInSlideAtStart;	// @synthesize=_locationInSlideAtStart
@property(assign) CGPoint locationInViewAtStart;	// @synthesize=_locationInViewAtStart
@property(retain) MRHitBlob* hitBlob;	// @synthesize=_hitBlob
// declared property setter: -(void)setCurrentScale:(float)scale;
// declared property getter: -(float)currentScale;
// declared property setter: -(void)setCurrentRotation:(float)rotation;
// declared property getter: -(float)currentRotation;
// declared property setter: -(void)setCurrentTranslation:(CGPoint)translation;
// declared property getter: -(CGPoint)currentTranslation;
// declared property setter: -(void)setSlideScaleAtStart:(float)start;
// declared property getter: -(float)slideScaleAtStart;
// declared property setter: -(void)setSlideRotationAtStart:(float)start;
// declared property getter: -(float)slideRotationAtStart;
// declared property setter: -(void)setSlideCenterAtStart:(CGPoint)start;
// declared property getter: -(CGPoint)slideCenterAtStart;
// declared property setter: -(void)setLinearScaleAtStart:(float)start;
// declared property getter: -(float)linearScaleAtStart;
// declared property setter: -(void)setLocationInSlideAtStart:(CGPoint)start;
// declared property getter: -(CGPoint)locationInSlideAtStart;
// declared property setter: -(void)setLocationInViewAtStart:(CGPoint)start;
// declared property getter: -(CGPoint)locationInViewAtStart;
// declared property setter: -(void)setHitBlob:(id)blob;
// declared property getter: -(id)hitBlob;
-(void)dealloc;
-(id)initWithHitBlob:(id)hitBlob;
@end
