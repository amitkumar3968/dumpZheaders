/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import "VideoProcessing-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class CMMotionManager, NSOperationQueue;

@interface VPCoreMotionDelegate : XXUnknownSuperclass {
@private
	CMMotionManager* motionManager;
	NSOperationQueue* operationQueue;
	XXStruct_N5B6hD quaternionBuffer[64];
	double timestampBuffer[64];
	int quaternionBufferIndex;
	opaque_pthread_mutex_t ringMutex;
	XXStruct_N5B6hD lastReadQuaternion;
	VPCoreMotionDelegate* weakSelf;
	FILE* gyroFile;
}
-(XXStruct_N5B6hD)getQuaternionByTimestamp:(double)timestamp;
-(void)stop;
-(void)start;
-(void)processGyroData:(id)data withError:(id)error;
-(void)dealloc;
-(id)init;
@end
