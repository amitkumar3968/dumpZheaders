/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import "DataAccess-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface XXUnknownSuperclass (AccountsdPrivate)
-(id)_initHoppingBasicAccount;
@end

@interface XXUnknownSuperclass (DAKeychainAdditions)
-(id)stringByURLQuoting;
@end

@interface XXUnknownSuperclass (DAKeychainAddition)
-(id)URLWithUsername:(id)username;
-(id)URLWithUsername:(id)username withPassword:(id)password;
-(id)URLByRemovingLastPathComponent;
-(id)URLWithoutUsername;
-(id)uri;
@end

@interface XXUnknownSuperclass (DelayedPerformWithNullSource)
-(void)addNullRunLoopSourceAndPerformSelector:(SEL)selector withObject:(id)object afterDelay:(double)delay inModes:(id)modes;
@end

@interface XXUnknownSuperclass (hexString)
+(id)dataWithHexString:(id)hexString;
+(id)dataWithHexString:(id)hexString stringIsUppercase:(BOOL)uppercase;
-(id)uppercaseHexStringWithoutSpaces;
-(id)lowercaseHexStringWithoutSpaces;
-(id)hexString;
@end

@interface XXUnknownSuperclass (DAExtensions)
-(id)stringByURLEscapingPathComponent;
-(id)appendSlashIfNeeded;
-(id)removeSlashIfNeeded;
-(id)stringByRemovingPercentEscapesForUsername;
-(id)stringByAddingPercentEscapesForUsername;
@end

@interface XXUnknownSuperclass (DAExtensions)
+(int)classicPortForScheme:(id)scheme;
+(id)URLWithScheme:(id)scheme host:(id)host port:(int)port uri:(id)uri;
+(id)URLWithScheme:(id)scheme host:(id)host user:(id)user port:(int)port uri:(id)uri;
+(id)URLWithDirtyString:(id)dirtyString;
-(id)pathWithoutTrailingRemovingSlash;
-(id)rawPath;
-(id)urlBySettingPath:(id)path;
-(id)urlBySettingPort:(id)port;
-(id)urlBySettingHost:(id)host;
-(id)urlBySettingScheme:(id)scheme;
-(id)urlByRemovingUsername;
-(id)urlBySettingUsername:(id)username;
-(id)urlBySettingPath:(id)path keepUsername:(BOOL)username;
-(id)urlBySettingPort:(id)port keepUsername:(BOOL)username;
-(id)urlBySettingHost:(id)host keepUsername:(BOOL)username;
-(id)urlBySettingScheme:(id)scheme keepUsername:(BOOL)username;
-(BOOL)isEqualToDAVURL:(id)davurl;
@end

@interface XXUnknownSuperclass (DALeastInfoURLExtension)
-(id)leastInfoStringRepresentationRelativeToParentURL:(id)parentURL;
@end

@interface XXUnknownSuperclass (DALeastInfoURLExtension)
-(id)absoluteURLForChildLeastInfoRepresentationRelativeToParentURL:(id)parentURL;
@end

@interface XXUnknownSuperclass (DAExtensions)
-(id)DARequestByApplyingStorageSession:(CFURLStorageSessionRef)session;
@end

@interface XXUnknownSuperclass (DAExtensions)
-(id)DAObjectForKeyCaseInsensitive:(id)keyCaseInsensitive;
@end

@interface XXUnknownSuperclass (DAChildAccountExtensions)
-(id)childAccountPropertiesArrayBySettingChildProperties:(id)properties forChildAccountType:(id)childAccountType;
-(id)childPropertiesForAccountType:(id)accountType defaultProperties:(id)properties outParentNeedsSave:(BOOL*)save;
@end

@interface XXUnknownSuperclass (DAMMeExtras)
-(BOOL)hasActiveDAMMeAccounts;
@end

@interface XXUnknownSuperclass (DAMMeExtras)
-(id)subscribedCalendarRecords;
-(BOOL)isValidDAMMeAccount;
@end

@interface XXUnknownSuperclass (DAIMAPNotesExtensions)
-(BOOL)hasActiveIMAPNotesAccounts;
@end

@interface XXUnknownSuperclass (DAIMAPNotesExtensions)
-(BOOL)isValidIMAPNotesAccount;
-(BOOL)accountTypeStringOwnsIMAPChild;
-(BOOL)accountClassStringIsIMAPSubclass;
-(BOOL)accountTypeStringIsIMAPSubclass;
@end

@interface XXUnknownSuperclass (DACalDAVChildExtensions)
-(BOOL)hasActiveCalDAVChildAccounts;
@end

@interface XXUnknownSuperclass (DACalDAVChildExtensions)
-(BOOL)isValidCalDAVChildAccount;
-(BOOL)accountPropertiesHaveCalDAVEnabled:(id)enabled;
-(BOOL)accountTypeStringCanOwnCalDAVAccounts;
@end

@interface XXUnknownSuperclass (DACardDAVChildExtensions)
-(BOOL)hasActiveCardDAVChildAccounts;
@end

@interface XXUnknownSuperclass (DACardDAVChildExtensions)
-(BOOL)isValidCardDAVChildAccount;
-(BOOL)accountPropertiesHaveCardDAVEnabled:(id)enabled;
-(BOOL)accountTypeStringCanOwnCardDAVAccounts;
@end

@interface XXUnknownSuperclass (BookmarkDAVChildExtensions)
-(BOOL)hasActiveBookmarkDAVChildAccounts;
@end

@interface XXUnknownSuperclass (BookmarkDAVChildExtensions)
-(BOOL)isValidBookmarkDAVChildAccount;
-(BOOL)accountPropertiesHaveBookmarkDAVEnabled:(id)enabled;
-(BOOL)accountTypeStringCanOwnBookmarkDAVAccounts;
@end

