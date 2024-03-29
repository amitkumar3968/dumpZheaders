/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "iTunesStoreUI-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, SUScriptObject, NSLock;

@interface SUScriptObjectInvocationBatch : XXUnknownSuperclass {
	NSMutableArray* _invocationQueue;
	NSLock* _lock;
	CFDictionaryRef _proxies;
	SUScriptObject* _rootObject;
}
@property(assign) SUScriptObject* rootObject;
// declared property setter: -(void)setRootObject:(id)object;
// declared property getter: -(id)rootObject;
-(void)enqueueInvocation:(id)invocation;
-(void)_delayedDequeueInvocations;
-(void)dequeueInvocations;
-(id)copyQueuedInvocationsForObject:(id)object;
-(void)checkOutBatchTarget:(id)target;
-(id)batchProxyForObject:(id)object;
-(void)dealloc;
-(id)init;
@end

