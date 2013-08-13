/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import "PhotoLibrary-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface PLCameraRoundedRectView : XXUnknownSuperclass {
@private
	float outlineWidth;
	float outsideCornerRadius;
	float insideCornerRadius;
	float fillAlpha;
	float strokeWidth;
	float strokeAlpha;
}
@property(assign, nonatomic) float strokeAlpha;	// @synthesize
@property(assign, nonatomic) float strokeWidth;	// @synthesize
@property(assign, nonatomic) float fillAlpha;	// @synthesize
@property(assign, nonatomic) float insideCornerRadius;	// @synthesize
@property(assign, nonatomic) float outsideCornerRadius;	// @synthesize
@property(assign, nonatomic) float outlineWidth;	// @synthesize
// declared property setter: -(void)setStrokeAlpha:(float)alpha;
// declared property getter: -(float)strokeAlpha;
// declared property setter: -(void)setStrokeWidth:(float)width;
// declared property getter: -(float)strokeWidth;
// declared property setter: -(void)setFillAlpha:(float)alpha;
// declared property getter: -(float)fillAlpha;
// declared property setter: -(void)setInsideCornerRadius:(float)radius;
// declared property getter: -(float)insideCornerRadius;
// declared property setter: -(void)setOutsideCornerRadius:(float)radius;
// declared property getter: -(float)outsideCornerRadius;
// declared property setter: -(void)setOutlineWidth:(float)width;
// declared property getter: -(float)outlineWidth;
-(void)drawRect:(CGRect)rect;
-(id)initWithFrame:(CGRect)frame;
@end
