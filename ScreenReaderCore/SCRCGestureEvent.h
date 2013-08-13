/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import "ScreenReaderCore-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class SCRCGestureFinger;

@interface SCRCGestureEvent : XXUnknownSuperclass {
	unsigned _deviceIdentifier;
	SCRCGestureFinger* _finger[5];
	unsigned _fingerCount;
	double _time;
	CGPoint _averageLocation;
}
@property(readonly, assign) unsigned deviceIdentifier;	// converted property
@property(readonly, assign) unsigned fingerCount;	// converted property
@property(readonly, assign) double time;	// converted property
@property(readonly, assign) CGPoint averageLocation;	// converted property
-(CGPoint)magneticLocation;
-(BOOL)isCancelEvent;
-(CGPoint)balancedLocation;
// converted property getter: -(CGPoint)averageLocation;
-(CGRect)fingerFrame;
-(id)fingers;
-(id)fingerWithoutIdentifier:(unsigned)identifier;
-(id)fingerWithIdentifier:(unsigned)identifier;
-(id)fingerAtIndex:(unsigned)index;
// converted property getter: -(unsigned)fingerCount;
-(void)removeFingerWithIdentifier:(unsigned)identifier;
-(void)addFingerWithIdentifier:(unsigned)identifier location:(CGPoint)location;
// converted property getter: -(double)time;
// converted property getter: -(unsigned)deviceIdentifier;
-(id)description;
-(void)dealloc;
-(id)initWithDeviceIdentifier:(unsigned)deviceIdentifier;
@end
