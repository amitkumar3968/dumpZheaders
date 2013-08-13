/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import "iPodUI-Structs.h"
#import "IUMediaListViewController.h"

@class UITableViewCell, NSMutableDictionary;

@interface IUMusicViewController : IUMediaListViewController {
@private
	UITableViewCell* _moreListTableViewCell;
	NSMutableDictionary* _sectionHeaderCache;
}
+(Class)tableViewCellClass;
+(id)tableViewBackgroundColor;
-(id)tableView:(id)view viewForHeaderInSection:(int)section;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(CGRect)tableView:(id)view frameForSectionIndexGivenProposedFrame:(CGRect)sectionIndexGivenProposedFrame;
-(void)reloadData;
-(BOOL)shouldShowStoreButton;
-(void)viewDidLoad;
-(id)moreListTableCell;
-(void)dealloc;
-(id)init;
@end

