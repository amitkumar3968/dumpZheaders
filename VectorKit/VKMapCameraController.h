/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import "VectorKit-Structs.h"
#import "VKCameraController.h"
#import "VKTrackingCameraControllerDelegate.h"
#import "VKAnnotationTrackingCameraControllerDelegate.h"

@class VKAnnotationTrackingCameraController, VKTrackingCameraController, VKAnimation, VKMapModel;
@protocol VKTrackableAnnotation;

__attribute__((visibility("hidden")))
@interface VKMapCameraController : VKCameraController <VKTrackingCameraControllerDelegate, VKAnnotationTrackingCameraControllerDelegate> {
@private
	VKMapModel* _mapModel;
	VKAnimation* _zoomAnimation;
	VKAnimation* _pitchAnimation;
	VKAnimation* _rotationAnimation;
	VKTrackingCameraController* _trackingCameraController;
	VKAnnotationTrackingCameraController* _annotationTrackingCameraController;
	double _minDistanceToGroundAlongForwardVector;
	double _maxDistanceToGroundAlongForwardVector;
	double _canonicalSkyHeight;
	UIEdgeInsets _edgeInsets;
	double _beganDoublePanPitch;
	BOOL _isPitchable;
	BOOL _isPitchIncreasing;
	BOOL _trackingAutoSelectsZoomScale;
	BOOL _staysCenteredDuringPinch;
	double _lastRotation;
	BOOL _rotationLowZoomSnappingEnabled;
	BOOL _shouldRotationRubberband;
	BOOL _staysCenteredDuringRotation;
	CGPoint _panStartScreenPoint;
	CGPoint _panLastScreenPoint;
	double _tracePlaybackSpeedMultiplier;
	BOOL _shouldLimitTrackingCameraHeight;
}
@property(assign, nonatomic) double tracePlaybackSpeedMultiplier;	// @synthesize=_tracePlaybackSpeedMultiplier
@property(assign, nonatomic) double trackingZoomScale;
@property(readonly, assign, nonatomic, getter=isTrackingHeading) BOOL trackingHeading;
@property(readonly, assign, nonatomic) id<VKTrackableAnnotation> trackingAnnotation;
@property(readonly, assign, nonatomic, getter=isAnimatingToTrackAnnotation) BOOL animatingToTrackAnnotation;
@property(assign, nonatomic) BOOL shouldLimitTrackingCameraHeight;	// @synthesize=_shouldLimitTrackingCameraHeight
@property(assign, nonatomic) BOOL trackingAutoSelectsZoomScale;
@property(assign, nonatomic) double canonicalSkyHeight;	// @synthesize=_canonicalSkyHeight
@property(assign, nonatomic) UIEdgeInsets edgeInsets;	// @synthesize=_edgeInsets
@property(assign, nonatomic) BOOL allowDatelineWraparound;
@property(readonly, assign, nonatomic) BOOL canEnter3DMode;
@property(readonly, assign, nonatomic, getter=isFullyPitched) BOOL fullyPitched;
@property(readonly, assign, nonatomic, getter=isPitched) BOOL pitched;
@property(assign, nonatomic) BOOL isPitchable;	// @synthesize=_isPitchable
@property(assign, nonatomic) BOOL staysCenteredDuringRotation;	// @synthesize=_staysCenteredDuringRotation
@property(assign, nonatomic) BOOL staysCenteredDuringPinch;	// @synthesize=_staysCenteredDuringPinch
@property(retain, nonatomic) VKMapModel* mapModel;	// @synthesize=_mapModel
// declared property getter: -(BOOL)shouldLimitTrackingCameraHeight;
// declared property setter: -(void)setIsPitchable:(BOOL)pitchable;
// declared property getter: -(BOOL)isPitchable;
// declared property getter: -(double)tracePlaybackSpeedMultiplier;
// declared property getter: -(double)canonicalSkyHeight;
// declared property getter: -(UIEdgeInsets)edgeInsets;
// declared property setter: -(void)setStaysCenteredDuringRotation:(BOOL)rotation;
// declared property getter: -(BOOL)staysCenteredDuringRotation;
// declared property setter: -(void)setStaysCenteredDuringPinch:(BOOL)pinch;
// declared property getter: -(BOOL)staysCenteredDuringPinch;
// declared property setter: -(void)setMapModel:(id)model;
// declared property getter: -(id)mapModel;
-(void)canvasFrameDidChange;
-(void)trackingCameraController:(id)controller updatedStartAnimationTargetPosition:(XXStruct_taVrlB)position orientation:(const XXStruct_$zuyAD*)orientation;
-(void)trackingCameraControllerDidEndAnimating:(id)trackingCameraController;
-(void)trackingCameraControllerDidBeginAnimating:(id)trackingCameraController;
-(void)trackingCameraControllerDidChangeCameraState:(id)trackingCameraController;
-(void)stopSnappingAnimations;
-(void)updateCameraZBounds;
-(BOOL)updateCameraToPositionOrientationLimits;
-(BOOL)clampZoomLevelIfNecessary;
-(void)setGesturing:(BOOL)gesturing;
-(void)panWithPixelOffset:(CGPoint)pixelOffset relativeToScreenPoint:(CGPoint)screenPoint animated:(BOOL)animated duration:(double)duration completionHandler:(id)handler;
// declared property getter: -(BOOL)canEnter3DMode;
// declared property getter: -(BOOL)isFullyPitched;
// declared property getter: -(BOOL)isPitched;
-(BOOL)canPitchWithThreshold:(float)threshold;
// declared property getter: -(BOOL)allowDatelineWraparound;
// declared property setter: -(void)setAllowDatelineWraparound:(BOOL)wraparound;
-(void)exit3DMode;
-(void)enter3DMode;
-(void)stopPitchingWithFocusPoint:(CGPoint)focusPoint;
-(void)updatePitchWithFocusPoint:(CGPoint)focusPoint translation:(double)translation;
-(void)startPitchingWithFocusPoint:(CGPoint)focusPoint;
-(void)stopRotatingWithFocusPoint:(CGPoint)focusPoint;
-(void)updateRotationWithFocusPoint:(CGPoint)focusPoint newValue:(double)value;
-(void)startRotatingWithFocusPoint:(CGPoint)focusPoint;
-(void)stopPanningAtPoint:(CGPoint)point;
-(void)updatePanWithTranslation:(CGPoint)translation;
-(void)startPanningAtPoint:(CGPoint)point;
-(void)stopPinchingWithFocusPoint:(CGPoint)focusPoint;
-(void)updatePinchWithFocusPoint:(CGPoint)focusPoint oldFactor:(double)factor newFactor:(double)factor3;
-(void)startPinchingWithFocusPoint:(CGPoint)focusPoint;
-(void)zoom:(double)zoom withFocusPoint:(CGPoint)focusPoint completionHandler:(id)handler;
-(CGPoint)_scaledScreenPointForPoint:(CGPoint)point;
-(CGPoint)_centerScreenPoint;
// declared property setter: -(void)setTracePlaybackSpeedMultiplier:(double)multiplier;
// declared property setter: -(void)setTrackingZoomScale:(double)scale;
// declared property getter: -(double)trackingZoomScale;
-(BOOL)isAtDefaultTrackingZoomScale;
-(BOOL)isTracking;
-(BOOL)snapMapIfNecessary:(const XXStruct_taVrlB*)necessary animated:(BOOL)animated;
-(void)puckAnimator:(id)animator updatedTargetPosition:(XXStruct_taVrlB)position;
-(void)puckAnimatorDidStop:(id)puckAnimator;
-(void)puckAnimator:(id)animator updatedPosition:(XXStruct_6eq5eA*)position;
-(void)annotationTrackingCameraControllerDidChangeCameraState:(id)annotationTrackingCameraController;
-(id)annotationTrackingCameraController:(id)controller presentationForAnnotation:(id)annotation;
// declared property getter: -(BOOL)isAnimatingToTrackAnnotation;
-(void)didAnimateInAnnotationMarkers:(id)annotationMarkers;
// declared property getter: -(BOOL)isTrackingHeading;
// declared property getter: -(id)trackingAnnotation;
-(void)willAnimateInAnnotationMarkers:(id)annotationMarkers;
-(void)stopTrackingAnnotation;
-(void)startTrackingAnnotation:(id)annotation trackHeading:(BOOL)heading animated:(BOOL)animated;
// declared property setter: -(void)setShouldLimitTrackingCameraHeight:(BOOL)limitTrackingCameraHeight;
-(void)startCameraMotionAnimated:(BOOL)animated pounceCompletionHandler:(id)handler;
-(void)stopCameraMotion;
-(void)setCameraViewForPointOfReference:(XXStruct_zYrK5D)reference heading:(double)heading pointOfFocus:(XXStruct_zYrK5D)focus pointsOfInterest:(id)interest style:(int)style focusStyle:(int)style6 animated:(BOOL)animated;
-(BOOL)restoreViewportFromInfo:(id)info;
-(id)viewportInfo;
-(void)tapZoom:(CGPoint)zoom levels:(double)levels completionHandler:(id)handler;
-(void)stopPinching:(CGPoint)pinching;
-(void)pinch:(CGPoint)pinch oldFactor:(double)factor newFactor:(double)factor3;
-(void)startPinching:(CGPoint)pinching;
-(void)stopPanning:(CGPoint)panning;
-(void)startPanning:(CGPoint)panning;
-(void)pan:(CGPoint)pan;
-(void)stopPitching:(CGPoint)pitching;
-(void)startPitching:(CGPoint)pitching;
-(void)pitch:(CGPoint)pitch translation:(double)translation;
-(void)stopRotating:(CGPoint)rotating;
-(void)startRotating:(CGPoint)rotating;
-(void)rotate:(double)rotate atScreenPoint:(CGPoint)screenPoint;
-(void)zoom:(double)zoom withPoint:(XXStruct_taVrlB)point completionHandler:(id)handler;
-(void)zoomToLevel:(double)level withPoint:(XXStruct_taVrlB)point;
-(double)_rubberBandOffsetForOffset:(double)offset maxOffset:(double)offset2 minOffset:(double)offset3 range:(double)range;
-(void)rotateToYaw:(double)yaw withPoint:(const XXStruct_taVrlB*)point animated:(BOOL)animated;
-(void)rotateToPitch:(double)pitch withPoint:(const XXStruct_taVrlB*)point preserveAltitude:(BOOL)altitude animated:(BOOL)animated exaggerate:(BOOL)exaggerate;
-(float)maxPitchForNormalizedZoomLevel:(float)normalizedZoomLevel;
-(float)idealPitchForNormalizedZoomLevel:(float)normalizedZoomLevel;
-(float)minimumPitchForNormalizedZoomLevel:(float)normalizedZoomLevel;
// declared property setter: -(void)setCanonicalSkyHeight:(double)height;
-(float)currentMinimumNormalizedZoomLevel;
-(float)currentMaximumNormalizedZoomLevel;
-(int)maximumNormalizedZoomLevel;
-(int)minimumNormalizedZoomLevel;
-(float)currentStyleZoomLevel;
-(float)currentNormalizedZoomLevel;
-(float)currentDisplayZoomLevel;
-(int)tileSize;
-(XXStruct_taVrlB)groundPointFromScreenPoint:(CGPoint)screenPoint;
-(void)canvasDidLayout;
-(BOOL)isAnimating;
-(id)detailedDescription;
-(void)dealloc;
-(id)init;
// declared property setter: -(void)setTrackingAutoSelectsZoomScale:(BOOL)scale;
// declared property getter: -(BOOL)trackingAutoSelectsZoomScale;
// declared property setter: -(void)setEdgeInsets:(UIEdgeInsets)insets;
@end

