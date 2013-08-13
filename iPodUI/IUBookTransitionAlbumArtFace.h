/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import "iPodUI-Structs.h"
#import "IUFoldingTransitionFace.h"

@class UIView;

@interface IUBookTransitionAlbumArtFace : IUFoldingTransitionFace {
	UIView* _gradientView;
	float _reflectionHeight;
}
@property(assign, nonatomic) float reflectionHeight;	// @synthesize=_reflectionHeight
// declared property getter: -(float)reflectionHeight;
-(void)_reloadGradientView;
-(CGImageRef)_newGradientMaskWithSize:(CGSize)size;
-(void)addAnimationsForTransition:(id)transition;
// declared property setter: -(void)setReflectionHeight:(float)height;
-(void)dealloc;
-(id)initWithImage:(id)image;
@end
