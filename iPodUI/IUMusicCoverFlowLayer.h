/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import "iPodUI-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSInvocation;

@interface IUMusicCoverFlowLayer : XXUnknownSuperclass {
	NSInvocation* _endTransitionInvocation;
}
-(void)transition:(unsigned)transition withCoverFrame:(CGRect)coverFrame;
-(void)forceCurrentTransitionToEnd;
-(void)noteCurrentTransitionDidEnd;
-(void)_endTransition:(unsigned)transition withCoverFrame:(CGRect)coverFrame;
-(BOOL)isInAnimatedTransition;
-(void)dealloc;
@end

