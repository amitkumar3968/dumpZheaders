/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import "Preferences-Structs.h"
#import "PSListController.h"

@class PSSpecifier;

@interface PSListItemsController : PSListController {
	int _rowToSelect;
	BOOL _deferItemSelection;
	BOOL _restrictionList;
	PSSpecifier* _lastSelectedSpecifier;
}
@property(assign) BOOL isRestrictionList;	// converted property
// converted property setter: -(void)setIsRestrictionList:(BOOL)list;
// converted property getter: -(BOOL)isRestrictionList;
-(id)specifiers;
-(id)itemsFromDataSource;
-(id)itemsFromParent;
-(void)_addStaticText:(id)text;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(void)listItemSelected:(id)selected;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(void)prepareSpecifiersMetadata;
-(void)didLock;
-(void)suspend;
-(void)viewWillDisappear:(BOOL)view;
-(void)dealloc;
-(void)setValueForSpecifier:(id)specifier defaultValue:(id)value;
-(void)setRowToSelect;
-(void)scrollToSelectedCell;
-(void)viewWillAppear:(BOOL)view;
@end

