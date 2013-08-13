/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import "VectorKit-Structs.h"
#import "VKRouteMatchedAnnotationPresentation.h"
#import "VKAnnotationMarker.h"

@class VKAttributedRouteMatch;

@interface VKRouteMatchedAnnotationMarker : VKAnnotationMarker <VKRouteMatchedAnnotationPresentation> {
	VKAttributedRouteMatch* _routeMatch;
}
@property(assign, nonatomic, getter=isTracking) BOOL tracking;
@property(assign, nonatomic) XXStruct_zYrK5D presentationCoordinate;
@property(retain, nonatomic) VKAttributedRouteMatch* routeMatch;	// @synthesize=_routeMatch
// declared property setter: -(void)setRouteMatch:(id)match;
// declared property getter: -(id)routeMatch;
-(void)dealloc;
@end
