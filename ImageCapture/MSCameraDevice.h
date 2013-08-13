/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import "ICCameraDevice.h"


@interface MSCameraDevice : ICCameraDevice {
@private
	void* _msCameraProperties;
}
-(BOOL)eject;
-(void)enumerateContent;
-(unsigned)itemsInFolder:(char*)folder;
-(void)finalize;
-(void)dealloc;
-(id)initWithVolumePath:(id)volumePath mediaPaths:(id)paths;
@end
