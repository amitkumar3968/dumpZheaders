/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import "ImageCapture-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface ICPTPIPBonjourService : XXUnknownSuperclass {
	id _bonjourServiceProperties;
}
@property(assign) id delegate;	// converted property
-(void)disconnectClient:(id)client;
-(void)unlockDeviceForClient:(id)client;
-(void)handleNetServiceError:(XXStruct_K5nmsA*)error;
-(void)clientTerminated:(id)terminated;
-(int)numClients;
-(void)removeClient:(id)client;
-(void)addClient:(id)client;
-(int)destroyPTPDIPInstance:(id)instance;
-(int)messagePTPDIPInstance:(id)instance withSocket:(int)socket;
-(id)clientForAddress:(CFDataRef)address;
-(id)clientForPID:(unsigned long)pid;
-(int)createPTPDIPInstanceWithAddress:(CFDataRef)address fileDescriptor:(int)descriptor;
-(void)releaseSocket;
-(BOOL)createSocket;
-(void)dispatchConnectionFromSocket:(int)socket withAddress:(CFDataRef)address;
-(void)releaseNetService;
-(CFNetServiceRef)publishedService;
-(BOOL)createAndPublishNetService;
-(BOOL)startService;
-(void)dealloc;
// converted property setter: -(void)setDelegate:(id)delegate;
// converted property getter: -(id)delegate;
-(id)initWithHostPort:(unsigned long)hostPort hostName:(id)name hostGUID:(id)guid bonjourServiceType:(id)type bonjourTXTRecords:(id)records;
@end

