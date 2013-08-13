/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import "VectorKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface VKFootprint : XXUnknownSuperclass {
@private
	XXStruct_HKaJvA _boundingRect;
	VKFootprintConvexHull_struct _convexHull;
	double _maxDistance;
	XXStruct_taVrlB _furthestGroundPoint;
	double _minDistance;
	XXStruct_taVrlB _nearestGroundPoint;
	double _minDepth;
	double _maxDepth;
	double _centerDepth;
}
@property(readonly, assign, nonatomic) XXStruct_taVrlB nearestGroundPoint;	// @synthesize=_nearestGroundPoint
@property(readonly, assign, nonatomic) XXStruct_taVrlB furthestGroundPoint;	// @synthesize=_furthestGroundPoint
@property(readonly, assign, nonatomic) double centerDepth;	// @synthesize=_centerDepth
@property(readonly, assign, nonatomic) double maxDepth;	// @synthesize=_maxDepth
@property(readonly, assign, nonatomic) double minDepth;	// @synthesize=_minDepth
@property(readonly, assign, nonatomic) VKFootprintConvexHull_struct convexHull;	// @synthesize=_convexHull
@property(readonly, assign, nonatomic) XXStruct_HKaJvA boundingRect;	// @synthesize=_boundingRect
// declared property getter: -(XXStruct_taVrlB)nearestGroundPoint;
// declared property getter: -(XXStruct_taVrlB)furthestGroundPoint;
// declared property getter: -(double)centerDepth;
// declared property getter: -(double)maxDepth;
// declared property getter: -(double)minDepth;
// declared property getter: -(VKFootprintConvexHull_struct)convexHull;
// declared property getter: -(XXStruct_HKaJvA)boundingRect;
-(BOOL)containsGroundPoint:(XXStruct_taVrlB*)point;
-(BOOL)rejectsRect:(const XXStruct_HKaJvA*)rect;
-(void)computeFromCamera:(id)camera;
@end
