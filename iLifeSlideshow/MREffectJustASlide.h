/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */

#import "MREffect.h"
#import "iLifeSlideshow-Structs.h"

@class MRCroppingSprite;

@interface MREffectJustASlide : MREffect {
	MRCroppingSprite* mSprite;
	BOOL mForceIsOpaque;
}
-(BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;
-(id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint*)point3;
-(id)patchworkAtTime:(double)time inContext:(id)context withArguments:(id)arguments;
-(id)retainedByUserRenderedImageAtTime:(double)time inContext:(id)context withArguments:(id)arguments;
-(void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;
-(BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;
-(BOOL)isAlphaFriendly;
-(BOOL)isOpaque;
-(BOOL)isNative3D;
-(void)_cleanup;
-(id)init;
@end

