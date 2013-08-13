/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "AirPortAssistant-Structs.h"

@class NSArray, NSMutableArray, CALayer;

__attribute__((visibility("hidden")))
@interface NetTopoMiniStaticLayout : XXUnknownSuperclass {
	int _layoutOptions;
	CALayer* _containerLayer;
	NSMutableArray* _topoDeviceLayers;
	NSMutableArray* _connectionLayers;
	NSArray* _topoDevicesDescriptor;
}
@property(assign, nonatomic) int layoutOptions;	// @synthesize=_layoutOptions
@property(readonly, assign, nonatomic) NSArray* topoDeviceLayers;	// @synthesize=_topoDeviceLayers
@property(retain, nonatomic) NSArray* topoDevicesDescriptor;	// @synthesize=_topoDevicesDescriptor
@property(retain, nonatomic) CALayer* containerLayer;	// @synthesize=_containerLayer
// declared property setter: -(void)setLayoutOptions:(int)options;
// declared property getter: -(int)layoutOptions;
// declared property setter: -(void)setTopoDevicesDescriptor:(id)descriptor;
// declared property getter: -(id)topoDevicesDescriptor;
// declared property getter: -(id)topoDeviceLayers;
-(void)createLayoutForDevices:(id)devices;
-(void)performLayout;
-(CGImageRef)newImageForDeviceSpec:(id)deviceSpec wantSmall:(BOOL)small;
// declared property getter: -(id)containerLayer;
// declared property setter: -(void)setContainerLayer:(id)layer;
-(void)dealloc;
-(void)destroyDeviceLayers;
-(id)initWithContainerLayer:(id)containerLayer andOptions:(int)options;
@end
