/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoBoothEffects.framework/PhotoBoothEffects
 */

#import "PhotoBoothEffects-Structs.h"
#import "PBFilter.h"


@interface PBMirrorFilter : PBFilter {
	float lastInputX;
	float lastInputY;
	float lastInputAngle;
	bool firstTime;
@private
	CGPoint inputPoint;
	float inputOrientation;
}
@property(assign) float inputOrientation;	// @synthesize
@property(assign) CGPoint inputPoint;	// @synthesize
// declared property setter: -(void)setInputOrientation:(float)orientation;
// declared property getter: -(float)inputOrientation;
// declared property setter: -(void)setInputPoint:(CGPoint)point;
// declared property getter: -(CGPoint)inputPoint;
-(BOOL)needsWrapMirror;
-(id)ciFilterName;
-(void)applyParametersToCIFilter:(BOOL)cifilter extent:(CGRect)extent;
-(void)setDefaults;
@end

