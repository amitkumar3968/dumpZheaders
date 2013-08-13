/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccountSettingsUI.framework/AccountSettingsUI
 */

#import "NSObject.h"


@protocol AccountSettingsUIPlugin <NSObject>
-(id)initWithParentController:(id)parentController;
@optional
-(void)invalidateParentController;
-(id)localizedDetailsForAccount:(id)account;
-(id)collectionNavigationTitle;
-(id)collectionDisplayName;
-(id)footerTextForGroupSpecifier;
-(id)commonSpecifiersWithOptions:(id)options;
-(id)displayName;
-(id)accountAddTypes;
-(id)accounts;
@end
