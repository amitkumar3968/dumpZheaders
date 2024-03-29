/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface AFDictationOptions : XXUnknownSuperclass {
@private
	NSString* _applicationName;
	NSString* _applicationVersion;
	NSString* _fieldLabel;
	NSString* _fieldIdentifier;
	NSString* _interactionIdentifier;
	int _keyboardType;
	NSString* _prefixText;
	NSString* _postfixText;
	NSString* _selectedText;
	int _returnKeyType;
	NSString* _languageCodeOverride;
}
@property(copy, nonatomic) NSString* languageCodeOverride;	// @synthesize=_languageCodeOverride
@property(assign, nonatomic) int returnKeyType;	// @synthesize=_returnKeyType
@property(copy, nonatomic) NSString* selectedText;	// @synthesize=_selectedText
@property(copy, nonatomic) NSString* postfixText;	// @synthesize=_postfixText
@property(copy, nonatomic) NSString* prefixText;	// @synthesize=_prefixText
@property(assign, nonatomic) int keyboardType;	// @synthesize=_keyboardType
@property(copy, nonatomic) NSString* interactionIdentifier;	// @synthesize=_interactionIdentifier
@property(copy, nonatomic) NSString* fieldIdentifier;	// @synthesize=_fieldIdentifier
@property(copy, nonatomic) NSString* fieldLabel;	// @synthesize=_fieldLabel
@property(copy, nonatomic) NSString* applicationVersion;	// @synthesize=_applicationVersion
@property(copy, nonatomic) NSString* applicationName;	// @synthesize=_applicationName
// declared property setter: -(void)setLanguageCodeOverride:(id)override;
// declared property getter: -(id)languageCodeOverride;
// declared property setter: -(void)setReturnKeyType:(int)type;
// declared property getter: -(int)returnKeyType;
// declared property setter: -(void)setSelectedText:(id)text;
// declared property getter: -(id)selectedText;
// declared property setter: -(void)setPostfixText:(id)text;
// declared property getter: -(id)postfixText;
// declared property setter: -(void)setPrefixText:(id)text;
// declared property getter: -(id)prefixText;
// declared property setter: -(void)setKeyboardType:(int)type;
// declared property getter: -(int)keyboardType;
// declared property setter: -(void)setInteractionIdentifier:(id)identifier;
// declared property getter: -(id)interactionIdentifier;
// declared property setter: -(void)setFieldIdentifier:(id)identifier;
// declared property getter: -(id)fieldIdentifier;
// declared property setter: -(void)setFieldLabel:(id)label;
// declared property getter: -(id)fieldLabel;
// declared property setter: -(void)setApplicationVersion:(id)version;
// declared property getter: -(id)applicationVersion;
// declared property setter: -(void)setApplicationName:(id)name;
// declared property getter: -(id)applicationName;
-(void).cxx_destruct;
-(id)initWithDKPlistRepresentation:(id)dkplistRepresentation;
-(id)dkPlistRepresentation;
@end

