/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import "VectorKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSObject, CADisplayLink;
@protocol OS_dispatch_source;

@interface VKMainLoop : XXUnknownSuperclass {
	CADisplayLink* _displayLink;
	NSMutableArray* _animations[2];
	NSMutableArray* _canvasList;
	BOOL _applicationInBackground;
	CFRunLoopRef _displayLinkRunLoop;
	NSObject<OS_dispatch_source>* _memoryNotificationEventSource;
	int _rate;
	BOOL _isDebugRateForced;
	int _debugForcedRate;
	int _backgroundableCanvasCount;
}
@property(assign, nonatomic) int rate;	// @synthesize=_rate
@property(assign, nonatomic) int trueRate;
+(id)sharedInstance;
// declared property getter: -(int)rate;
-(void)_receivedMemoryNotification;
-(void)performBlock:(id)block;
-(void)removeBackgroundableCanvas;
-(void)addBackgroundableCanvas;
-(void)removeCanvas:(id)canvas;
-(void)addCanvas:(id)canvas;
-(double)resumeAnimation:(id)animation;
-(double)pauseAnimation:(id)animation;
-(void)removeAnimation:(id)animation;
-(void)addAnimation:(id)animation;
-(void)displayTimerFired:(id)fired;
-(void)updateLinkState;
-(void)didEnterBackground;
-(void)willEnterForeground;
// declared property getter: -(int)trueRate;
-(void)forceTrueRate:(int)rate;
// declared property setter: -(void)setTrueRate:(int)rate;
// declared property setter: -(void)setRate:(int)rate;
-(id)detailedDescription;
-(void)dealloc;
-(id)init;
@end

