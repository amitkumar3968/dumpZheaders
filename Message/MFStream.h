/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import "NSStreamDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSError, NSObject, NSMutableDictionary, NSInputStream, NSOutputStream;
@protocol OS_dispatch_queue;

@interface MFStream : XXUnknownSuperclass <NSStreamDelegate> {
	NSInputStream* _rStream;
	NSOutputStream* _wStream;
	NSMutableDictionary* _properties;
	id _callback;
	NSObject<OS_dispatch_queue>* _location;
	unsigned long _capacity;
	unsigned long _length;
	char* _buffer;
	NSError* _error;
	BOOL _canRead;
	BOOL _canWrite;
	BOOL _sentCanRead;
}
@property(readonly, assign, nonatomic) BOOL isOpen;
@property(readonly, assign, nonatomic) NSError* streamError;	// @synthesize=_error
+(id)_networkDispatchQueue;
+(void)setNetworkThread:(id)thread;
+(id)networkThread;
// declared property getter: -(id)streamError;
-(void)stream:(id)stream handleEvent:(unsigned)event;
-(void)_readBytesFromStream;
-(void)close;
-(int)write:(const char*)write maxLength:(unsigned)length;
-(int)read:(char*)read maxLength:(unsigned)length;
-(void)openToHostName:(id)hostName port:(int)port;
-(BOOL)setProperty:(id)property forKey:(id)key;
-(id)propertyForKey:(id)key;
-(id)_copyPropertyForKey:(id)key;
// declared property getter: -(BOOL)isOpen;
-(void)dealloc;
-(id)initCallBack:(id)back onDispatchQueue:(id)queue;
-(id)init;
@end

