/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "SUScriptObject.h"

@class NSNumberFormatter, NSString;

@interface SUScriptNumberFormatter : SUScriptObject {
	NSNumberFormatter* _numberFormatter;
}
@property(retain) NSString* style;
@property(retain) NSString* localeIdentifier;
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)selector;
+(id)webScriptNameForKeyName:(id)keyName;
-(id)scriptAttributeKeys;
-(id)attributeKeys;
// declared property getter: -(id)style;
// declared property setter: -(void)setStyle:(id)style;
// declared property setter: -(void)setLocaleIdentifier:(id)identifier;
// declared property getter: -(id)localeIdentifier;
-(id)stringFromNumber:(id)number;
-(id)numberFromString:(id)string;
-(void)dealloc;
-(id)init;
@end

