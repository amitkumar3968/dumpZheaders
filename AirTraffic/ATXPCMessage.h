/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "AirTraffic-Structs.h"

@class NSString, ATXPCConnection, NSDictionary;

@interface ATXPCMessage : XXUnknownSuperclass {
@private
	ATXPCConnection* _receivingConnection;
	NSString* _name;
	NSDictionary* _info;
	xpc_connection_s* _x_reply_connection;
	void* _x_reply;
}
@property(copy, nonatomic) NSDictionary* info;	// @synthesize=_info
@property(readonly, assign, nonatomic) NSString* name;	// @synthesize=_name
// declared property setter: -(void)setInfo:(id)info;
// declared property getter: -(id)info;
// declared property getter: -(id)name;
-(BOOL)needsReply;
-(void)sendReply:(id)reply;
-(void*)_createXPCMessage;
-(id)_initWithXPCMessage:(void*)xpcmessage onConnection:(id)connection;
-(void)dealloc;
-(id)initWithName:(id)name;
@end

