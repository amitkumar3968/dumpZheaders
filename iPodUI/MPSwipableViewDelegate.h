/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import "NSObject.h"
#import "iPodUI-Structs.h"


@protocol MPSwipableViewDelegate <NSObject>
@optional
-(void)swipableViewHadActivity:(id)activity;
-(void)swipableView:(id)view pinchedToScale:(float)scale withVelocity:(float)velocity;
-(void)swipableView:(id)view tappedWithCount:(unsigned)count;
-(void)swipableView:(id)view tappedWithCount:(unsigned)count atLocation:(CGPoint)location;
-(void)swipableView:(id)view swipedInDirection:(int)direction;
-(id)swipableView:(id)view overrideHitTest:(CGPoint)test withEvent:(id)event;
-(void)swipableView:(id)view didMoveToSuperview:(id)superview;
-(void)swipableView:(id)view willMoveToSuperview:(id)superview;
@end

