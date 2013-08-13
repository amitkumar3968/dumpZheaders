/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/XPCObjects.framework/XPCObjects
 */

#import "NSCoding.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSObject;
@protocol OS_xpc_object;

@interface XPCEndpoint : XXUnknownSuperclass <NSCoding> {
@private
	NSObject<OS_xpc_object>* _endpoint;
}
@property(assign, nonatomic) NSObject<OS_xpc_object>* endpoint;	// @synthesize=_endpoint
// declared property setter: -(void)setEndpoint:(id)endpoint;
// declared property getter: -(id)endpoint;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(id)createConnection;
-(void)dealloc;
-(id)initWithConnection:(id)connection;
-(id)_initWithEndpoint:(id)endpoint;
-(id)init;
@end
