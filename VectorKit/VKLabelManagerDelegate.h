/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import "NSObject.h"


@protocol VKLabelManagerDelegate <NSObject>
-(void)labelManager:(id)manager setNeedsDisplay:(BOOL)display;
-(void)labelManager:(id)manager setNeedsLayout:(BOOL)layout;
-(void)labelManager:(id)manager didDeselectLabelMarker:(id)marker;
-(void)labelManager:(id)manager labelMarker:(id)marker calloutAccessoryControlTapped:(id)tapped;
-(void)labelManager:(id)manager willSelectLabelMarker:(id)marker;
@end

