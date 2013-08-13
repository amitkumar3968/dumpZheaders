/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMHTMLElement.h"

@class NSString, DOMHTMLTableCaptionElement, DOMHTMLCollection, DOMHTMLTableSectionElement;

__attribute__((visibility("hidden")))
@interface DOMHTMLTableElement : DOMHTMLElement {
}
@property(copy) NSString* width;
@property(copy) NSString* summary;
@property(copy) NSString* rules;
@property(copy) NSString* frameBorders;
@property(copy) NSString* cellSpacing;
@property(copy) NSString* cellPadding;
@property(copy) NSString* border;
@property(copy) NSString* bgColor;
@property(copy) NSString* align;
@property(readonly, assign) DOMHTMLCollection* tBodies;
@property(readonly, assign) DOMHTMLCollection* rows;
@property(retain) DOMHTMLTableSectionElement* tFoot;
@property(retain) DOMHTMLTableSectionElement* tHead;
@property(retain) DOMHTMLTableCaptionElement* caption;
-(void)deleteRow:(int)row;
-(id)insertRow:(int)row;
-(void)deleteCaption;
-(id)createCaption;
-(id)createTBody;
-(void)deleteTFoot;
-(id)createTFoot;
-(void)deleteTHead;
-(id)createTHead;
// declared property setter: -(void)setWidth:(id)width;
// declared property getter: -(id)width;
// declared property setter: -(void)setSummary:(id)summary;
// declared property getter: -(id)summary;
// declared property setter: -(void)setRules:(id)rules;
// declared property getter: -(id)rules;
// declared property setter: -(void)setFrameBorders:(id)borders;
// declared property getter: -(id)frameBorders;
// declared property setter: -(void)setCellSpacing:(id)spacing;
// declared property getter: -(id)cellSpacing;
// declared property setter: -(void)setCellPadding:(id)padding;
// declared property getter: -(id)cellPadding;
// declared property setter: -(void)setBorder:(id)border;
// declared property getter: -(id)border;
// declared property setter: -(void)setBgColor:(id)color;
// declared property getter: -(id)bgColor;
// declared property setter: -(void)setAlign:(id)align;
// declared property getter: -(id)align;
// declared property getter: -(id)tBodies;
// declared property getter: -(id)rows;
// declared property setter: -(void)setTFoot:(id)foot;
// declared property getter: -(id)tFoot;
// declared property setter: -(void)setTHead:(id)head;
// declared property getter: -(id)tHead;
// declared property setter: -(void)setCaption:(id)caption;
// declared property getter: -(id)caption;
-(int)structuralComplexityContribution;
@end
