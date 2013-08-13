/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "SUScriptObject.h"

@class ACAccountStore, NSString;

@interface SUScriptAppleAccountStore : SUScriptObject {
@private
	ACAccountStore* _accountStore;
	NSString* _effectiveBundleID;
}
@property(readonly, assign) int renewResultRenewed;
@property(readonly, assign) int renewResultRejected;
@property(readonly, assign) int renewResultFailed;
@property(readonly, assign) NSString* accountTypeIdentifierTwitter;
@property(readonly, assign) NSString* accountTypeIdentifierSinaWeibo;
@property(readonly, assign) NSString* accountTypeIdentifierFacebook;
@property(readonly, assign) NSString* accessPurposeWrite;
@property(readonly, assign) NSString* accessPurposeReadWrite;
@property(readonly, assign) NSString* accessPurposeRead;
@property(readonly, assign) NSString* effectiveBundleID;
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)selector;
+(id)webScriptNameForKeyName:(id)keyName;
-(id)scriptAttributeKeys;
-(id)attributeKeys;
-(id)_accountStore;
// declared property getter: -(int)renewResultRenewed;
// declared property getter: -(int)renewResultRejected;
// declared property getter: -(int)renewResultFailed;
// declared property getter: -(id)accountTypeIdentifierTwitter;
// declared property getter: -(id)accountTypeIdentifierSinaWeibo;
// declared property getter: -(id)accountTypeIdentifierFacebook;
// declared property getter: -(id)accessPurposeWrite;
// declared property getter: -(id)accessPurposeReadWrite;
// declared property getter: -(id)accessPurposeRead;
-(void)setEffectiveBundleID:(id)anId;
// declared property getter: -(id)effectiveBundleID;
-(id)_className;
-(void)requestAccessWithInfo:(id)info completionHandler:(id)handler;
-(void)renewCredentialsForAccount:(id)account completionHandler:(id)handler;
-(id)makeClientAccessInfoWithAccountType:(id)accountType;
-(id)accountTypeWithIdentifier:(id)identifier;
-(id)accountsWithAccountType:(id)accountType;
-(void)dealloc;
@end

