/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSThread, NSMutableSet;

__attribute__((visibility("hidden")))
@interface IMExtendedOperation : XXUnknownSuperclass {
	NSThread* _operationThread;
	NSString* _operationName;
	unsigned _operationState;
	double _operationTimeout;
	NSMutableSet* _childOperations;
}
@property(readonly, assign, nonatomic) unsigned state;
@property(assign, nonatomic) double timeout;
@property(retain, nonatomic) NSString* name;
+(id)runLoopModes;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)isConcurrent;
// declared property getter: -(unsigned)state;
-(void)cancel;
-(void)fail;
-(void)_timeout;
-(void)_stopWithState:(unsigned)state;
// declared property getter: -(double)timeout;
// declared property setter: -(void)setTimeout:(double)timeout;
// declared property getter: -(id)name;
// declared property setter: -(void)setName:(id)name;
-(void)didFinish;
-(void)createChildOperations;
-(void)addChildOperation:(id)operation;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
-(void)_threadedMain;
-(void)start;
-(void)_startThread;
-(unsigned)_minChildOperationState;
-(unsigned)_maxChildOperationState;
-(void)_setState:(unsigned)state;
-(void)dealloc;
@end
