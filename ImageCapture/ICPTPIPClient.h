/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import "ImageCapture-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface ICPTPIPClient : XXUnknownSuperclass {
@private
	id _clientProperties;
}
@property(assign) int serverFD;	// converted property
@property(assign) int remoteAddress;	// converted property
@property(assign) CFMessagePortRef remotePort;	// converted property
@property(assign) CFFileDescriptorRef fdref;	// converted property
@property(assign) BOOL registered;	// converted property
@property(assign) int pid;	// converted property
// converted property setter: -(void)setServerFD:(int)fd;
// converted property getter: -(int)serverFD;
// converted property setter: -(void)setRemoteAddress:(int)address;
// converted property getter: -(int)remoteAddress;
// converted property setter: -(void)setRemotePort:(CFMessagePortRef)port;
// converted property getter: -(CFMessagePortRef)remotePort;
// converted property setter: -(void)setFdref:(CFFileDescriptorRef)fdref;
// converted property getter: -(CFFileDescriptorRef)fdref;
// converted property setter: -(void)setRegistered:(BOOL)registered;
// converted property getter: -(BOOL)registered;
// converted property setter: -(void)setPid:(int)pid;
// converted property getter: -(int)pid;
-(id)init;
@end
