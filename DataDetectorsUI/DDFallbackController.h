/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UIWindow;

__attribute__((visibility("hidden")))
@interface DDFallbackController : XXUnknownSuperclass {
@private
	UIWindow* _baseWindow;
	UIWindow* _ourWindow;
	id _interactionDelegate;
	int _startOrientation;
}
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(void)dismissViewControllerAnimated:(BOOL)animated completion:(id)completion;
-(void)presentViewController:(id)controller animated:(BOOL)animated completion:(id)completion;
-(void)loadView;
-(void)dealloc;
-(id)initWithWindow:(id)window interactionDelegate:(id)delegate;
@end

