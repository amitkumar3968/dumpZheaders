/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMDPersistence.framework/IMDPersistence
 */

#import <Foundation/NSAttributedString.h>
#import "IMDPersistence-Structs.h"

@class NSThread, NSRunLoop;

__attribute__((visibility("hidden")))
@interface _IMDPersistenceThreadObject : NSAttributedString {
	NSThread* _thread;
	NSRunLoop* _runLoop;
	CFRunLoopSourceRef _runLoopSource;
}
@property(readonly, retain) NSThread* thread;	// converted property
+(id)sharedInstance;
-(BOOL)isCurrentThreadDBThread;
-(void)performBlock:(id)block waitUntilDone:(BOOL)done;
-(void)performBlock:(id)block afterDelay:(double)delay;
-(void)performBlock:(id)block;
// converted property getter: -(id)thread;
-(id)init;
-(void)_threadedMain;
@end

