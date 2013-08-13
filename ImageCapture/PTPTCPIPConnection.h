/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import "ImageCapture-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSTimer, PTPTCPIPTransport, NSMutableData;

@interface PTPTCPIPConnection : XXUnknownSuperclass {
	PTPTCPIPTransport* _transport;
	NSTimer* _inactivityTimer;
	NSTimer* _receiveTimer;
	NSTimer* _transmitTimer;
	CFReadStreamRef _inStream;
	CFWriteStreamRef _outStream;
	dispatch_semaphore_s* _receiveBufferSemaphore;
	NSMutableData* _recieveBuffer;
	unsigned _bytesReceived;
	dispatch_semaphore_s* _transmitBufferSemaphore;
	NSMutableData* _transmitBuffer;
	unsigned _bytesSent;
}
-(void)inactivityTimerCallBack:(id)back;
-(void)handleErrorOccurred:(XXStruct_K5nmsA)occurred;
-(void)handleEndEncountered;
-(void)handleCanAcceptBytes;
-(void)handleHasBytesAvailable;
-(BOOL)writeData:(id)data;
-(void)close;
-(BOOL)open;
-(void)dealloc;
-(id)initWithSocketToHost:(id)host port:(unsigned long)port transport:(id)transport;
-(id)initWithNativeSocket:(int)nativeSocket transport:(id)transport;
@end

