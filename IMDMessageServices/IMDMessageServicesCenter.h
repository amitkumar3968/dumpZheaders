/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMDMessageServices.framework/IMDMessageServices
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSObject;
@protocol OS_xpc_object;

@interface IMDMessageServicesCenter : XXUnknownSuperclass {
	NSObject<OS_xpc_object>* _connection;
}
+(id)sharedInstance;
-(void)requestRoutingForMessageGuid:(id)messageGuid inChat:(id)chat error:(unsigned)error completionBlock:(id)block;
-(void)requestRoutingWithCompletion:(id)completion;
-(void)_requestRoutingWithGUID:(id)guid chatGUID:(id)guid2 error:(unsigned)error handler:(id)handler;
-(BOOL)_connect;
-(BOOL)_disconnect;
-(void)_disconnected;
-(void)dealloc;
-(id)init;
@end

