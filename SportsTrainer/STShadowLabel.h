/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SportsTrainer.framework/SportsTrainer
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SportsTrainer-Structs.h"

@class STShadowBlurRadiusAnimation, UIColor;

@interface STShadowLabel : XXUnknownSuperclass {
	UIColor* _auxiliaryShadowColor;
	float _auxiliaryShadowBlurRadius;
	BOOL _animating;
	BOOL _phase;
	float _animatedAuxiliaryShadowBlurRadius;
	STShadowBlurRadiusAnimation* _pulseAnimation;
}
-(void)_updateShadowBlurRadiusWithProgress:(float)progress;
-(void)animator:(id)animator stopAnimation:(id)animation;
-(void)stopPulse;
-(void)startPulse;
-(void)setAuxiliaryShadowBlurRadius:(float)radius;
-(void)setAuxiliaryShadowColor:(id)color;
-(void)drawTextInRect:(CGRect)rect;
-(void)dealloc;
@end

