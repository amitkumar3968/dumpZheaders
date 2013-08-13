/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import "NSObject.h"


@protocol UITabBarControllerDelegate <NSObject>
@optional
-(void)tabBarController:(id)controller didEndCustomizingViewControllers:(id)controllers changed:(BOOL)changed;
-(void)tabBarController:(id)controller willEndCustomizingViewControllers:(id)controllers changed:(BOOL)changed;
-(void)tabBarController:(id)controller willBeginCustomizingViewControllers:(id)controllers;
-(void)tabBarController:(id)controller didSelectViewController:(id)controller2;
-(BOOL)tabBarController:(id)controller shouldSelectViewController:(id)controller2;
@end

