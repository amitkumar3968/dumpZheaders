/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import "VectorKit-Structs.h"
#import "VKScreenCanvas.h"
#import "VKMapModelDelegate.h"
#import "VKInteractiveMap.h"

@class VKMapModel, GEOMapRegion, NSArray, VKTrafficIncident, VKMapCameraController, VKLoupeView, VKCamera, VKConsoleView, VKStylesheet, VKPolylineOverlayPainter, VKAnimation;
@protocol VKTrackableAnnotation, VKInteractiveMapDelegate, VKRouteMatchedAnnotationPresentation, VKRoutePreloadSession;

__attribute__((visibility("hidden")))
@interface VKMapCanvas : VKScreenCanvas <VKMapModelDelegate, VKInteractiveMap> {
@private
	VKMapModel* _map;
	VKMapCameraController* _cameraController;
	VKConsoleView* _consoleView;
	VKLoupeView* _loupe;
	id<VKInteractiveMapDelegate> _delegate;
	UIEdgeInsets _edgeInsets;
	UIEdgeInsets _fullyOccludedEdgeInsets;
	VKAnimation* _regionAnimation;
	double _finalYaw;
	double _finalPitch;
	CGSize _lastCanvasSize;
	VKCamera* _defaultTrackingCamera;
	float _lastValidCanvasSizeZoomLevel;
	BOOL _hasLastValidCanvasSizeZoomLevel;
}
@property(readonly, assign, nonatomic, getter=isFullyDrawn) BOOL fullyDrawn;
@property(readonly, assign, nonatomic) NSArray* visibleTileSets;
@property(readonly, assign, nonatomic, getter=isTrackingHeading) BOOL trackingHeading;
@property(readonly, assign, nonatomic) id<VKTrackableAnnotation> trackingAnnotation;
@property(readonly, assign, nonatomic, getter=isAnimatingToTrackAnnotation) BOOL animatingToTrackAnnotation;
@property(readonly, assign, nonatomic) double pitch;
@property(readonly, assign, nonatomic) double presentationYaw;
@property(readonly, assign, nonatomic) GEOMapRegion* mapRegionOfInterest;
@property(assign, nonatomic) UIEdgeInsets fullyOccludedEdgeInsets;	// @synthesize=_fullyOccludedEdgeInsets
@property(assign, nonatomic) UIEdgeInsets edgeInsets;
@property(assign, nonatomic) int labelScaleFactor;
@property(assign, nonatomic) BOOL localizeLabels;
@property(readonly, assign, nonatomic, getter=isFullyPitched) BOOL fullyPitched;
@property(assign, nonatomic) id<VKRouteMatchedAnnotationPresentation> routeLineSplitAnnotation;
@property(readonly, assign, nonatomic) VKMapModel* map;	// @synthesize=_map
@property(readonly, assign, nonatomic) VKConsoleView* consoleView;	// @synthesize=_consoleView
@property(retain, nonatomic) id<VKRoutePreloadSession> routePreloadSession;
@property(retain, nonatomic) VKPolylineOverlayPainter* focusedLabelsPolylinePainter;
@property(assign, nonatomic) BOOL labelMarkerSelectionEnabled;
@property(assign, nonatomic) Class calloutViewClass;
@property(readonly, assign, nonatomic) VKTrafficIncident* selectedTrafficIncident;
@property(retain, nonatomic) VKCamera* defaultTrackingCamera;	// @synthesize=_defaultTrackingCamera
@property(assign, nonatomic) BOOL trackingAutoSelectsZoomScale;
@property(assign, nonatomic) double trackingZoomScale;
@property(assign, nonatomic) BOOL allowDatelineWraparound;
@property(assign, nonatomic) XXStruct_taVrlB centerCoordinate;
@property(readonly, assign, nonatomic) double yaw;
@property(retain, nonatomic) GEOMapRegion* mapRegion;
@property(assign, nonatomic) int loupeType;
@property(assign, nonatomic) BOOL dynamicMapModesEnabled;
@property(readonly, assign, nonatomic) double maximumZoomLevel;
@property(readonly, assign, nonatomic) double minimumZoomLevel;
@property(assign, nonatomic) int mapType;
@property(retain, nonatomic) VKStylesheet* stylesheet;
@property(assign, nonatomic) BOOL trafficEnabled;
@property(readonly, assign, nonatomic, getter=isPitched) BOOL pitched;
@property(assign, nonatomic) BOOL isPitchable;
@property(assign, nonatomic) BOOL staysCenteredDuringRotation;
@property(assign, nonatomic) BOOL staysCenteredDuringPinch;
@property(assign, nonatomic) id<VKInteractiveMapDelegate> delegate;	// @synthesize=_delegate
@property(retain) id annotationMarkerDeselectionCallback;	// converted property
+(BOOL)supportsMapType:(int)type;
// declared property getter: -(id)defaultTrackingCamera;
// declared property setter: -(void)setFullyOccludedEdgeInsets:(UIEdgeInsets)insets;
// declared property getter: -(UIEdgeInsets)fullyOccludedEdgeInsets;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property getter: -(id)delegate;
// declared property getter: -(id)map;
// declared property getter: -(id)routeLineSplitAnnotation;
// declared property setter: -(void)setRouteLineSplitAnnotation:(id)annotation;
-(void)puckAnimator:(id)animator updatedTargetPosition:(XXStruct_taVrlB)position;
-(void)puckAnimatorDidStop:(id)puckAnimator;
-(void)puckAnimator:(id)animator updatedPosition:(XXStruct_6eq5eA*)position;
-(void)clearScene;
-(void)debugHighlightLabelAtPoint:(CGPoint)point;
-(void)goToTileX:(int)tileX Y:(int)y Z:(int)z tileSize:(int)size;
-(double)mapModelZoomScale:(id)scale;
-(BOOL)mapModelInNav:(id)nav;
-(BOOL)mapModelInNavAtDefaultZoom:(id)defaultZoom;
-(void)mapModelDidFailLoadingTiles:(id)mapModel withError:(id)error;
-(void)mapModelDidFinishLoadingTiles:(id)mapModel;
-(void)mapModelDidStartLoadingTiles:(id)mapModel;
-(void)mapModel:(id)model didDeselectTrafficIncident:(id)incident;
-(void)mapModel:(id)model trafficIncident:(id)incident calloutAccessoryControlTapped:(id)tapped;
-(void)mapModel:(id)model willSelectTrafficIncident:(id)incident;
-(void)mapModel:(id)model didDeselectLabelMarker:(id)marker;
-(void)mapModel:(id)model labelMarker:(id)marker calloutAccessoryControlTapped:(id)tapped;
-(void)mapModel:(id)model willSelectLabelMarker:(id)marker;
-(void)mapModelDidBecomePartiallyDrawn:(id)mapModel;
-(void)mapModelDidBecomeFullyDrawn:(id)mapModel;
-(id)mapModel:(id)model painterForOverlay:(id)overlay;
-(void)mapModel:(id)model didAnimateInAnnotationMarkers:(id)annotationMarkers;
-(void)mapModel:(id)model willAnimateInAnnotationMarkers:(id)annotationMarkers;
-(void)mapModel:(id)model didUpdateCalloutView:(id)view forSource:(id)source animated:(BOOL)animated;
-(void)mapModel:(id)model willShowCalloutView:(id)view forSource:(id)source;
-(void)mapModel:(id)model didUpdateCalloutPopoverController:(id)controller forSource:(id)source;
-(void)mapModel:(id)model willShowCalloutPopoverController:(id)controller forSource:(id)source;
-(void)mapModel:(id)model needsPanByPixelOffset:(CGPoint)offset relativeToScreenPoint:(CGPoint)screenPoint animated:(BOOL)animated duration:(double)duration completionHandler:(id)handler;
-(void)mapModel:(id)model annotationMarker:(id)marker calloutAccessoryControlTapped:(id)tapped;
-(void)stopSnappingAnimations;
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
-(id)cameraController:(id)controller presentationForAnnotation:(id)annotation;
-(void)cameraController:(id)controller canEnter3DModeDidChange:(BOOL)canEnter3DMode;
-(void)cameraController:(id)controller didBecomePitched:(BOOL)pitched;
-(void)cameraControllerDidStopRegionAnimation:(id)cameraController completed:(BOOL)completed;
-(void)cameraControllerWillStartRegionAnimation:(id)cameraController;
-(void)cameraControllerDidChangeCameraState:(id)cameraController;
// declared property getter: -(id)selectedTrafficIncident;
-(void)deselectTrafficIncidentAnimated:(BOOL)animated;
-(void)selectTrafficIncident:(id)incident animated:(BOOL)animated avoid:(CGRect)avoid;
-(id)trafficIncidentForSelectionAtPoint:(CGPoint)point;
// declared property setter: -(void)setLabelMarkerSelectionEnabled:(BOOL)enabled;
// declared property getter: -(BOOL)labelMarkerSelectionEnabled;
-(void)deselectLabelMarkerAnimated:(BOOL)animated;
-(void)selectLabelMarker:(id)marker animated:(BOOL)animated avoid:(CGRect)avoid;
-(id)labelMarkerForSelectionAtPoint:(CGPoint)point pointLabelsOnly:(BOOL)only;
-(id)annotationMarkerForSelectionAtPoint:(CGPoint)point avoidCurrent:(BOOL)current;
-(XXStruct_taVrlB)screenPointForPoint:(CGPoint)point;
-(id)annotationCoordinateTest;
-(id)annotationRectTest;
// converted property getter: -(id)annotationMarkerDeselectionCallback;
-(id)selectedAnnotationMarker;
-(id)annotationMarkers;
// converted property setter: -(void)setAnnotationMarkerDeselectionCallback:(id)callback;
-(void)deselectAnnotationMarker:(id)marker animated:(BOOL)animated;
-(void)selectAnnotationMarker:(id)marker animated:(BOOL)animated avoid:(CGRect)avoid;
-(void)removeAnnotationMarker:(id)marker;
-(void)addAnnotationMarker:(id)marker allowAnimation:(BOOL)animation;
-(BOOL)restoreViewportFromInfo:(id)info;
-(id)viewportInfo;
// declared property getter: -(id)routePreloadSession;
// declared property setter: -(void)setRoutePreloadSession:(id)session;
-(void)preloadNavigationSceneResources;
// declared property setter: -(void)setFocusedLabelsPolylinePainter:(id)painter;
// declared property getter: -(id)focusedLabelsPolylinePainter;
-(void)setCurrentLocationText:(id)text;
-(void)setRouteUserOffset:(RouteCalibration)offset;
-(void)removePersistentOverlay:(id)overlay;
-(void)addPersistentOverlay:(id)overlay;
-(id)persistentOverlays;
-(id)overlays;
-(void)removeOverlay:(id)overlay;
-(void)addOverlay:(id)overlay;
-(id)selectedLabelMarker;
-(void)dismissExpandedCallout;
// declared property getter: -(Class)calloutViewClass;
// declared property setter: -(void)setCalloutViewClass:(Class)aClass;
-(id)calloutPopoverController;
// declared property setter: -(void)setDefaultTrackingCamera:(id)camera;
-(id)navTileSource;
-(void)setTracePlaybackSpeedMultiplier:(double)multiplier;
// declared property getter: -(BOOL)isTrackingHeading;
// declared property getter: -(id)trackingAnnotation;
// declared property getter: -(BOOL)isAnimatingToTrackAnnotation;
-(void)stopTrackingAnnotation;
-(void)startTrackingAnnotation:(id)annotation trackHeading:(BOOL)heading animated:(BOOL)animated;
// declared property setter: -(void)setTrackingAutoSelectsZoomScale:(BOOL)scale;
// declared property getter: -(BOOL)trackingAutoSelectsZoomScale;
// declared property setter: -(void)setTrackingZoomScale:(double)scale;
// declared property getter: -(double)trackingZoomScale;
-(void)cameraController:(id)controller pouncingToCameraPosition:(XXStruct_taVrlB)cameraPosition orientation:(const XXStruct_$zuyAD*)orientation;
-(void)setShouldLimitTrackingCameraHeight:(BOOL)limitTrackingCameraHeight;
-(void)transitionToTracking:(BOOL)tracking mapMode:(int)mode pounceCompletionHandler:(id)handler;
-(void)stopTracking;
-(void)updateTrackingForPointOfReference:(XXStruct_zYrK5D)reference referenceHeading:(double)heading pointOfFocus:(XXStruct_zYrK5D)focus pointsOfInterest:(id)interest viewStyle:(int)style focusStyle:(int)style6 animated:(BOOL)animated;
-(CGPoint)convertCoordinate:(XXStruct_zYrK5D)coordinate toCameraModelPointToView:(id)view;
-(CGPoint)convertCoordinate:(XXStruct_zYrK5D)coordinate toPointToView:(id)view;
-(XXStruct_zYrK5D)convertPoint:(CGPoint)point toCoordinateFromView:(id)view;
-(void)updateCameraForFrameResize;
-(void)forceSceneLoad;
-(void)onTimerFired:(double)fired;
-(BOOL)currentSceneRequiresMSAA;
-(void)didDrawView;
// declared property getter: -(id)consoleView;
// declared property getter: -(UIEdgeInsets)edgeInsets;
// declared property setter: -(void)setEdgeInsets:(UIEdgeInsets)insets;
-(BOOL)writeVisibleTrafficTilesToDirectory:(id)directory error:(id*)error;
-(id)detailedDescription;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)didReceiveMemoryWarning;
-(void)setHidden:(BOOL)hidden;
-(id)initWithFrame:(CGRect)frame shouldRasterize:(BOOL)rasterize;
-(void)setCanonicalSkyHeight:(double)height;
-(BOOL)canEnter3DMode;
// declared property getter: -(BOOL)isFullyPitched;
// declared property getter: -(BOOL)isPitched;
-(void)exit3DMode;
-(void)enter3DMode;
-(void)transferCamera:(id)camera;
-(CGPoint)_centerScreenPoint;
// declared property getter: -(BOOL)allowDatelineWraparound;
// declared property setter: -(void)setAllowDatelineWraparound:(BOOL)wraparound;
// declared property getter: -(XXStruct_taVrlB)centerCoordinate;
// declared property setter: -(void)setCenterCoordinate:(XXStruct_taVrlB)coordinate;
-(void)setCenterCoordinate:(XXStruct_taVrlB)coordinate animated:(BOOL)animated;
// declared property getter: -(id)mapRegionOfInterest;
// declared property getter: -(id)mapRegion;
-(id)_mapRegionIgnoringFarAmount:(double)amount;
// declared property setter: -(void)setMapRegion:(id)region;
-(void)animateToMapRegion:(id)mapRegion pitch:(double)pitch yaw:(double)yaw duration:(double)duration completion:(id)completion;
-(void)setMapRegion:(id)region pitch:(double)pitch yaw:(double)yaw animated:(BOOL)animated completion:(id)completion;
-(XXStruct_zYrK5D)_mercatorCenterCoordinateForMapRegion:(id)mapRegion;
-(void)setFrame:(CGRect)frame;
-(void)setYaw:(double)yaw animated:(BOOL)animated;
-(void)stopRegionAnimation;
// declared property getter: -(double)yaw;
// declared property getter: -(double)presentationYaw;
// declared property getter: -(double)pitch;
-(void)setMapRegion:(id)region pitch:(double)pitch yaw:(double)yaw animated:(BOOL)animated;
-(void)setMapRegion:(id)region animated:(BOOL)animated;
// declared property getter: -(int)loupeType;
// declared property setter: -(void)setLoupeType:(int)type;
-(void)setStylesheetName:(id)name;
// declared property setter: -(void)setStylesheet:(id)stylesheet;
// declared property getter: -(id)stylesheet;
// declared property setter: -(void)setDynamicMapModesEnabled:(BOOL)enabled;
// declared property getter: -(BOOL)dynamicMapModesEnabled;
-(void)setDesiredMapMode:(int)mode immediate:(BOOL)immediate;
// declared property getter: -(double)maximumZoomLevel;
// declared property getter: -(double)minimumZoomLevel;
// declared property getter: -(int)mapType;
// declared property setter: -(void)setMapType:(int)type;
// declared property getter: -(BOOL)staysCenteredDuringRotation;
// declared property setter: -(void)setStaysCenteredDuringRotation:(BOOL)rotation;
// declared property getter: -(BOOL)isPitchable;
// declared property setter: -(void)setIsPitchable:(BOOL)pitchable;
// declared property getter: -(BOOL)staysCenteredDuringPinch;
// declared property setter: -(void)setStaysCenteredDuringPinch:(BOOL)pinch;
// declared property setter: -(void)setLabelScaleFactor:(int)factor;
// declared property getter: -(int)labelScaleFactor;
// declared property setter: -(void)setLocalizeLabels:(BOOL)labels;
// declared property getter: -(BOOL)localizeLabels;
// declared property getter: -(BOOL)isFullyDrawn;
// declared property getter: -(BOOL)trafficEnabled;
// declared property setter: -(void)setTrafficEnabled:(BOOL)enabled;
-(BOOL)isShowingNoDataPlaceholders;
-(id)attributionsForCurrentRegion;
// declared property getter: -(id)visibleTileSets;
@end

