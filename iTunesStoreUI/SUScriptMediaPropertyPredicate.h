/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "SUScriptObject.h"

@class MPMediaPropertyPredicate, NSString;

@interface SUScriptMediaPropertyPredicate : SUScriptObject {
	NSString* _comparisonType;
	NSString* _property;
	id _value;
}
@property(readonly, assign) id value;
@property(readonly, assign) NSString* property;
@property(readonly, assign) NSString* comparisonType;
@property(readonly, assign, nonatomic) MPMediaPropertyPredicate* nativePredicate;
+(void)initialize;
+(id)webScriptNameForKeyName:(id)keyName;
-(id)scriptAttributeKeys;
-(id)attributeKeys;
-(id)_playlistAttributesForScriptArray:(id)scriptArray;
// declared property getter: -(id)value;
// declared property getter: -(id)property;
// declared property getter: -(id)comparisonType;
-(id)_className;
// declared property getter: -(id)nativePredicate;
-(void)dealloc;
-(id)initWithProperty:(id)property value:(id)value comparisonType:(id)type;
@end

