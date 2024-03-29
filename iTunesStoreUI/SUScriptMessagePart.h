/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "SUScriptObject.h"

@class SUMessagePart, NSString;

@interface SUScriptMessagePart : SUScriptObject {
}
@property(readonly, assign) NSString* encodingBase64;
@property(readonly, assign) NSString* MIMEType;
@property(copy) NSString* contentEncoding;
@property(retain, nonatomic) SUMessagePart* nativeMessagePart;
+(void)initialize;
+(id)webScriptNameForKeyName:(id)keyName;
-(id)scriptAttributeKeys;
-(id)attributeKeys;
// declared property getter: -(id)encodingBase64;
// declared property setter: -(void)setContentEncoding:(id)encoding;
// declared property getter: -(id)MIMEType;
// declared property getter: -(id)contentEncoding;
-(id)_className;
// declared property setter: -(void)setNativeMessagePart:(id)part;
// declared property getter: -(id)nativeMessagePart;
@end

