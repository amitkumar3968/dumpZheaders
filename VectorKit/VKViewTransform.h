/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import "VectorKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class VKViewVolume;

__attribute__((visibility("hidden")))
@interface VKViewTransform : XXUnknownSuperclass {
@private
	ViewTransform* _viewTransform;
}
@property(assign, nonatomic) const XXStruct_$zuyAD* scaledViewProjectionMatrix;
@property(assign, nonatomic) float styleZAdjust;
@property(readonly, assign, nonatomic) XXStruct_taVrlB focusPoint;
@property(readonly, assign, nonatomic) double focusDistance;
@property(readonly, assign, nonatomic) VKViewVolume* viewVolume;
@property(readonly, assign, nonatomic) double farPlaneDistance;
@property(readonly, assign, nonatomic) double nearPlaneDistance;
@property(readonly, assign, nonatomic) const XXStruct_$zuyAD* viewProjectionMatrix;
@property(readonly, assign, nonatomic) double widthOverDepth;
@property(readonly, assign, nonatomic) float degreesFromPlumb;
@property(readonly, assign, nonatomic) float heading;
@property(readonly, assign, nonatomic) XXStruct_taVrlB forwardVector;
@property(readonly, assign, nonatomic) XXStruct_taVrlB rightVector;
@property(readonly, assign, nonatomic) XXStruct_taVrlB upVector;
@property(readonly, assign, nonatomic) XXStruct_taVrlB translationInMercator;
@property(readonly, assign, nonatomic) XXStruct_taVrlB translation;
@property(readonly, assign, nonatomic) float contentScale;
@property(readonly, assign, nonatomic) CGSize screenSizeInPixels;
@property(readonly, assign, nonatomic) CGSize screenSizeInPoints;
@property(readonly, assign, nonatomic) int coordinateSpace;
@property(readonly, assign, nonatomic) BOOL isGeocentric;
@property(readonly, assign, nonatomic) BOOL isMercator;
@property(readonly, assign) ViewTransform* viewTransform;	// converted property
-(void)evaluateWorldPoint:(XXStruct_taVrlB)point isDistanceClipped:(BOOL*)clipped zoom:(float*)zoom tilt:(float*)tilt;
-(XXStruct_$zuyAD)orientationMatrixAtWorldPoint:(XXStruct_taVrlB)worldPoint;
-(XXStruct_taVrlB)groundPointFromScreenPoint:(CGPoint)screenPoint;
-(XXStruct_taVrlB)groundPointFromPixel:(CGSize)pixel;
-(XXStruct_HKaJvA)mercatorRect:(XXStruct_HKaJvA)rect;
-(void)setCoordinateSpace:(int)space screenSizeInPixels:(CGSize)pixels contentScale:(float)scale frustum:(XXStruct_TVSAjA)frustum position:(XXStruct_taVrlB)position orientation:(const XXStruct_$zuyAD*)orientation;
// declared property getter: -(double)focusDistance;
// declared property getter: -(double)farPlaneDistance;
// declared property getter: -(double)nearPlaneDistance;
// declared property getter: -(XXStruct_taVrlB)translationInMercator;
// declared property getter: -(XXStruct_taVrlB)translation;
// declared property getter: -(int)coordinateSpace;
// declared property getter: -(BOOL)isGeocentric;
// declared property getter: -(BOOL)isMercator;
// declared property getter: -(float)contentScale;
// declared property getter: -(CGSize)screenSizeInPixels;
// declared property getter: -(CGSize)screenSizeInPoints;
// declared property setter: -(void)setScaledViewProjectionMatrix:(const XXStruct_$zuyAD*)matrix;
// declared property getter: -(const XXStruct_$zuyAD*)scaledViewProjectionMatrix;
// declared property getter: -(XXStruct_taVrlB)focusPoint;
// declared property setter: -(void)setStyleZAdjust:(float)adjust;
// declared property getter: -(float)styleZAdjust;
// declared property getter: -(id)viewVolume;
// declared property getter: -(double)widthOverDepth;
// declared property getter: -(const XXStruct_$zuyAD*)viewProjectionMatrix;
// declared property getter: -(float)degreesFromPlumb;
// declared property getter: -(float)heading;
// declared property getter: -(XXStruct_taVrlB)forwardVector;
// declared property getter: -(XXStruct_taVrlB)rightVector;
// declared property getter: -(XXStruct_taVrlB)upVector;
// converted property getter: -(ViewTransform*)viewTransform;
-(void)dealloc;
-(id)init;
@end

