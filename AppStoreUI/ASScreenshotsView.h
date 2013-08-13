/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppStoreUI.framework/AppStoreUI
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "AppStoreUI-Structs.h"
#import "UIScrollViewDelegate.h"

@class UIScrollView, UIImageView, ASPageControl, NSMutableArray;

@interface ASScreenshotsView : XXUnknownSuperclass <UIScrollViewDelegate> {
	int _currentIndex;
	NSMutableArray* _screenshotViews;
	ASPageControl* _bottomPageControl;
	UIImageView* _bottomShadowView;
	UIScrollView* _scrollView;
	UIImageView* _topShadowView;
}
@property(assign, nonatomic) int currentIndex;	// @synthesize=_currentIndex
@property(readonly, assign, nonatomic) int numberOfScreenshots;
+(CGSize)imageSize;
// declared property getter: -(int)currentIndex;
-(void)_setCurrentIndex:(int)index;
-(void)scrollViewWillBeginDragging:(id)scrollView;
-(void)scrollViewDidEndDecelerating:(id)scrollView;
-(void)pageControl:(id)control wasTappedInDirection:(int)direction;
-(void)setImage:(id)image forIndex:(int)index;
-(void)setCurrentIndex:(int)index animated:(BOOL)animated;
// declared property setter: -(void)setCurrentIndex:(int)index;
// declared property getter: -(int)numberOfScreenshots;
-(id)imageAtIndex:(int)index;
-(void)sizeToFit;
-(void)layoutSubviews;
-(id)hitTest:(CGPoint)test withEvent:(id)event;
-(void)dealloc;
-(id)initWithScreenshotCount:(int)screenshotCount;
-(id)init;
@end
