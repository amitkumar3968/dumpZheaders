/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import "UITextFieldDelegate.h"
#import "Preferences-Structs.h"
#import "PSTableCell.h"
#import "UITextViewDelegate.h"

@class UIColor;

@interface PSEditableTableCell : PSTableCell <UITextViewDelegate, UITextFieldDelegate> {
	UIColor* _textColor;
	id _delegate;
	BOOL _forceFirstResponder;
	BOOL _delaySpecifierRelease;
	SEL _targetSetter;
	id _realTarget;
	BOOL _valueChanged;
	BOOL _isEditing;
}
@property(readonly, assign, nonatomic) BOOL isEditing;	// @synthesize=_isEditing
@property(retain) id value;	// converted property
+(int)cellStyle;
-(id)textField;
-(void)setPlaceholderText:(id)text;
// converted property setter: -(void)setValue:(id)value;
// converted property getter: -(id)value;
// declared property getter: -(BOOL)isEditing;
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(BOOL)isFirstResponder;
-(BOOL)canResignFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(void)layoutSubviews;
-(void)setDelegate:(id)delegate;
-(void)setTitle:(id)title;
-(void)setCellEnabled:(BOOL)enabled;
-(void)setValueChangedTarget:(id)target action:(SEL)action specifier:(id)specifier;
-(BOOL)textFieldShouldReturn:(id)textField;
-(void)textFieldDidEndEditing:(id)textField;
-(BOOL)textFieldShouldClear:(id)textField;
-(void)textFieldDidBeginEditing:(id)textField;
-(void)_saveForExit;
-(void)_setValueChanged;
-(void)cellRemovedFromView;
-(void)endEditingAndSave;
-(void)controlChanged:(id)changed;
-(BOOL)canReload;
-(void)prepareForReuse;
-(void)refreshCellContentsWithSpecifier:(id)specifier;
-(void)dealloc;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier specifier:(id)specifier;
@end

