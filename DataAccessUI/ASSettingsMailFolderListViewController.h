/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccessUI.framework/DataAccessUI
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class ASAccount, NSString, NSMutableSet, NSArray;

@interface ASSettingsMailFolderListViewController : XXUnknownSuperclass {
	ASAccount* _account;
	NSString* _foldersTag;
	NSString* _inboxID;
	BOOL _loadingMailFolders;
	NSMutableSet* _monitored;
	NSArray* _sortedMailFolders;
	BOOL _viewHasAppeared;
}
-(id)specifiers;
-(void)dealloc;
-(void)_foldersThatExternalClientsCareAboutChanged;
-(void)_folderHierarchyChanged;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(void)_loadMailFolders;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)_accountsChanged:(id)changed;
-(void)viewDidLoad;
-(BOOL)_isFolderMonitored:(id)monitored;
-(id)indexPathForMailFolder:(id)mailFolder;
-(id)mailFolderForIndexPath:(id)indexPath;
-(int)_heightOfASFolder:(id)asfolder;
-(id)_inboxID;
-(void)setAccount:(id)account;
-(id)init;
@end
