/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import "Celestial-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface FigIOHIDMotionDelegate : XXUnknownSuperclass {
@private
	opaque_pthread_mutex_t ringMutex;
	BOOL manageAccel;
	int accelRingIndex;
	float accelRingX[64];
	float accelRingY[64];
	float accelRingZ[64];
	double accelRingTime[64];
}
-(BOOL)managingAccel;
-(void)getVector:(float*)vector :(float*)arg2 :(float*)arg3 forTimeStamp:(double)timeStamp;
-(void)didUpdateAccelerationWithEventInfo:(XXStruct_N5B6hD*)eventInfo;
-(void)dealloc;
-(id)init;
-(id)initWithOptions:(BOOL)options enableRotation:(BOOL)rotation enableAttitude:(BOOL)attitude;
-(void)deferOnRunloop_stopEvents;
-(void)deferOnRunloop_initManagerUsingIOHID;
@end

