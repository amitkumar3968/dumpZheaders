/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, XPCProxy;
@protocol CKSMSCompose;

@interface CKSMSComposeQueuingRemoteViewControllerProxy : XXUnknownSuperclass {
@private
	XPCProxy<CKSMSCompose>* _serviceViewControllerProxy;
	NSMutableArray* _queuedInvocations;
}
@property(retain, nonatomic) XPCProxy<CKSMSCompose>* serviceViewControllerProxy;	// @synthesize=_serviceViewControllerProxy
@property(retain, nonatomic) NSMutableArray* queuedInvocations;	// @synthesize=_queuedInvocations
// declared property setter: -(void)setQueuedInvocations:(id)invocations;
// declared property getter: -(id)queuedInvocations;
// declared property getter: -(id)serviceViewControllerProxy;
-(void)forwardInvocation:(id)invocation;
-(id)methodSignatureForSelector:(SEL)selector;
// declared property setter: -(void)setServiceViewControllerProxy:(id)proxy;
-(void)dealloc;
-(id)init;
@end
