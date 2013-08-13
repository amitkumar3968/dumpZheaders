/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import "PSViewController.h"
#import "Preferences-Structs.h"

@class PSEditingPane;

@interface PSDetailController : PSViewController {
	PSEditingPane* _pane;
}
@property(assign, nonatomic) PSEditingPane* pane;
-(void)statusBarWillAnimateByHeight:(float)statusBar;
-(void)viewWillDisappear:(BOOL)view;
-(void)suspend;
-(void)saveChanges;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
// declared property getter: -(id)pane;
// declared property setter: -(void)setPane:(id)pane;
-(void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(CGRect)paneFrame;
-(void)dealloc;
-(void)viewDidUnload;
-(void)loadView;
@end

