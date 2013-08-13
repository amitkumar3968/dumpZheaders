/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import "PhotoLibrary-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class CAFilter;

@interface PLTableView : XXUnknownSuperclass {
	CAFilter* _blurFilter;
	unsigned _shouldBlur : 1;
@private
	id scrollingEndedCompletion;
}
@property(copy, nonatomic) id scrollingEndedCompletion;	// @synthesize
@property(assign, nonatomic, getter=isBlurFilterEnabled) BOOL blurFilterEnabled;
@property(readonly, assign, nonatomic, getter=isScrolling) BOOL scrolling;
// declared property setter: -(void)setScrollingEndedCompletion:(id)completion;
// declared property getter: -(id)scrollingEndedCompletion;
-(void)_removeBlurFilter;
-(void)_setBlurFilterEnabled:(BOOL)enabled;
-(void)animationDidStop:(id)animation finished:(BOOL)finished;
-(void)setContentOffset:(CGPoint)offset animated:(BOOL)animated;
// declared property getter: -(BOOL)isScrolling;
// declared property getter: -(BOOL)isBlurFilterEnabled;
// declared property setter: -(void)setBlurFilterEnabled:(BOOL)enabled;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame style:(int)style;
@end
