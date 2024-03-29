/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/XPCKit.framework/XPCKit
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "XPCServiceListenerDelegate.h"

@class NSString, XPCServiceListener;
@protocol XPCNSServiceListenerDelegate;

@interface XPCNSServiceListener : XXUnknownSuperclass <XPCServiceListenerDelegate> {
@private
	XPCServiceListener* _serviceListener;
	id<XPCNSServiceListenerDelegate> _delegate;
}
@property(readonly, assign, nonatomic) id<XPCNSServiceListenerDelegate> delegate;	// @synthesize=_delegate
@property(readonly, assign, nonatomic) NSString* serviceName;
// declared property getter: -(id)delegate;
-(void).cxx_destruct;
-(void)XPCServiceListener:(id)listener didReceiveNewConnection:(id)connection;
-(BOOL)XPCServiceListener:(id)listener shouldAcceptNewConnection:(id)connection;
// declared property getter: -(id)serviceName;
-(void)shutDownCompletionBlock:(id)block;
-(void)start;
-(id)initWithServiceName:(id)serviceName queue:(id)queue delegate:(id)delegate;
@end

