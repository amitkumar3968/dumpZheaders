/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class FTCConnectionHandler, NSObject;
@protocol OS_xpc_object;

@interface CKClientComposeServer : XXUnknownSuperclass {
@private
	NSObject<OS_xpc_object>* _connection;
	FTCConnectionHandler* _connectionHandler;
}
+(id)sharedInstance;
-(void)_finishSendingClientComposedMessageForMarkup:(id)markup subject:(id)subject handles:(id)handles attachments:(id)attachments guid:(id)guid forceService:(id)service forceSMS:(BOOL)sms;
-(void)_sendClientComposedMessageForMarkup:(id)markup subject:(id)subject recipients:(id)recipients attachments:(id)attachments guid:(id)guid forceSMS:(BOOL)sms;
-(id)_serviceForHandles:(id)handles;
-(void)_stopListeningForClientComposeNotifications;
-(void)_startListeningForClientComposeNotifications;
-(void)stop;
-(void)start;
-(void)dealloc;
-(id)init;
@end

