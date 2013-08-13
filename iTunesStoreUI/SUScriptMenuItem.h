/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "SUScriptObject.h"

@class NSString;

@interface SUScriptMenuItem : SUScriptObject {
	BOOL _enabled;
	NSString* _title;
	id _userInfo;
}
@property(retain) id userInfo;
@property(retain) NSString* title;
@property(assign) BOOL enabled;
+(void)initialize;
+(id)webScriptNameForKeyName:(id)keyName;
-(id)scriptAttributeKeys;
-(id)attributeKeys;
-(void)_sendDidChange;
// declared property getter: -(id)userInfo;
// declared property getter: -(id)title;
// declared property setter: -(void)setUserInfo:(id)info;
// declared property setter: -(void)setTitle:(id)title;
// declared property setter: -(void)setEnabled:(BOOL)enabled;
// declared property getter: -(BOOL)enabled;
-(id)_className;
-(void)dealloc;
-(id)init;
@end

