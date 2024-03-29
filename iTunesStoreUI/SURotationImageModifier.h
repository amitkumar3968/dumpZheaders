/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "iTunesStoreUI-Structs.h"
#import "SUImageModifier.h"


@interface SURotationImageModifier : SUImageModifier {
	float _degrees;
	int _orientation;
}
@property(assign, nonatomic) int orientation;	// @synthesize=_orientation
@property(assign, nonatomic) float degrees;	// @synthesize=_degrees
// declared property setter: -(void)setOrientation:(int)orientation;
// declared property getter: -(int)orientation;
// declared property setter: -(void)setDegrees:(float)degrees;
// declared property getter: -(float)degrees;
-(CGRect)imageFrameForImage:(id)image currentFrame:(CGRect)frame finalSize:(CGSize)size;
-(void)drawBeforeImageForContext:(CGContextRef)context imageFrame:(CGRect)frame finalSize:(CGSize)size;
-(BOOL)isEqual:(id)equal;
@end

