/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import "VectorKit-Structs.h"
#import "VKLabelIcon.h"


__attribute__((visibility("hidden")))
@interface VKRoadSignLabelIcon : VKLabelIcon {
@private
	int _orientation;
	BOOL _orientationChanged;
	BOOL _onRoute;
	CTLineRef _line;
	BOOL _drawingRenderableIcon;
	float _scale;
}
@property(assign, nonatomic) int orientation;	// @synthesize=_orientation
// declared property getter: -(int)orientation;
-(void)updateCollisionObject:(CollisionObject*)object;
-(UIEdgeInsets)boundsAtPixel:(CGSize)pixel;
-(CGSize)offsetPixelForPixel:(CGSize)pixel;
// declared property setter: -(void)setOrientation:(int)orientation;
-(id)renderableIcon;
-(void)updateWithLabelContext:(LabelContext*)labelContext labelStyle:(XXStruct_USkF9C*)style atMercatorPoint:(XXStruct_taVrlB)mercatorPoint;
-(id)_signImageWithOrientation:(int)orientation;
-(void)dealloc;
-(id)initWithString:(id)string onRoute:(BOOL)route;
@end

