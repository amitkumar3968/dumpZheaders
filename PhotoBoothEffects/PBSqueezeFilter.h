/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoBoothEffects.framework/PhotoBoothEffects
 */

#import "PhotoBoothEffects-Structs.h"
#import "PBFilter.h"


@interface PBSqueezeFilter : PBFilter {
	float lastInputX;
	float lastInputY;
	float lastInputRadius;
	float lastInputScale;
	float _inputAmount;
	bool firstTime;
@private
	CGPoint inputPoint;
}
@property(assign) float inputAmount;	// @dynamic
@property(assign) CGPoint inputPoint;	// @synthesize
// declared property setter: -(void)setInputPoint:(CGPoint)point;
// declared property getter: -(CGPoint)inputPoint;
-(BOOL)needsWrapMirror;
-(id)ciFilterName;
-(void)applyParametersToCIFilter:(BOOL)cifilter extent:(CGRect)extent;
// declared property setter: -(void)setInputAmount:(float)amount;
// declared property getter: -(float)inputAmount;
-(void)setDefaults;
@end
