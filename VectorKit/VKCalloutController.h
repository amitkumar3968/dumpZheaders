/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import "VectorKit-Structs.h"
#import "VKMapLayer.h"
#import "VKModelObject.h"

@class _VKCalloutWrapperView, UICalloutView, UIPopoverController, UIView;
@protocol VKInteractiveMap, VKCalloutSource, VKCalloutControllerDelegate;

__attribute__((visibility("hidden")))
@interface VKCalloutController : VKModelObject <VKMapLayer> {
@private
	id<VKCalloutControllerDelegate> _delegate;
	id<VKCalloutSource> _calloutSource;
	UIView<VKInteractiveMap>* _calloutContainerView;
	UIPopoverController* _popoverController;
	UICalloutView* _calloutView;
	Class _calloutViewClass;
	_VKCalloutWrapperView* _calloutWrapperView;
	id _accessoryTapHandler;
	id _hideCallback;
	id _nextLayoutBlock;
	CGPoint _anchorPoint;
}
@property(assign, nonatomic) Class calloutViewClass;	// @synthesize=_calloutViewClass
@property(assign, nonatomic) UIView<VKInteractiveMap>* calloutContainerView;	// @synthesize=_calloutContainerView
@property(readonly, assign, nonatomic) id<VKCalloutSource> calloutSource;	// @synthesize=_calloutSource
@property(assign, nonatomic) id<VKCalloutControllerDelegate> delegate;	// @synthesize=_delegate
// declared property setter: -(void)setCalloutViewClass:(Class)aClass;
// declared property getter: -(Class)calloutViewClass;
// declared property setter: -(void)setCalloutContainerView:(id)view;
// declared property getter: -(id)calloutContainerView;
// declared property getter: -(id)calloutSource;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property getter: -(id)delegate;
-(void)drawScene:(id)scene withContext:(id)context;
-(void)layoutScene:(id)scene withContext:(id)context;
-(void)hideCalloutAnimated:(BOOL)animated;
-(void)showCalloutWithSource:(id)source animated:(BOOL)animated avoid:(CGRect)avoid accessoryTapHandler:(id)handler hideCallback:(id)callback;
-(void)showCalloutWithSource:(id)source animated:(BOOL)animated accessoryTapHandler:(id)handler hideCallback:(id)callback;
-(void)_showCalloutAnimated:(BOOL)animated avoid:(CGRect)avoid afterPan:(BOOL)pan additionalInsets:(UIEdgeInsets)insets;
-(void)updateCalloutAnimated:(BOOL)animated;
-(void)replaceSourceWithSource:(id)source;
-(CGPoint)_calloutAnchorPoint;
-(BOOL)isCalloutExpanded;
-(id)_calloutWrapperView;
-(id)calloutPopoverController;
-(void)_calloutAccessoryControlTapped:(id)tapped;
-(void)dealloc;
-(id)init;
-(unsigned)mapLayerPosition;
@end

