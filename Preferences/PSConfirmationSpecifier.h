/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import "PSSpecifier.h"

@class NSString;

@interface PSConfirmationSpecifier : PSSpecifier {
	NSString* _title;
	NSString* _prompt;
	NSString* _okButton;
	NSString* _cancelButton;
}
@property(retain, nonatomic) NSString* cancelButton;	// @synthesize=_cancelButton
@property(retain, nonatomic) NSString* okButton;	// @synthesize=_okButton
@property(retain, nonatomic) NSString* prompt;	// @synthesize=_prompt
@property(retain, nonatomic) NSString* title;	// @synthesize=_title
+(id)preferenceSpecifierNamed:(id)named target:(id)target set:(SEL)set get:(SEL)get detail:(Class)detail cell:(int)cell edit:(Class)edit;
// declared property setter: -(void)setCancelButton:(id)button;
// declared property getter: -(id)cancelButton;
// declared property setter: -(void)setOkButton:(id)button;
// declared property getter: -(id)okButton;
// declared property setter: -(void)setPrompt:(id)prompt;
// declared property getter: -(id)prompt;
// declared property setter: -(void)setTitle:(id)title;
// declared property getter: -(id)title;
-(void)dealloc;
-(BOOL)isDestructive;
-(void)setupWithDictionary:(id)dictionary;
@end

