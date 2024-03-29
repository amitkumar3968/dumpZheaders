/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "SUMenuViewController.h"
#import "iTunesStoreUI-Structs.h"

@class SUNavigationMenu;

@interface SUNavigationMenuViewController : SUMenuViewController {
	SUNavigationMenu* _navigationMenu;
}
@property(readonly, assign, nonatomic) SUNavigationMenu* navigationMenu;	// @synthesize=_navigationMenu
// declared property getter: -(id)navigationMenu;
-(void)_protocolButtonAction:(id)action;
-(void)_cancelAction:(id)action;
-(void)viewWillAppear:(BOOL)view;
-(id)titleOfMenuItemAtIndex:(int)index;
-(int)numberOfMenuItems;
-(void)dealloc;
-(id)initWithNavigationMenu:(id)navigationMenu;
-(id)init;
@end

