/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Altitude.framework/Altitude
 */

#import "Altitude-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface PipelineJPEGDecoder : XXUnknownSuperclass {
@private
	XXStruct_YsZdjD pool420;
	XXStruct_YsZdjD poolJPEG;
	CGSize imageSize;
	unsigned requestedImageCount;
	int current420SurfaceCount;
	unsigned maxJPEGSize;
}
@property(assign) unsigned maxJPEGSize;	// @synthesize
+(id)_hardwareSemaphoreWaitQueue;
+(id)_hardwareSemaphore;
+(IOSurfaceAcceleratorRef)_getPooledSurfaceAccelerator;
+(void)_poolSurfaceAccelerator:(IOSurfaceAcceleratorRef)accelerator;
+(IOSurfaceAcceleratorRef)_createAccelerator;
+(XXStruct_YsZdjD*)_transferSessionPool;
// declared property setter: -(void)setMaxJPEGSize:(unsigned)size;
// declared property getter: -(unsigned)maxJPEGSize;
-(void)_receivedMemoryWarning:(id)warning;
-(void)_decodeJPEG:(id)jpeg withInputSurface:(IOSurfaceRef)inputSurface toIOSurface:(IOSurfaceRef)iosurface;
-(void)_poolJPEGSurface:(IOSurfaceRef)surface;
-(IOSurfaceRef)_getPooledJPEGSurfaceOfSize:(unsigned)size;
-(void)_pool420Surface:(IOSurfaceRef)surface;
-(IOSurfaceRef)_getPooled420Surface;
-(BOOL)_removeJPEGSurface;
-(IOSurfaceRef)_createJPEGSurface;
-(BOOL)_remove420Surface;
-(IOSurfaceRef)_create420Surface;
-(void)dealloc;
-(void)decodeSurfaceFromJPEGPath:(id)jpegpath completionQueue:(id)queue completionBlock:(id)block;
-(void)decodeSurfaceFromJPEGData:(id)jpegdata completionQueue:(id)queue completionBlock:(id)block;
-(void)returnToPool:(IOSurfaceRef)pool;
-(IOSurfaceRef)newSurfaceFromJPEGData:(id)jpegdata;
-(id)initWithSize:(CGSize)size cachedCount:(int)count;
@end

