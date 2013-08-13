/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import "VectorKit-Structs.h"
#import "VKCameraController.h"

@class VKAnimation;
@protocol VKAnnotationTrackingCameraControllerDelegate, VKTrackableAnnotation, VKTrackableAnnotationPresentation;

__attribute__((visibility("hidden")))
@interface VKAnnotationTrackingCameraController : VKCameraController {
@private
	id<VKTrackableAnnotation> _annotation;
	id<VKTrackableAnnotationPresentation> _annotationPresentation;
	VKAnimation* _currentAnimation;
	XXStruct_taVrlB _currentAnimationStartPoint;
	XXStruct_taVrlB _currentAnimationStartCameraPosition;
	XXStruct_taVrlB _currentAnimationEndPoint;
	XXStruct_taVrlB _currentAnimationEndCameraPosition;
	id<VKAnnotationTrackingCameraControllerDelegate> _delegate;
	double _pendingChangeDuration;
	VKAnimation* _currentHeadingAnimation;
	double _pendingHeadingChangeDuration;
	float _headingAnimationCompletedAngle;
	UIEdgeInsets _edgeInsets;
	int _annotationMarkersAnimatingInCount;
	struct {
		unsigned autoSelectsZoomScale : 1;
		unsigned hasPendingChange : 1;
		unsigned paused : 1;
		unsigned trackingHeading : 1;
		unsigned hasPendingHeadingChange : 1;
		unsigned isInitialRegionChange : 1;
		unsigned annotationImplementsAccuracy : 1;
		unsigned annotationImplementsHeading : 1;
	} _flags;
}
@property(readonly, assign, nonatomic, getter=isTrackingHeading) BOOL trackingHeading;
@property(readonly, assign, nonatomic) id<VKTrackableAnnotation> annotation;	// @synthesize=_annotation
@property(assign, nonatomic) BOOL autoSelectsZoomScale;
@property(assign, nonatomic) UIEdgeInsets edgeInsets;	// @synthesize=_edgeInsets
@property(assign, nonatomic) id<VKAnnotationTrackingCameraControllerDelegate> delegate;	// @synthesize=_delegate
// declared property getter: -(id)annotation;
// declared property setter: -(void)setEdgeInsets:(UIEdgeInsets)insets;
// declared property getter: -(UIEdgeInsets)edgeInsets;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property getter: -(id)delegate;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
-(void)resumeAnimation;
-(void)pauseAnimation;
-(BOOL)isAnimating;
-(void)setGesturing:(BOOL)gesturing;
-(void)stopTrackingAnnotation;
-(void)startTrackingAnnotation:(id)annotation trackHeading:(BOOL)heading animated:(BOOL)animated;
-(void)_rotateToHeadingAnimated:(BOOL)headingAnimated duration:(double)duration;
-(void)_goToAnnotationAnimated:(BOOL)annotationAnimated duration:(double)duration isInitial:(BOOL)initial;
-(double)_zoomLevelForCameraPosition:(XXStruct_taVrlB)cameraPosition;
-(double)_minTrackingCameraDistance;
-(void)updateFramerate;
-(void)didAnimateInAnnotationMarkers:(id)annotationMarkers;
-(void)willAnimateInAnnotationMarkers:(id)annotationMarkers;
// declared property setter: -(void)setAutoSelectsZoomScale:(BOOL)scale;
// declared property getter: -(BOOL)autoSelectsZoomScale;
// declared property getter: -(BOOL)isTrackingHeading;
-(void)dealloc;
@end
