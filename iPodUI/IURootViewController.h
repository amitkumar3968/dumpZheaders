/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import "iPodUI-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIViewController;

@interface IURootViewController : XXUnknownSuperclass {
	UIViewController* _wrappedViewController;
}
@property(retain, nonatomic) UIViewController* wrappedViewController;	// @synthesize=_wrappedViewController
// declared property setter: -(void)setWrappedViewController:(id)controller;
// declared property getter: -(id)wrappedViewController;
-(void)_interfaceOrientationMaskDidChangeNotification:(id)_interfaceOrientationMask;
-(void)window:(id)window willAnimateFromContentFrame:(CGRect)contentFrame toContentFrame:(CGRect)contentFrame3;
-(unsigned)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)dealloc;
-(id)init;
@end

