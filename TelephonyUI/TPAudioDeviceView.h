/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import "TelephonyUI-Structs.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UITableView, UIView;

@interface TPAudioDeviceView : XXUnknownSuperclass <UITableViewDelegate, UITableViewDataSource> {
	UITableView* _deviceTableView;
	UIView* _topBGView;
	UIView* _bottomBGView;
	UIView* _buttonView;
	UIView* _tableView;
	UIView* _subbedView;
	id _delegate;
	BOOL _subbedOutTable;
}
-(void)setDelegate:(id)delegate;
-(void)selectRow:(int)row;
-(void)reloadData;
-(void)setActiveRow:(int)row;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(void)_setupSurroundingTableViews;
-(void)_takedownTable;
-(void)_setupTable;
-(void)showTable;
-(void)suboutTable;
-(void)muteButtonPressed:(id)pressed;
-(void)buttonPressed:(id)pressed;
-(void)_takedownButtons;
-(void)_setupButtons;
-(id)_muteButtonForFrame:(CGRect)frame;
-(CGRect)_frameForTable;
-(CGRect)_frameForNumButtons:(int)numButtons;
-(id)_tableFooterImage;
-(id)_tableHeaderImage;
-(id)_muteImage;
-(id)_activeImage;
-(id)_unselectedImage;
-(id)_selectedImage;
-(id)hitTest:(CGPoint)test withEvent:(id)event;
-(void)dealloc;
@end

