/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "SUScriptObject.h"

@class SSAccount, NSNumber, NSString;

@interface SUScriptAccount : SUScriptObject {
	SSAccount* _account;
}
@property(retain) id socialEnabled;
@property(retain) id purchaseHistoryEnabled;
@property(retain) id lockerEnabled;
@property(readonly, assign, getter=isPrimaryLockerAccount) id primaryLockerAccount;
@property(copy) NSString* kind;
@property(copy) NSString* identifier;
@property(retain) NSNumber* dsID;
@property(copy) NSString* credits;
@property(retain) SSAccount* account;
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)selector;
+(id)webScriptNameForKeyName:(id)keyName;
-(id)scriptAttributeKeys;
-(id)attributeKeys;
-(void)_setServiceType:(int)type enabled:(id)enabled;
-(void)_commitChanges;
// declared property getter: -(id)socialEnabled;
// declared property setter: -(void)setSocialEnabled:(id)enabled;
// declared property setter: -(void)setPurchaseHistoryEnabled:(id)enabled;
// declared property setter: -(void)setLockerEnabled:(id)enabled;
// declared property setter: -(void)setKind:(id)kind;
// declared property setter: -(void)setIdentifier:(id)identifier;
// declared property setter: -(void)setDsID:(id)anId;
// declared property setter: -(void)setCredits:(id)credits;
// declared property getter: -(id)purchaseHistoryEnabled;
// declared property getter: -(id)lockerEnabled;
// declared property getter: -(id)kind;
// declared property getter: -(id)isPrimaryLockerAccount;
// declared property getter: -(id)identifier;
// declared property getter: -(id)dsID;
// declared property getter: -(id)credits;
-(id)_className;
-(void)setSecureToken:(id)token;
-(BOOL)isSecureTokenValid;
-(BOOL)isPrimaryAccount;
// declared property setter: -(void)setAccount:(id)account;
// declared property getter: -(id)account;
-(void)dealloc;
-(id)init;
@end

