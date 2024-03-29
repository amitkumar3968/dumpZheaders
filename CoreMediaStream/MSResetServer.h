/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "MSResetServerProtocolDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class MSResetServerProtocol, MSMediaStreamDaemon, NSString;

@interface MSResetServer : XXUnknownSuperclass <MSResetServerProtocolDelegate> {
@private
	NSString* _personID;
	MSResetServerProtocol* _protocol;
	MSMediaStreamDaemon* _daemon;
	id _selfReference;
}
@property(assign, nonatomic) MSMediaStreamDaemon* daemon;	// @synthesize=_daemon
@property(readonly, assign, nonatomic) NSString* personID;	// @synthesize=_personID
+(id)resetServerObjectWithPersonID:(id)personID baseURL:(id)url;
// declared property setter: -(void)setDaemon:(id)daemon;
// declared property getter: -(id)daemon;
// declared property getter: -(id)personID;
-(void).cxx_destruct;
-(void)resetServerProtocol:(id)protocol didReceiveAuthenticationError:(id)error;
-(void)resetServerProtocol:(id)protocol didFinishWithError:(id)error;
-(void)resetServer;
-(id)initWithPersonID:(id)personID baseURL:(id)url;
@end

