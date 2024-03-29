/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccountSettings.framework/AccountSettings
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSArray, NSMutableDictionary;

@interface AccountsManager : XXUnknownSuperclass {
	NSMutableDictionary* _topLevelAccountsByID;
	NSMutableArray* _orderedTopLevelAccounts;
	NSMutableDictionary* _childAccountsByID;
	NSMutableDictionary* _childAccountIDToParentAccountID;
@private
	NSMutableDictionary* _originalAccountsByID;
	unsigned _dataVersion;
	NSArray* _runtimeFixers;
}
@property(assign) unsigned dataVersion;	// converted property
+(id)_notifierClassNamesForAccountType:(id)accountType dataclass:(id)dataclass;
+(id)displayNameForGroupOfAccountType:(id)accountType forBeginningOfSentence:(BOOL)sentence;
+(void)accountDidChange:(id)account forDataclass:(id)dataclass;
+(void)accountWillChange:(id)account forDataclass:(id)dataclass;
+(void)_migrateAccountsIfNeeded;
+(void)_setShouldSkipNotifications:(BOOL)_set;
+(id)fullPathToAccountSettingsPlist;
+(unsigned)currentVersion;
+(BOOL)_oldMailAccountsInformationFound;
+(BOOL)_oldDAAccountsInformationFound;
+(BOOL)accountSettingsNeedsToBeMigrated;
+(void)shouldMigrateOldMailAccounts:(BOOL*)accounts oldDAAccounts:(BOOL*)accounts2 newAccountSettings:(BOOL*)settings;
+(void)removeNewAccountSettingsToMigrateOldAccountInformation;
+(void)waitForMigrationToFinish;
+(void)releaseMigrationLock:(id)lock;
+(id)createAndLockMigrationLock;
+(void)killDataAccessIfNecessary;
-(void)_sendNotificationsForChangedAccounts;
-(void)_addNotificationToDictionary:(id)dictionary forChangeType:(int)changeType originalProperties:(id)properties currentProperties:(id)properties4;
-(void)_setOriginalAccountDictionaries;
-(unsigned)countOfBasicAccountsWithTypes:(id)types;
-(id)_createRuntimeFixers;
-(id)_initWithAccountsInfo:(id)accountsInfo;
-(void)_loadChildrenFromAccount:(id)account;
-(void)_removeChildrenForAccountWithIdentifier:(id)identifier;
-(void)saveAllAccounts;
-(id)mergeInMemoryProperties:(id)memoryProperties originalProperties:(id)properties onDiskProperties:(id)properties3;
-(void)addChild:(id)child toAccount:(id)account;
-(void)removeChildWithIdentifier:(id)identifier fromAccount:(id)account;
-(void)replaceAccountsWithTypes:(id)types withAccounts:(id)accounts;
-(void)replaceAccount:(id)account withAccount:(id)account2;
-(void)deleteAccountWithIdentifier:(id)identifier;
-(void)deleteAccount:(id)account;
-(void)insertAccount:(id)account;
-(void)updateAccount:(id)account;
-(unsigned)count;
-(id)accountsWithTypes:(id)types withLoader:(id)loader;
-(id)accountsWithTypes:(id)types;
-(id)allMailAccounts;
-(id)fullAccountWithIdentifier:(id)identifier loader:(id)loader;
-(id)fullDeviceLocalAccount;
-(id)basicAccountsWithTypes:(id)types;
-(id)allBasicSyncableAccounts;
-(id)allBasicAccounts;
-(id)syncableAccountWithSyncIdentifier:(id)syncIdentifier;
-(id)displayAccountWithSyncIdentifier:(id)syncIdentifier;
-(id)accountWithIdentifier:(id)identifier;
-(void)dealloc;
-(id)init;
// converted property getter: -(unsigned)dataVersion;
-(id)initInsideOfMigration;
-(id)initWithAccounsInfoArray:(id)accounsInfoArray;
// converted property setter: -(void)setDataVersion:(unsigned)version;
@end

