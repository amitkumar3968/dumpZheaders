/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class CNFRegController;

@interface CNFRegCallerIdDetailController : XXUnknownSuperclass {
	CNFRegController* _regController;
}
@property(readonly, assign, nonatomic) CNFRegController* regController;	// @synthesize=_regController
// declared property getter: -(id)regController;
-(void)_setupAccountHandlers;
-(void)reloadCallerIdValues;
-(void)viewDidDisappear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)dealloc;
-(id)initWithRegController:(id)regController;
@end

