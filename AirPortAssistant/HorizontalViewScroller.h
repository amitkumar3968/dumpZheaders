/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "UIScrollViewDelegate.h"
#import "AirPortAssistant-Structs.h"

@class UIView;

__attribute__((visibility("hidden")))
@interface HorizontalViewScroller : XXUnknownSuperclass <UIScrollViewDelegate> {
	UIView* view;
	unsigned index;
}
@property(assign, nonatomic) unsigned index;	// @synthesize
@property(retain, nonatomic) UIView* view;	// @synthesize
// declared property setter: -(void)setIndex:(unsigned)index;
// declared property getter: -(unsigned)index;
// declared property setter: -(void)setView:(id)view;
// declared property getter: -(id)view;
-(void)restoreCenterPoint:(CGPoint)point scale:(float)scale;
-(CGPoint)minimumContentOffset;
-(CGPoint)maximumContentOffset;
-(float)scaleToRestoreAfterRotation;
-(CGPoint)pointToCenterAfterRotation;
-(void)setMaxMinZoomScalesForCurrentBounds;
-(void)displayImage:(id)image;
-(void)displayView:(id)view;
-(id)viewForZoomingInScrollView:(id)scrollView;
-(void)layoutSubviews;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end

