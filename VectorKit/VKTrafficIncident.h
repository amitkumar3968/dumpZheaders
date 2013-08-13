/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import "VKCalloutSource.h"
#import "VectorKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UICalloutView, VGLRenderState, NSDate, NSString, UIView, VKImage, VKAnchor;

@interface VKTrafficIncident : XXUnknownSuperclass <VKCalloutSource> {
@private
	XXStruct_taVrlB _pointInWorld;
	XXUnion_7lcBWC _shaderMatrix;
	XXStruct_HKaJvA _screenRect;
	UICalloutView* _calloutView;
	VKImage* _image;
	NSString* _title;
	NSString* _subtitle;
	XXStruct_taVrlB _projectedPoint;
	VGLRenderState* _renderState;
	int _type;
	XXStruct_zYrK5D _location;
	UIView* _leftCalloutAccessoryView;
	UIView* _rightCalloutAccessoryView;
	NSString* _street;
	NSString* _crossStreet;
	NSString* _info;
	NSDate* _startDate;
	NSDate* _endDate;
	NSDate* _lastUpdatedDate;
	VKAnchor* _anchor;
}
@property(copy, nonatomic) NSString* subtitle;	// @synthesize=_subtitle
@property(copy, nonatomic) NSString* title;	// @synthesize=_title
@property(retain, nonatomic) UICalloutView* calloutView;	// @synthesize=_calloutView
@property(retain, nonatomic) UIView* rightCalloutAccessoryView;	// @synthesize=_rightCalloutAccessoryView
@property(retain, nonatomic) UIView* leftCalloutAccessoryView;	// @synthesize=_leftCalloutAccessoryView
@property(readonly, assign, nonatomic) NSDate* lastUpdatedDate;	// @synthesize=_lastUpdatedDate
@property(readonly, assign, nonatomic) NSDate* endDate;	// @synthesize=_endDate
@property(readonly, assign, nonatomic) NSDate* startDate;	// @synthesize=_startDate
@property(readonly, assign, nonatomic) NSString* info;	// @synthesize=_info
@property(readonly, assign, nonatomic) NSString* crossStreet;	// @synthesize=_crossStreet
@property(readonly, assign, nonatomic) NSString* street;	// @synthesize=_street
@property(readonly, assign, nonatomic) int type;	// @synthesize=_type
@property(readonly, assign) XXStruct_taVrlB projectedPoint;	// converted property
// declared property getter: -(id)lastUpdatedDate;
// declared property getter: -(id)endDate;
// declared property getter: -(id)startDate;
// declared property getter: -(id)info;
// declared property getter: -(id)crossStreet;
// declared property getter: -(id)street;
// declared property setter: -(void)setRightCalloutAccessoryView:(id)view;
// declared property getter: -(id)rightCalloutAccessoryView;
// declared property setter: -(void)setLeftCalloutAccessoryView:(id)view;
// declared property getter: -(id)leftCalloutAccessoryView;
// declared property getter: -(int)type;
// declared property setter: -(void)setSubtitle:(id)subtitle;
// declared property getter: -(id)subtitle;
// declared property setter: -(void)setTitle:(id)title;
// declared property getter: -(id)title;
// declared property setter: -(void)setCalloutView:(id)view;
// declared property getter: -(id)calloutView;
-(id).cxx_construct;
-(id)debugAnchorPointString;
-(CGPoint)screenPointToScrollRelativeToWithCanvasSize:(CGSize)canvasSize;
-(CGPoint)calloutAnchorPointWithCanvasSize:(CGSize)canvasSize;
-(float)distanceFromPoint:(XXStruct_taVrlB)point canvasSize:(CGSize)size;
-(BOOL)containsPoint:(XXStruct_taVrlB)point;
-(void)drawWithContext:(id)context;
-(void)layoutWithContext:(id)context;
-(XXStruct_taVrlB)pointInWorldWithContext:(id)context;
-(id)anchorWithContext:(id)context;
-(XXStruct_taVrlB)worldPoint;
// converted property getter: -(XXStruct_taVrlB)projectedPoint;
-(void)dealloc;
-(id)initWithIncidentData:(const Incident*)incidentData worldPoint:(XXStruct_taVrlB*)point;
@end

