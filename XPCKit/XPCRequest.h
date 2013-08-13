/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/XPCKit.framework/XPCKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSObject;
@protocol OS_xpc_object;

@interface XPCRequest : XXUnknownSuperclass {
@private
	id _handler;
	unsigned long _sequence;
	NSObject<OS_xpc_object>* _message;
	NSObject<OS_xpc_object>* _reply;
}
@property(readonly, assign, nonatomic) NSObject<OS_xpc_object>* reply;	// @synthesize=_reply
@property(readonly, assign, nonatomic) NSObject<OS_xpc_object>* message;	// @synthesize=_message
@property(readonly, assign, nonatomic) unsigned long sequence;	// @synthesize=_sequence
// declared property getter: -(id)reply;
// declared property getter: -(id)message;
// declared property getter: -(unsigned long)sequence;
-(void).cxx_destruct;
-(id)initWithMessage:(id)message sequence:(unsigned long)sequence connection:(id)connection;
-(void)sendReply;
@end

