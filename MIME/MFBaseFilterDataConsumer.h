/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "MFDataConsumer.h"

@class NSArray, NSMutableArray;

@interface MFBaseFilterDataConsumer : XXUnknownSuperclass <MFDataConsumer> {
	NSMutableArray* _consumers;
	BOOL _serialAppend;
}
@property(readonly, assign, nonatomic) NSArray* consumers;	// @synthesize=_consumers
@property(assign, nonatomic, getter=isSerialAppend) BOOL serialAppend;	// @synthesize=_serialAppend
+(id)filterWithConsumer:(id)consumer;
+(id)filterWithConsumers:(id)consumers;
// declared property getter: -(id)consumers;
// declared property setter: -(void)setSerialAppend:(BOOL)append;
// declared property getter: -(BOOL)isSerialAppend;
-(void)dealloc;
-(void)done;
-(int)appendData:(id)data;
-(id)initWithConsumer:(id)consumer;
-(id)initWithConsumers:(id)consumers;
@end
