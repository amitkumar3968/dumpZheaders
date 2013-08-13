/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import "NSObject.h"


@protocol VKGlobeAdapterDelegate <NSObject>
-(void)globeAdapter:(id)adapter setNeedsDisplay:(BOOL)display;
-(void)globeAdapter:(id)adapter setNeedsLayout:(BOOL)layout;
-(void)globeAdapter:(id)adapter didDeselectLabelMarker:(id)marker;
-(void)globeAdapter:(id)adapter labelMarker:(id)marker calloutAccessoryControlTapped:(id)tapped;
-(void)globeAdapter:(id)adapter willSelectLabelMarker:(id)marker;
@end
