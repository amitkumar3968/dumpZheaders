/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface PTPEventPacket : XXUnknownSuperclass {
	int _numParameters;
	unsigned short _eventCode;
	unsigned long _transactionID;
	unsigned long _parameters[3];
}
@property(assign) unsigned long parameter3;	// converted property
@property(assign) unsigned long parameter2;	// converted property
@property(assign) unsigned long parameter1;	// converted property
@property(assign) unsigned long transactionID;	// converted property
@property(assign) unsigned short eventCode;	// converted property
// converted property setter: -(void)setParameter3:(unsigned long)a3;
// converted property getter: -(unsigned long)parameter3;
// converted property setter: -(void)setParameter2:(unsigned long)a2;
// converted property getter: -(unsigned long)parameter2;
// converted property setter: -(void)setParameter1:(unsigned long)a1;
// converted property getter: -(unsigned long)parameter1;
// converted property setter: -(void)setTransactionID:(unsigned long)anId;
// converted property getter: -(unsigned long)transactionID;
// converted property setter: -(void)setEventCode:(unsigned short)code;
// converted property getter: -(unsigned short)eventCode;
-(id)description;
-(id)contentForUSBUsingBuffer:(void*)usbusingBuffer capacity:(unsigned long)capacity;
-(id)contentForUSB;
-(id)contentForTCP;
-(id)initWithUSBBuffer:(void*)usbbuffer;
-(id)initWithTCPBuffer:(void*)tcpbuffer;
-(id)initWithEventCode:(unsigned short)eventCode transactionID:(unsigned long)anId parameter1:(unsigned long)a1 parameter2:(unsigned long)a2 parameter3:(unsigned long)a3;
-(id)initWithEventCode:(unsigned short)eventCode transactionID:(unsigned long)anId parameter1:(unsigned long)a1 parameter2:(unsigned long)a2;
-(id)initWithEventCode:(unsigned short)eventCode transactionID:(unsigned long)anId parameter1:(unsigned long)a1;
-(id)initWithEventCode:(unsigned short)eventCode transactionID:(unsigned long)anId;
@end

