/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import "VectorKit-Structs.h"
#import "VKAnnotationMarker.h"

@class VKCircleAnnotationMarkerLayer;

@interface VKCircleAnnotationMarker : VKAnnotationMarker {
@private
	VKCircleAnnotationMarkerLayer* _circleLayer;
}
@property(assign, nonatomic) double distanceRadius;
@property(assign, nonatomic) float radius;
// declared property setter: -(void)setDistanceRadius:(double)radius;
// declared property getter: -(double)distanceRadius;
// declared property setter: -(void)setRadius:(float)radius;
// declared property getter: -(float)radius;
-(void)prepareForReuse;
-(void)setColorRed:(float)red green:(float)green blue:(float)blue alpha:(float)alpha;
-(void)dealloc;
-(id)init;
@end
