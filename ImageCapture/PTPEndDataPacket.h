/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSData;

@interface PTPEndDataPacket : XXUnknownSuperclass {
	unsigned short _operationCode;
	unsigned long _transactionID;
	NSData* _data;
}
@property(retain) NSData* data;	// converted property
@property(assign) unsigned long transactionID;	// converted property
@property(assign) unsigned short operationCode;	// converted property
// converted property setter: -(void)setData:(id)data;
// converted property getter: -(id)data;
// converted property setter: -(void)setTransactionID:(unsigned long)anId;
// converted property getter: -(unsigned long)transactionID;
// converted property setter: -(void)setOperationCode:(unsigned short)code;
// converted property getter: -(unsigned short)operationCode;
-(id)description;
-(id)contentForUSBUsingBuffer:(void*)usbusingBuffer capacity:(unsigned long)capacity;
-(id)contentForUSB;
-(id)contentForTCP;
-(void)dealloc;
-(id)initWithUSBBuffer:(void*)usbbuffer;
-(id)initWithTCPBuffer:(void*)tcpbuffer;
-(id)initWithOperationCode:(unsigned short)operationCode transactionID:(unsigned long)anId andData:(id)data;
@end

