/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "iTunesStoreUI-Structs.h"

@class SUGridTableViewCell;

@interface SUGridTouchCaptureView : XXUnknownSuperclass {
	SUGridTableViewCell* _swipedCell;
}
@property(readonly, assign, nonatomic) SUGridTableViewCell* swipedCell;	// @synthesize=_swipedCell
// declared property getter: -(id)swipedCell;
-(id)hitTest:(CGPoint)test withEvent:(id)event;
-(void)dealloc;
-(id)initWithSwipedCell:(id)swipedCell;
@end

