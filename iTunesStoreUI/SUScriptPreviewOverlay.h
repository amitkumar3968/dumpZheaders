/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "SUScriptObject.h"

@class NSString;

@interface SUScriptPreviewOverlay : SUScriptObject {
}
@property(copy) id width;
@property(copy) NSString* userInfo;
@property(copy) id top;
@property(copy) id right;
@property(readonly, assign, getter=isVisible) id visible;
@property(copy) id height;
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)selector;
+(id)webScriptNameForKeyName:(id)keyName;
-(id)scriptAttributeKeys;
-(id)attributeKeys;
-(void)_userInfoDidChange:(id)_userInfo;
// declared property getter: -(id)width;
// declared property getter: -(id)userInfo;
// declared property getter: -(id)top;
// declared property setter: -(void)setWidth:(id)width;
// declared property setter: -(void)setUserInfo:(id)info;
// declared property setter: -(void)setTop:(id)top;
// declared property setter: -(void)setRight:(id)right;
// declared property setter: -(void)setHeight:(id)height;
// declared property getter: -(id)right;
// declared property getter: -(id)isVisible;
// declared property getter: -(id)height;
-(id)_className;
-(void)show:(id)show;
-(void)loadURLRequest:(id)request;
-(void)hide:(id)hide;
-(void)dealloc;
-(id)init;
@end

