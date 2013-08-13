/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import "VectorKit-Structs.h"
#import "VKMapLayer.h"
#import "VKModelObject.h"

@class NSMutableArray, NSArray, VKCalloutController, NSMutableSet, UIView, VKAnnotationMarker;
@protocol VKAnnotationModelDelegate;

__attribute__((visibility("hidden")))
@interface VKAnnotationModel : VKModelObject <VKMapLayer> {
@private
	NSMutableArray* _annotationMarkers;
	VKAnnotationMarker* _selectedAnnotationMarker;
	BOOL _shouldAnimateCallout;
	CGRect _delayedShowCalloutAvoidRect;
	NSMutableSet* _animatingMarkers;
	NSMutableArray* _markersToAnimate;
	id<VKAnnotationModelDelegate> _delegate;
	VKCalloutController* _calloutController;
	VKAnnotationMarker* _draggingAnnotationMarker;
	BOOL _didDragMarker;
	BOOL _hasEverDrawnSomething;
	XXStruct_OQO8SD _styleTransitionState;
	id _annotationMarkerDeselectionCallback;
}
@property(copy, nonatomic) id annotationMarkerDeselectionCallback;	// @synthesize=_annotationMarkerDeselectionCallback
@property(readonly, assign, nonatomic) BOOL needsLayout;
@property(readonly, assign, nonatomic) VKAnnotationMarker* selectedAnnotationMarker;
@property(readonly, assign, nonatomic) NSArray* annotationMarkers;	// @synthesize=_annotationMarkers
@property(assign, nonatomic) XXStruct_OQO8SD styleTransitionState;	// @synthesize=_styleTransitionState
@property(readonly, assign, nonatomic) UIView* calloutContainerView;
@property(retain, nonatomic) VKCalloutController* calloutController;	// @synthesize=_calloutController
@property(assign, nonatomic) id<VKAnnotationModelDelegate> delegate;	// @synthesize=_delegate
// declared property setter: -(void)setAnnotationMarkerDeselectionCallback:(id)callback;
// declared property getter: -(id)annotationMarkerDeselectionCallback;
// declared property setter: -(void)setCalloutController:(id)controller;
// declared property getter: -(id)calloutController;
// declared property getter: -(XXStruct_OQO8SD)styleTransitionState;
// declared property getter: -(id)annotationMarkers;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property getter: -(id)delegate;
-(void)deselectAnnotationMarker:(id)marker animated:(BOOL)animated;
-(void)selectAnnotationMarker:(id)marker animated:(BOOL)animated avoid:(CGRect)avoid;
-(id)annotationMarkerForSelectionAtPoint:(XXStruct_taVrlB)point avoidCurrent:(BOOL)current canvasSize:(CGSize)size;
-(void)removeAnnotationMarker:(id)marker;
-(void)addAnnotationMarker:(id)marker allowAnimation:(BOOL)animation;
-(void)drawScene:(id)scene withContext:(id)context;
-(void)layoutScene:(id)scene withContext:(id)context;
-(id)annotationCoordinateTest;
-(id)annotationRectTest;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
-(void)dealloc;
-(void)_showCalloutWithAnimation:(BOOL)animation avoid:(CGRect)avoid;
// declared property getter: -(BOOL)needsLayout;
-(void)anchorPositionChangedForMarker:(id)marker;
// declared property setter: -(void)setStyleTransitionState:(XXStruct_OQO8SD)state;
// declared property getter: -(id)selectedAnnotationMarker;
// declared property getter: -(id)calloutContainerView;
-(unsigned)mapLayerPosition;
@end
