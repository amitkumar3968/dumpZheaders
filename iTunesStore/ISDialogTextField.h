/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface ISDialogTextField : XXUnknownSuperclass {
	int _keyboardType;
	BOOL _secure;
	NSString* _title;
	NSString* _value;
}
@property(retain) NSString* value;	// @synthesize=_value
@property(retain) NSString* title;	// @synthesize=_title
@property(assign, getter=isSecure) BOOL secure;	// @synthesize=_secure
@property(assign) int keyboardType;	// @synthesize=_keyboardType
+(id)textFieldWithTitle:(id)title;
// declared property setter: -(void)setValue:(id)value;
// declared property getter: -(id)value;
// declared property setter: -(void)setTitle:(id)title;
// declared property getter: -(id)title;
// declared property setter: -(void)setSecure:(BOOL)secure;
// declared property getter: -(BOOL)isSecure;
// declared property setter: -(void)setKeyboardType:(int)type;
// declared property getter: -(int)keyboardType;
-(void)dealloc;
@end

