/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SBSAccelerometerDelegate.h"
#import "Celestial-Structs.h"

@class SBSAccelerometer;

@interface FigAccelerometerDelegate : XXUnknownSuperclass <SBSAccelerometerDelegate> {
@private
	SBSAccelerometer* sbsaccel;
	opaque_pthread_mutex_t ringMutex;
	int ringIndex;
	float ringX[64];
	float ringY[64];
	float ringZ[64];
	double ringTime[64];
}
-(void)getVector:(float*)vector :(float*)arg2 :(float*)arg3 forTimeStamp:(double)timeStamp;
-(void)accelerometer:(id)accelerometer didAccelerateWithTimeStamp:(double)timeStamp x:(float)x y:(float)y z:(float)z eventType:(int)type;
-(void)dealloc;
-(id)init;
-(void)deferOnRunloop_accelerometerEventsEnable;
@end

