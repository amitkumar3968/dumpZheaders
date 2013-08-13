/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoardUI-Structs.h"
#import "SBUIBannerItemView.h"

@class UIView;

@interface SBUIRoundedBannerItemView : XXUnknownSuperclass <SBUIBannerItemView> {
	UIView* _backgroundShadowView;
	UIView* _contentContainerView;
	UIView* _contentView;
	UIView* _underlayView;
}
@property(readonly, retain) UIView* contentView;	// converted property
-(void)drawStretchableBackground:(CGContextRef)background;
// converted property getter: -(id)contentView;
-(id)bannerItem;
-(void)layoutSubviews;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end

