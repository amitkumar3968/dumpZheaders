/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class VKMapView;

__attribute__((visibility("hidden")))
@interface VKStyleEditorConnection : XXUnknownSuperclass {
@private
	VKMapView* _mapView;
}
@property(retain, nonatomic) VKMapView* mapView;	// @synthesize=_mapView
// declared property setter: -(void)setMapView:(id)view;
// declared property getter: -(id)mapView;
-(void)runServer;
-(id)messageReceived:(id)received userInfo:(id)info;
@end

