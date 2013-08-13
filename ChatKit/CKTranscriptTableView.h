/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import "ChatKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface CKTranscriptTableView : XXUnknownSuperclass {
	id _panGestureRecognizerBlock;
@private
	BOOL ignoresContentOffsetChanges;
}
@property(assign, nonatomic) BOOL ignoresContentOffsetChanges;	// @synthesize
@property(copy, nonatomic) id panGestureRecognizerBlock;	// @synthesize=_panGestureRecognizerBlock
// declared property setter: -(void)setIgnoresContentOffsetChanges:(BOOL)changes;
// declared property getter: -(BOOL)ignoresContentOffsetChanges;
// declared property setter: -(void)setPanGestureRecognizerBlock:(id)block;
// declared property getter: -(id)panGestureRecognizerBlock;
-(void)setContentOffset:(CGPoint)offset;
-(void)setEditing:(BOOL)editing animated:(BOOL)animated;
-(void)cancelPanGesture;
-(BOOL)isFastAnimationAvailableForContentOffset;
-(void)handlePan:(id)pan;
-(void)dealloc;
@end
