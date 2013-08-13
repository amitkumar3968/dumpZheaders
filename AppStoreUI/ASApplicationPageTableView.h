/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppStoreUI.framework/AppStoreUI
 */

#import "AppStoreUI-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIView, UIEvent;

@interface ASApplicationPageTableView : XXUnknownSuperclass {
@private
	UIEvent* _resetEventAfterAnimation;
	BOOL _snapLocked;
	float _snapToBottomY;
	UIView* _screenshotsView;
}
@property(assign, nonatomic) float snapToBottomY;	// @synthesize=_snapToBottomY
@property(retain, nonatomic) UIView* screenshotsView;	// @synthesize=_screenshotsView
// declared property setter: -(void)setSnapToBottomY:(float)bottomY;
// declared property getter: -(float)snapToBottomY;
// declared property setter: -(void)setScreenshotsView:(id)view;
// declared property getter: -(id)screenshotsView;
-(void)_snapIntoPlaceIfNeededForEvent:(id)event;
-(void)_safeResetScrollingWithUIEvent:(id)uievent;
-(void)_reenableScrolling;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)setContentOffset:(CGPoint)offset;
-(void)screenshotsViewBeganScroll:(id)scroll;
-(void)resetAfterAnimation;
-(void)dealloc;
@end

