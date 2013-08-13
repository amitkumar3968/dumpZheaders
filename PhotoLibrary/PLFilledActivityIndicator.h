/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import "PhotoLibrary-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIActivityIndicatorView;

@interface PLFilledActivityIndicator : XXUnknownSuperclass {
	UIActivityIndicatorView* _indicatorView;
}
-(BOOL)isAnimating;
-(void)stopAnimating;
-(void)startAnimatingAfterDelay:(double)delay;
-(void)drawRect:(CGRect)rect;
-(void)didMoveToWindow;
-(BOOL)isOpaque;
-(void)dealloc;
-(id)initWithLocation:(CGPoint)location;
@end

