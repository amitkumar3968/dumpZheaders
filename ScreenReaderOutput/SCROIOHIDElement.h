/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

#import "ScreenReaderOutput-Structs.h"
#import "SCROIOElement.h"
#import "SCROIOHIDElementProtocol.h"


@interface SCROIOHIDElement : SCROIOElement <SCROIOHIDElementProtocol> {
	IOHIDDeviceRef _hidDevice;
}
@property(readonly, assign) IOHIDDeviceRef hidDevice;	// converted property
-(int)transport;
// converted property getter: -(IOHIDDeviceRef)hidDevice;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(id)initWithIOObject:(unsigned)ioobject;
@end

