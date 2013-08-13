/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "iTunesStoreUI-Structs.h"
#import "UIScrollViewDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSObject, UIScrollView;

@interface SUScrollViewScroller : XXUnknownSuperclass <UIScrollViewDelegate> {
@private
	NSObject<UIScrollViewDelegate>* _originalDelegate;
	NSMutableArray* _scrollRequests;
	UIScrollView* _scrollView;
}
@property(readonly, assign, nonatomic) UIScrollView* scrollView;	// @synthesize=_scrollView
// declared property getter: -(id)scrollView;
-(void)_performScrollRectRequest:(id)request;
-(void)_performNextScrollRequest;
-(void)_performContentOffsetRequest:(id)request;
-(void)_finishActiveScrollRequest;
-(void)_addScrollRequest:(id)request;
-(void)scrollViewDidEndScrollingAnimation:(id)scrollView;
-(id)methodSignatureForSelector:(SEL)selector;
-(void)forwardInvocation:(id)invocation;
-(void)setContentOffset:(CGPoint)offset animated:(BOOL)animated completionBlock:(id)block;
-(void)scrollFrameToVisible:(CGRect)visible animated:(BOOL)animated completionBlock:(id)block;
-(void)detachFromScrollView;
-(void)attachToScrollView:(id)scrollView;
-(void)dealloc;
@end
