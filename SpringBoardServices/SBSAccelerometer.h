/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

#import "BKSAccelerometerDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class BKSAccelerometer;
@protocol SBSAccelerometerDelegate;

@interface SBSAccelerometer : XXUnknownSuperclass <BKSAccelerometerDelegate> {
	id<SBSAccelerometerDelegate> _delegate;
@private
	BKSAccelerometer* _bksMirror;
}
@property(assign, nonatomic) id<SBSAccelerometerDelegate> delegate;
@property(assign, nonatomic) BOOL orientationEventsEnabled;
@property(assign, nonatomic) float zThreshold;
@property(assign, nonatomic) float yThreshold;
@property(assign, nonatomic) float xThreshold;
@property(assign, nonatomic) double updateInterval;
@property(assign, nonatomic) BOOL accelerometerEventsEnabled;
-(void)accelerometer:(id)accelerometer didChangeDeviceOrientation:(int)orientation;
-(void)accelerometer:(id)accelerometer didAccelerateWithTimeStamp:(double)timeStamp x:(float)x y:(float)y z:(float)z eventType:(int)type;
-(int)currentDeviceOrientation;
// declared property getter: -(BOOL)orientationEventsEnabled;
// declared property setter: -(void)setOrientationEventsEnabled:(BOOL)enabled;
// declared property setter: -(void)setZThreshold:(float)threshold;
// declared property getter: -(float)zThreshold;
// declared property setter: -(void)setYThreshold:(float)threshold;
// declared property getter: -(float)yThreshold;
// declared property setter: -(void)setXThreshold:(float)threshold;
// declared property getter: -(float)xThreshold;
// declared property setter: -(void)setUpdateInterval:(double)interval;
// declared property getter: -(double)updateInterval;
// declared property setter: -(void)setAccelerometerEventsEnabled:(BOOL)enabled;
// declared property getter: -(BOOL)accelerometerEventsEnabled;
-(void)dealloc;
-(id)init;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property getter: -(id)delegate;
@end

