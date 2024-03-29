/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "SUScriptObject.h"

@class ACAccountCredential, NSString;

@interface SUScriptAppleAccountCredential : SUScriptObject {
@private
	ACAccountCredential* _credential;
}
@property(readonly, assign) NSString* oauthToken;
+(void)initialize;
+(id)webScriptNameForKeyName:(id)keyName;
-(id)scriptAttributeKeys;
-(id)attributeKeys;
// declared property getter: -(id)oauthToken;
-(id)_className;
-(void)dealloc;
-(id)initWithACAccountCredential:(id)acaccountCredential;
@end

