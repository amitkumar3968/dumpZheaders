/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import "VKOverlay.h"
#import "VectorKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSSet, NSMutableSet, GEOMapRegion, VKPolylineOverlay;

@interface VKPolylineGroupOverlay : XXUnknownSuperclass <VKOverlay> {
@private
	NSMutableSet* _polylines;
	GEOMapRegion* _boundingMapRegion;
	CFSetRef _observers;
	VKPolylineOverlay* _selectedPolyline;
}
@property(readonly, assign, nonatomic) XXStruct_zYrK5D coordinate;
@property(readonly, assign, nonatomic) GEOMapRegion* boundingMapRegion;	// @synthesize=_boundingMapRegion
@property(retain, nonatomic) VKPolylineOverlay* selectedPolyline;	// @synthesize=_selectedPolyline
@property(readonly, assign, nonatomic) NSSet* polylines;	// @synthesize=_polylines
// declared property getter: -(id)selectedPolyline;
// declared property getter: -(id)boundingMapRegion;
// declared property getter: -(id)polylines;
// declared property getter: -(XXStruct_zYrK5D)coordinate;
-(void)_updateBoundingMapRegion;
// declared property setter: -(void)setSelectedPolyline:(id)polyline;
-(void)removePolyline:(id)polyline;
-(void)addPolyline:(id)polyline;
-(void)removeObserver:(id)observer;
-(void)addObserver:(id)observer;
-(void)dealloc;
@end

