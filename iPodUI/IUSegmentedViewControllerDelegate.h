/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import "NSObject.h"


@protocol IUSegmentedViewControllerDelegate <NSObject>
@optional
-(void)segmentedViewControllerShouldPopToRootViewController:(id)segmentedViewController;
-(void)segmentedViewController:(id)controller didSelectViewController:(id)controller2;
-(void)segmentedViewController:(id)controller willSelectViewController:(id)controller2;
-(BOOL)segmentedViewController:(id)controller canSelectViewController:(id)controller2;
-(id)segmentedControlForSegmentedViewController:(id)segmentedViewController;
@end

