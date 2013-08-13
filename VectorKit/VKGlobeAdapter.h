/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import "VectorKit-Structs.h"
#import "VKLabelManagerDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class VKDebugModel, VKLabelFeaturePool, VKTrafficIncidentsMapModel, VKLabelManager, VKStylesheet, VKScene, VKGlobeViewWrapper;
@protocol VKGlobeAdapterDelegate;

__attribute__((visibility("hidden")))
@interface VKGlobeAdapter : XXUnknownSuperclass <VKLabelManagerDelegate> {
@private
	VKGlobeViewWrapper* _globeViewWrapper;
	VKLabelManager* _labelManager;
	VKTrafficIncidentsMapModel* _incidentMapModel;
	VKDebugModel* _debugModel;
	VKScene* _scene;
	VKScene* _incidentScene;
	VKLabelFeaturePool* _featurePool;
	VKStylesheet* _stylesheet;
	BOOL _localizeLabels;
	id<VKGlobeAdapterDelegate> _delegate;
	XXStruct_taVrlB _focusPoint;
	XXStruct_zYrK5D _focusCoordinate;
	vector<std::__1::weak_ptr<altitude::LabelData>, vk_allocator<std::__1::weak_ptr<altitude::LabelData>> > _activeLabelData;
	vector<std::__1::weak_ptr<altitude::TrafficTile>, vk_allocator<std::__1::weak_ptr<altitude::TrafficTile>> > _activeTrafficTiles;
	BOOL _labelMarkerSelectionEnabled;
	int _labelScaleFactor;
}
@property(assign, nonatomic) int labelScaleFactor;	// @synthesize=_labelScaleFactor
@property(assign, nonatomic) BOOL localizeLabels;	// @synthesize=_localizeLabels
@property(assign, nonatomic) BOOL labelMarkerSelectionEnabled;	// @synthesize=_labelMarkerSelectionEnabled
@property(assign, nonatomic) id<VKGlobeAdapterDelegate> delegate;	// @synthesize=_delegate
@property(retain, nonatomic) VKTrafficIncidentsMapModel* trafficIncidentsMapModel;	// @synthesize=_incidentMapModel
@property(retain) id calloutController;	// converted property
// declared property setter: -(void)setTrafficIncidentsMapModel:(id)model;
// declared property getter: -(id)trafficIncidentsMapModel;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property getter: -(id)delegate;
-(id).cxx_construct;
-(void).cxx_destruct;
-(void)labelManager:(id)manager setNeedsDisplay:(BOOL)display;
-(void)labelManager:(id)manager setNeedsLayout:(BOOL)layout;
-(void)labelManager:(id)manager didDeselectLabelMarker:(id)marker;
-(void)labelManager:(id)manager labelMarker:(id)marker calloutAccessoryControlTapped:(id)tapped;
-(void)labelManager:(id)manager willSelectLabelMarker:(id)marker;
// converted property getter: -(id)calloutController;
// converted property setter: -(void)setCalloutController:(id)controller;
-(void)deselectLabelMarkerAnimated:(BOOL)animated;
-(id)selectedLabelMarker;
-(void)selectLabelMarker:(id)marker animated:(BOOL)animated avoid:(CGRect)avoid;
-(id)labelMarkerForSelectionAtPoint:(CGPoint)point pointLabelsOnly:(BOOL)only;
-(void)debugHighlightLabelAtScreenPoint:(CGPoint)screenPoint viewTransform:(id)transform;
-(BOOL)hasOcclusionAtLocalPoint:(CGSize)localPoint inLabelTile:(id)labelTile;
-(void)drawWithContext:(id)context;
-(void)layoutWithContext:(id)context;
-(void)computeActiveTileSet:(unsigned)set;
-(id)_newMapTileForLabelTile:(id)labelTile layer:(unsigned)layer;
// declared property setter: -(void)setLocalizeLabels:(BOOL)labels;
// declared property getter: -(BOOL)localizeLabels;
// declared property setter: -(void)setLabelMarkerSelectionEnabled:(BOOL)enabled;
// declared property getter: -(BOOL)labelMarkerSelectionEnabled;
// declared property setter: -(void)setLabelScaleFactor:(int)factor;
// declared property getter: -(int)labelScaleFactor;
-(void)setFocusPoint:(XXStruct_taVrlB)point coordinate:(XXStruct_zYrK5D)coordinate;
-(void)didTapZoom;
-(void)willTapZoom;
-(void)setStylesheet:(id)stylesheet;
-(void)flushLabelTiles;
-(void)setGlobeViewWrapper:(id)wrapper;
-(void)_updateTrafficManagerCallbacks;
-(void)_updateLabelDataManagerCallbacks;
-(void)dealloc;
-(id)initWithCanvas:(id)canvas camera:(id)camera mapType:(int)type;
@end

