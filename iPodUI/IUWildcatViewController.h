/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UINavigationController, IUiPodViewController, UIViewController, UIView, IUiPodSegmentedViewController;

@interface IUWildcatViewController : XXUnknownSuperclass {
}
@property(readonly, assign, nonatomic) UIView* backstopView;
@property(readonly, assign, nonatomic) UIViewController* directChildViewController;
@property(readonly, assign, nonatomic) IUiPodViewController* topViewController;
@property(readonly, assign, nonatomic) UINavigationController* topNavigationController;
@property(readonly, assign, nonatomic) IUiPodSegmentedViewController* browserSegmentedViewController;
-(BOOL)_canReloadView;
// declared property getter: -(id)directChildViewController;
// declared property getter: -(id)backstopView;
// declared property getter: -(id)topViewController;
// declared property getter: -(id)topNavigationController;
// declared property getter: -(id)browserSegmentedViewController;
-(id)browserViewController;
-(id)init;
@end
