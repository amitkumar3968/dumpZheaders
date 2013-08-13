/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */

#import "iLifeSlideshow-Structs.h"
#import "MREffect.h"

@class MRCroppingSprite, MRTextRenderer, MRImage;

@interface MREffectJustATitle : MREffect {
	MRTextRenderer* mTextRenderer0;
	MRTextRenderer* mTextRenderer1;
	MRImage* mImage0;
	MRImage* mImage1;
	MRCroppingSprite* mTextSprite0;
	MRCroppingSprite* mTextSprite1;
	CGRect mText0Rect;
	CGRect mText1Rect;
	BOOL mTextWasUpdatedSinceLastRendering;
}
-(void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;
-(BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;
-(BOOL)isLoadedForTime:(double)time;
-(BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;
-(id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint*)point3;
-(void)setAttributes:(id)attributes;
-(id)init;
-(void)_unload;
-(int)_maxLinesForTextElement:(id)textElement;
-(CGSize)_maxSizeForTextElement:(id)textElement;
-(void)_loadForTime:(double)time inContext:(id)context withArguments:(id)arguments;
@end
