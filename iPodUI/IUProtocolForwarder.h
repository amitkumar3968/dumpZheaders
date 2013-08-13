/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class Protocol;

@interface IUProtocolForwarder : XXUnknownSuperclass {
@private
	id _target;
	Protocol* _protocol;
}
@property(readonly, assign, nonatomic) id target;
-(void)forwardInvocation:(id)invocation;
-(BOOL)respondsToSelector:(SEL)selector;
-(BOOL)_respondsToProtocolSelector:(SEL)protocolSelector;
-(id)methodSignatureForSelector:(SEL)selector;
// declared property getter: -(id)target;
-(void)dealloc;
-(id)initWithTarget:(id)target protocol:(id)protocol;
@end
