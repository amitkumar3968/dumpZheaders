/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface VKPlatform : XXUnknownSuperclass {
@private
	int _hardwareType;
	NSString* _modelName;
	unsigned _memSize;
	int _numCPUs;
}
@property(readonly, assign, nonatomic) BOOL canMakeSharingThumbnails;
@property(readonly, assign, nonatomic) BOOL canMakeHighResolutionSnapshots;
@property(readonly, assign, nonatomic) BOOL shouldDrawWhenReady;
@property(readonly, assign, nonatomic) BOOL isPad;
@property(readonly, assign, nonatomic) unsigned tileMaximumLimit;
@property(readonly, assign, nonatomic) unsigned tileReserveLimit;
@property(readonly, assign, nonatomic) BOOL shouldUseTrafficAlphaHack;
@property(readonly, assign, nonatomic) BOOL roadsWithSimpleLineMeshesAvailable;
@property(readonly, assign, nonatomic) BOOL isHiDPI;
+(id)sharedPlatform;
// declared property getter: -(BOOL)shouldDrawWhenReady;
// declared property getter: -(BOOL)isPad;
-(void)_determineSystemModel;
-(void)_determineHardware;
// declared property getter: -(BOOL)canMakeSharingThumbnails;
// declared property getter: -(BOOL)canMakeHighResolutionSnapshots;
// declared property getter: -(BOOL)shouldUseTrafficAlphaHack;
-(BOOL)supportsHiResRTT;
// declared property getter: -(unsigned)tileMaximumLimit;
// declared property getter: -(unsigned)tileReserveLimit;
// declared property getter: -(BOOL)roadsWithSimpleLineMeshesAvailable;
// declared property getter: -(BOOL)isHiDPI;
-(void)dealloc;
-(id)init;
@end
