/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMHTMLElement.h"

@class NSString, DOMHTMLFormElement;

@interface DOMHTMLTextAreaElement : DOMHTMLElement {
}
@property(copy) NSString* accessKey;
@property(assign) int selectionEnd;
@property(assign) int selectionStart;
@property(readonly, assign) BOOL willValidate;
@property(copy) NSString* value;
@property(copy) NSString* defaultValue;
@property(readonly, assign) NSString* type;
@property(assign) int rows;
@property(assign) BOOL readOnly;
@property(copy) NSString* name;
@property(readonly, assign) DOMHTMLFormElement* form;
@property(assign) BOOL disabled;
@property(assign) int cols;
@property(assign) BOOL autofocus;
@property(retain) id autocapitalize;	// converted property
@property(assign) BOOL autocorrect;	// converted property
@property(retain) id selectionDirection;	// converted property
@property(retain) id wrap;	// converted property
@property(assign) BOOL required;	// converted property
@property(retain) id placeholder;	// converted property
@property(assign) int maxLength;	// converted property
@property(retain) id dirName;	// converted property
-(void)setSelectionRange:(int)range end:(int)end;
-(void)select;
-(void)setCustomValidity:(id)validity;
-(BOOL)checkValidity;
// declared property setter: -(void)setAccessKey:(id)key;
// declared property getter: -(id)accessKey;
// converted property setter: -(void)setAutocapitalize:(id)autocapitalize;
// converted property getter: -(id)autocapitalize;
// converted property setter: -(void)setAutocorrect:(BOOL)autocorrect;
// converted property getter: -(BOOL)autocorrect;
// converted property setter: -(void)setSelectionDirection:(id)direction;
// converted property getter: -(id)selectionDirection;
// declared property setter: -(void)setSelectionEnd:(int)end;
// declared property getter: -(int)selectionEnd;
// declared property setter: -(void)setSelectionStart:(int)start;
// declared property getter: -(int)selectionStart;
-(id)labels;
-(id)validationMessage;
-(id)validity;
// declared property getter: -(BOOL)willValidate;
-(unsigned)textLength;
// declared property setter: -(void)setValue:(id)value;
// declared property getter: -(id)value;
// declared property setter: -(void)setDefaultValue:(id)value;
// declared property getter: -(id)defaultValue;
// declared property getter: -(id)type;
// converted property setter: -(void)setWrap:(id)wrap;
// converted property getter: -(id)wrap;
// declared property setter: -(void)setRows:(int)rows;
// declared property getter: -(int)rows;
// converted property setter: -(void)setRequired:(BOOL)required;
// converted property getter: -(BOOL)required;
// declared property setter: -(void)setReadOnly:(BOOL)only;
// declared property getter: -(BOOL)readOnly;
// converted property setter: -(void)setPlaceholder:(id)placeholder;
// converted property getter: -(id)placeholder;
// declared property setter: -(void)setName:(id)name;
// declared property getter: -(id)name;
// converted property setter: -(void)setMaxLength:(int)length;
// converted property getter: -(int)maxLength;
// declared property getter: -(id)form;
// declared property setter: -(void)setDisabled:(BOOL)disabled;
// declared property getter: -(BOOL)disabled;
// converted property setter: -(void)setDirName:(id)name;
// converted property getter: -(id)dirName;
// declared property setter: -(void)setCols:(int)cols;
// declared property getter: -(int)cols;
// declared property setter: -(void)setAutofocus:(BOOL)autofocus;
// declared property getter: -(BOOL)autofocus;
-(BOOL)_isEdited;
-(int)_autocapitalizeType;
-(int)structuralComplexityContribution;
@end

