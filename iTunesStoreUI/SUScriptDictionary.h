/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary;

@interface SUScriptDictionary : XXUnknownSuperclass {
	NSDictionary* _dictionary;
}
@property(readonly, assign) NSDictionary* dictionary;	// @synthesize=_dictionary
+(BOOL)isKeyExcludedFromWebScript:(const char*)webScript;
// declared property getter: -(id)dictionary;
-(id)attributeKeys;
-(id)valueForKey:(id)key;
-(void)setValue:(id)value forKey:(id)key;
-(void)dealloc;
-(id)initWithDictionary:(id)dictionary;
-(id)init;
@end

