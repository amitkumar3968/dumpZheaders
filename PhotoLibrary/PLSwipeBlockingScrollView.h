/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import "PhotoLibrary-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface PLSwipeBlockingScrollView : XXUnknownSuperclass {
@private
	id gestureShouldBeginHandler;
}
@property(copy, nonatomic) id gestureShouldBeginHandler;	// @synthesize
// declared property setter: -(void)setGestureShouldBeginHandler:(id)beginHandler;
// declared property getter: -(id)gestureShouldBeginHandler;
-(double)_touchDelayForScrollDetection;
-(BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end

