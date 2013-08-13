/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccessUI.framework/DataAccessUI
 */

#import "UIModalViewDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface ASSettingsSyncController : XXUnknownSuperclass <UIModalViewDelegate> {
	BOOL _haveRegisteredForAccountsChanged;
	BOOL _haveRegisteredForFolderChanges;
	BOOL _isHotmailAccount;
}
-(void)viewDidLoad;
-(void)loadView;
-(id)_navTitle;
-(BOOL)backgroundDeleteAccountData;
-(void)_purgeDownloadedMailForAccount;
-(void)cancelButtonClicked:(id)clicked;
-(void)setAccountIntegerProperty:(id)property withSpecifier:(id)specifier;
-(id)accountIntegerPropertyWithSpecifier:(id)specifier;
-(id)numFoldersToPushString:(id)pushString;
-(void)setEnabled:(BOOL)enabled forDataclass:(id)dataclass;
-(BOOL)isEnabledForDataclass:(id)dataclass;
-(void)setAccount:(id)account;
-(void)saveSyncSettings:(id)settings forAccount:(id)account;
-(id)otherSpecifiers;
-(Class)accountInfoControllerClass;
-(void)dealloc;
-(id)specifiers;
-(void)viewWillAppear:(BOOL)view;
-(void)_clearOutCachesAndListenForNotifications;
-(void)viewWillDisappear:(BOOL)view;
-(void)_folderHierarchyChanged;
-(void)_foldersToPushChanged;
-(id)_foldersToPushSpecifierAccount;
-(void)_reloadFoldersToPushSpecifier;
-(void)_accountsChanged:(id)changed;
-(id)_accountFromManager;
-(id)_accountInSpecifier;
-(void)reloadAccountOnSpecifier;
@end

