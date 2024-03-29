/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface PTPStartDataPacket : XXUnknownSuperclass {
	unsigned long _transactionID;
	unsigned long long _totalDataSize;
}
@property(assign) unsigned long long totalDataSize;	// converted property
@property(assign) unsigned long transactionID;	// converted property
// converted property setter: -(void)setTotalDataSize:(unsigned long long)size;
// converted property getter: -(unsigned long long)totalDataSize;
// converted property setter: -(void)setTransactionID:(unsigned long)anId;
// converted property getter: -(unsigned long)transactionID;
-(id)description;
-(id)contentForTCP;
-(id)initWithTCPBuffer:(void*)tcpbuffer;
-(id)initWithTransactionID:(unsigned long)transactionID totalDataSize:(unsigned long long)size;
@end

