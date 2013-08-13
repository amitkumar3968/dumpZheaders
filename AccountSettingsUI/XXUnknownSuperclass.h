/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccountSettingsUI.framework/AccountSettingsUI
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "AccountSettingsUIAccount.h"


@interface XXUnknownSuperclass (AccountSettingsUI) <AccountSettingsUIAccount>
+(void*)createSyncDataSourceForDataclass:(id)dataclass options:(id)options;
+(id)displayedAccountTypeString;
+(id)displayedShortAccountTypeString;
-(void)hideLocalStoreForDataclass:(id)dataclass;
-(void)showLocalStoreIfAppropriateForDataclass:(id)dataclass;
-(BOOL)otherAccountEnabledForDataclass:(id)dataclass;
-(void)deleteLocalDataSourceForDataclass:(id)dataclass;
-(void)setTetheredEnabled:(BOOL)enabled forDataclass:(id)dataclass;
-(void)setEnabled:(BOOL)enabled forDataclass:(id)dataclass;
-(id)uniqueId;
-(BOOL)supportsPush;
@end

@interface XXUnknownSuperclass (Internal)
-(void)_saveChangesToOnMyDeviceAccount;
-(BOOL)_deleteDataSourceForDataclass:(id)dataclass;
-(BOOL)_setTetheredDataSourceEnabled:(BOOL)enabled forDataclass:(id)dataclass;
@end

@interface XXUnknownSuperclass (AccountSettingsUI)
-(id)setOfKeysForAlteredValuesComparedTo:(id)to;
@end

