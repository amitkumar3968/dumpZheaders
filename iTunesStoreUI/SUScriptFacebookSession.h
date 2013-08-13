/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "SUScriptObject.h"

@class SUScriptAppleAccount;

@interface SUScriptFacebookSession : SUScriptObject {
@private
	SUScriptAppleAccount* _account;
}
@property(readonly, assign) unsigned likeStatusFlagMe;
@property(readonly, assign) unsigned likeStatusFlagGlobalCount;
@property(readonly, assign) unsigned likeStatusFlagFriends;
@property(readonly, assign) unsigned likeStatusFlagFriendCount;
@property(readonly, assign) id hasAccounts;
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)selector;
+(id)webScriptNameForKeyName:(id)keyName;
-(id)scriptAttributeKeys;
-(id)attributeKeys;
// declared property getter: -(unsigned)likeStatusFlagMe;
// declared property getter: -(unsigned)likeStatusFlagGlobalCount;
// declared property getter: -(unsigned)likeStatusFlagFriends;
// declared property getter: -(unsigned)likeStatusFlagFriendCount;
// declared property getter: -(id)hasAccounts;
-(id)_className;
-(void)unlikeURL:(id)url completionFunction:(id)function;
-(void)likeURL:(id)url completionFunction:(id)function;
-(void)fetchLikeStatusForURL:(id)url flags:(id)flags completionFunction:(id)function;
-(void)dealloc;
-(id)initWithAppleAccount:(id)appleAccount;
@end

