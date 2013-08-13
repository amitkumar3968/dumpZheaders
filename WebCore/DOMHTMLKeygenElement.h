/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMHTMLElement.h"

@class NSString, DOMNodeList, DOMHTMLFormElement, DOMValidityState;

__attribute__((visibility("hidden")))
@interface DOMHTMLKeygenElement : DOMHTMLElement {
}
@property(readonly, assign) DOMNodeList* labels;
@property(readonly, assign) NSString* validationMessage;
@property(readonly, assign) DOMValidityState* validity;
@property(readonly, assign) BOOL willValidate;
@property(readonly, assign) NSString* type;
@property(copy) NSString* name;
@property(copy) NSString* keytype;
@property(readonly, assign) DOMHTMLFormElement* form;
@property(assign) BOOL disabled;
@property(copy) NSString* challenge;
@property(assign) BOOL autofocus;
-(void)setCustomValidity:(id)validity;
-(BOOL)checkValidity;
// declared property getter: -(id)labels;
// declared property getter: -(id)validationMessage;
// declared property getter: -(id)validity;
// declared property getter: -(BOOL)willValidate;
// declared property getter: -(id)type;
// declared property setter: -(void)setName:(id)name;
// declared property getter: -(id)name;
// declared property setter: -(void)setKeytype:(id)keytype;
// declared property getter: -(id)keytype;
// declared property getter: -(id)form;
// declared property setter: -(void)setDisabled:(BOOL)disabled;
// declared property getter: -(BOOL)disabled;
// declared property setter: -(void)setChallenge:(id)challenge;
// declared property getter: -(id)challenge;
// declared property setter: -(void)setAutofocus:(BOOL)autofocus;
// declared property getter: -(BOOL)autofocus;
@end

