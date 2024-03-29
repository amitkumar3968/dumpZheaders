/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "ISOperationDelegate.h"

@class NSMutableArray, NSLock;

@interface SUScriptOperationDelegate : XXUnknownSuperclass <ISOperationDelegate> {
	NSMutableArray* _operations;
	NSLock* _lock;
}
-(void)_removeOperation:(id)operation;
-(void)operationFinished:(id)finished;
-(void)operation:(id)operation failedWithError:(id)error;
-(void)enqueueOperation:(id)operation;
-(void)cancelAllOperations;
-(void)dealloc;
@end

