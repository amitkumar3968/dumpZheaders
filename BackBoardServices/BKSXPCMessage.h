/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSObject;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface BKSXPCMessage : XXUnknownSuperclass {
@private
	NSObject<OS_xpc_object>* _message;
	id _replyHandler;
	NSObject<OS_dispatch_queue>* _replyQueue;
}
+(id)message:(long long)message withPacker:(id)packer replyHandler:(id)handler replyQueue:(id)queue;
+(id)message:(long long)message withPacker:(id)packer;
+(void)sendMessage:(long long)message toConnection:(id)connection withMessagePacker:(id)messagePacker replyHandler:(id)handler replyQueue:(id)queue;
+(void)sendMessage:(long long)message toConnection:(id)connection withMessagePacker:(id)messagePacker;
-(void)sendToConnection:(id)connection;
-(void)dealloc;
-(id)initWithMessage:(long long)message packer:(id)packer replyHandler:(id)handler replyQueue:(id)queue;
@end

