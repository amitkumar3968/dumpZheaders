/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import <Foundation/NSMutableString.h>
#import "AppSupport-Structs.h"

@class NSOperationQueue, NSLock, NSMutableDictionary, CPDistributedMessagingCallout, NSString;

@interface CPDistributedMessagingCenter : NSMutableString {
	NSString* _centerName;
	NSLock* _lock;
	unsigned _sendPort;
	NSOperationQueue* _asyncQueue;
	CFRunLoopSourceRef _serverSource;
	NSString* _requiredEntitlement;
	NSMutableDictionary* _callouts;
	unsigned _parkedServerPort;
	CPDistributedMessagingCallout* _currentCallout;
	unsigned _replyPort;
	BOOL _portPassing;
	BOOL _delayedReply;
}
+(id)centerNamed:(id)named;
-(id)_requiredEntitlement;
-(BOOL)_isTaskEntitled:(XXStruct_kUSYWB*)entitled;
-(void)_sendReplyMessage:(id)message portPassing:(BOOL)passing onMachPort:(unsigned)port;
-(void)_dispatchMessageNamed:(id)named userInfo:(id)info reply:(id*)reply auditToken:(XXStruct_kUSYWB*)token;
-(BOOL)doesServerExist;
-(void)unregisterForMessageName:(id)messageName;
-(void)sendDelayedReply:(id)reply dictionary:(id)dictionary;
-(id)delayReply;
-(void)registerForMessageName:(id)messageName target:(id)target selector:(SEL)selector;
-(void)stopServer;
-(void)runServerOnCurrentThreadProtectedByEntitlement:(id)entitlement;
-(void)runServerOnCurrentThread;
-(unsigned)_serverPort;
-(BOOL)_sendMessage:(id)message userInfoData:(id)data oolKey:(id)key oolData:(id)data4 makeServer:(BOOL)server receiveReply:(id*)reply nonBlocking:(BOOL)blocking error:(id*)error;
-(BOOL)_sendMessage:(id)message userInfo:(id)info receiveReply:(id*)reply error:(id*)error toTarget:(id)target selector:(SEL)selector context:(void*)context nonBlocking:(BOOL)blocking;
-(BOOL)_sendMessage:(id)message userInfo:(id)info receiveReply:(id*)reply error:(id*)error toTarget:(id)target selector:(SEL)selector context:(void*)context;
-(void)sendMessageAndReceiveReplyName:(id)name userInfo:(id)info toTarget:(id)target selector:(SEL)selector context:(void*)context;
-(id)sendMessageAndReceiveReplyName:(id)name userInfo:(id)info error:(id*)error;
-(id)sendMessageAndReceiveReplyName:(id)name userInfo:(id)info;
-(BOOL)sendNonBlockingMessageName:(id)name userInfo:(id)info;
-(BOOL)sendMessageName:(id)name userInfo:(id)info;
-(void)_setSendPort:(unsigned)port;
-(unsigned)_sendPort;
-(void)_setupInvalidationSource;
-(id)name;
-(void)dealloc;
-(id)_initClientWithPort:(unsigned)port;
-(id)_initAnonymousServer;
-(id)_initWithServerName:(id)serverName;
@end

