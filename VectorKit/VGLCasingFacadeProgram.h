/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import "VGLRealisticFadeProgram.h"
#import "VectorKit-Structs.h"


__attribute__((visibility("hidden")))
@interface VGLCasingFacadeProgram : VGLRealisticFadeProgram {
@private
	VGLColor _color;
	int _uColor;
	VGLColor _gradientColor;
	int _uGradientColor;
}
@property(assign, nonatomic) VGLColor gradientColor;	// @synthesize=_gradientColor
@property(assign, nonatomic) VGLColor color;	// @synthesize=_color
+(id)program;
// declared property getter: -(VGLColor)gradientColor;
// declared property getter: -(VGLColor)color;
// declared property setter: -(void)setGradientColor:(VGLColor)color;
// declared property setter: -(void)setColor:(VGLColor)color;
-(id)init;
@end

