/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface PTPOperationRequestPacket : XXUnknownSuperclass {
	int _numParameters;
	unsigned long _dataPhaseInfo;
	unsigned short _operationCode;
	unsigned long _transactionID;
	unsigned long _parameters[5];
}
@property(assign) unsigned long parameter5;	// converted property
@property(assign) unsigned long parameter4;	// converted property
@property(assign) unsigned long parameter3;	// converted property
@property(assign) unsigned long parameter2;	// converted property
@property(assign) unsigned long parameter1;	// converted property
@property(assign) unsigned long dataPhaseInfo;	// converted property
@property(assign) unsigned long transactionID;	// converted property
@property(assign) unsigned short operationCode;	// converted property
@property(readonly, assign) int numParameters;	// converted property
// converted property setter: -(void)setParameter5:(unsigned long)a5;
// converted property getter: -(unsigned long)parameter5;
// converted property setter: -(void)setParameter4:(unsigned long)a4;
// converted property getter: -(unsigned long)parameter4;
// converted property setter: -(void)setParameter3:(unsigned long)a3;
// converted property getter: -(unsigned long)parameter3;
// converted property setter: -(void)setParameter2:(unsigned long)a2;
// converted property getter: -(unsigned long)parameter2;
// converted property setter: -(void)setParameter1:(unsigned long)a1;
// converted property getter: -(unsigned long)parameter1;
-(void)setPparameter:(unsigned long)pparameter atIndex:(unsigned long)index;
-(unsigned long)parameterAtIndex:(unsigned long)index;
// converted property getter: -(int)numParameters;
// converted property setter: -(void)setDataPhaseInfo:(unsigned long)info;
// converted property getter: -(unsigned long)dataPhaseInfo;
// converted property setter: -(void)setTransactionID:(unsigned long)anId;
// converted property getter: -(unsigned long)transactionID;
// converted property setter: -(void)setOperationCode:(unsigned short)code;
// converted property getter: -(unsigned short)operationCode;
-(id)description;
-(id)contentForUSBUsingBuffer:(void*)usbusingBuffer capacity:(unsigned long)capacity;
-(id)contentForUSB;
-(id)contentForTCP;
-(id)initWithUSBBuffer:(void*)usbbuffer;
-(id)initWithTCPBuffer:(void*)tcpbuffer;
-(id)initWithOperationCode:(unsigned short)operationCode transactionID:(unsigned long)anId dataPhaseInfo:(unsigned long)info parameter1:(unsigned long)a1 parameter2:(unsigned long)a2 parameter3:(unsigned long)a3 parameter4:(unsigned long)a4 parameter5:(unsigned long)a5;
-(id)initWithOperationCode:(unsigned short)operationCode transactionID:(unsigned long)anId dataPhaseInfo:(unsigned long)info parameter1:(unsigned long)a1 parameter2:(unsigned long)a2 parameter3:(unsigned long)a3 parameter4:(unsigned long)a4;
-(id)initWithOperationCode:(unsigned short)operationCode transactionID:(unsigned long)anId dataPhaseInfo:(unsigned long)info parameter1:(unsigned long)a1 parameter2:(unsigned long)a2 parameter3:(unsigned long)a3;
-(id)initWithOperationCode:(unsigned short)operationCode transactionID:(unsigned long)anId dataPhaseInfo:(unsigned long)info parameter1:(unsigned long)a1 parameter2:(unsigned long)a2;
-(id)initWithOperationCode:(unsigned short)operationCode transactionID:(unsigned long)anId dataPhaseInfo:(unsigned long)info parameter1:(unsigned long)a1;
-(id)initWithOperationCode:(unsigned short)operationCode transactionID:(unsigned long)anId dataPhaseInfo:(unsigned long)info;
-(id)initWithOperationCode:(unsigned short)operationCode transactionID:(unsigned long)anId dataPhaseInfo:(unsigned long)info numParameters:(unsigned long)parameters parameters:(unsigned*)parameters5;
@end

