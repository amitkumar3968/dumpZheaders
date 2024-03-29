/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WebCore-Structs.h"
#import "DOMNode.h"

@class NSString, DOMCSSStyleDeclaration;

@interface DOMElement : DOMNode {
}
@property(readonly, assign) NSString* innerText;
@property(readonly, assign) unsigned childElementCount;
@property(readonly, assign) DOMElement* nextElementSibling;
@property(readonly, assign) DOMElement* previousElementSibling;
@property(readonly, assign) DOMElement* lastElementChild;
@property(readonly, assign) DOMElement* firstElementChild;
@property(readonly, assign) int scrollHeight;
@property(readonly, assign) int scrollWidth;
@property(assign) int scrollTop;
@property(assign) int scrollLeft;
@property(readonly, assign) int clientHeight;
@property(readonly, assign) int clientWidth;
@property(readonly, assign) int clientTop;
@property(readonly, assign) int clientLeft;
@property(readonly, assign) DOMElement* offsetParent;
@property(readonly, assign) int offsetHeight;
@property(readonly, assign) int offsetWidth;
@property(readonly, assign) int offsetTop;
@property(readonly, assign) int offsetLeft;
@property(readonly, assign) DOMCSSStyleDeclaration* style;
@property(readonly, assign) NSString* tagName;
-(BOOL)webkitMatchesSelector:(id)selector;
-(id)querySelectorAll:(id)all;
-(id)querySelector:(id)selector;
-(id)getElementsByClassName:(id)name;
-(void)scrollByPages:(int)pages;
-(void)scrollByLines:(int)lines;
-(void)scrollIntoViewIfNeeded:(BOOL)needed;
-(void)scrollIntoView:(BOOL)view;
-(void)blur;
-(void)focus;
-(BOOL)hasAttributeNS:(id)ns :(id)arg2;
-(BOOL)hasAttributeNS:(id)ns localName:(id)name;
-(BOOL)hasAttribute:(id)attribute;
-(id)setAttributeNodeNS:(id)ns;
-(id)getAttributeNodeNS:(id)ns :(id)arg2;
-(id)getAttributeNodeNS:(id)ns localName:(id)name;
-(id)getElementsByTagNameNS:(id)ns :(id)arg2;
-(id)getElementsByTagNameNS:(id)ns localName:(id)name;
-(void)removeAttributeNS:(id)ns :(id)arg2;
-(void)removeAttributeNS:(id)ns localName:(id)name;
-(void)setAttributeNS:(id)ns :(id)arg2 :(id)arg3;
-(void)setAttributeNS:(id)ns qualifiedName:(id)name value:(id)value;
-(id)getAttributeNS:(id)ns :(id)arg2;
-(id)getAttributeNS:(id)ns localName:(id)name;
-(id)getElementsByTagName:(id)name;
-(id)removeAttributeNode:(id)node;
-(id)setAttributeNode:(id)node;
-(id)getAttributeNode:(id)node;
-(void)removeAttribute:(id)attribute;
-(void)setAttribute:(id)attribute :(id)arg2;
-(void)setAttribute:(id)attribute value:(id)value;
-(id)getAttribute:(id)attribute;
-(id)webkitRegionOverflow;
// declared property getter: -(id)innerText;
// declared property getter: -(unsigned)childElementCount;
// declared property getter: -(id)nextElementSibling;
// declared property getter: -(id)previousElementSibling;
// declared property getter: -(id)lastElementChild;
// declared property getter: -(id)firstElementChild;
// declared property getter: -(int)scrollHeight;
// declared property getter: -(int)scrollWidth;
// declared property setter: -(void)setScrollTop:(int)top;
// declared property getter: -(int)scrollTop;
// declared property setter: -(void)setScrollLeft:(int)left;
// declared property getter: -(int)scrollLeft;
// declared property getter: -(int)clientHeight;
// declared property getter: -(int)clientWidth;
// declared property getter: -(int)clientTop;
// declared property getter: -(int)clientLeft;
// declared property getter: -(id)offsetParent;
// declared property getter: -(int)offsetHeight;
// declared property getter: -(int)offsetWidth;
// declared property getter: -(int)offsetTop;
// declared property getter: -(int)offsetLeft;
// declared property getter: -(id)style;
// declared property getter: -(id)tagName;
-(BOOL)isFocused;
-(id)_getURLAttribute:(id)attribute;
-(GSFontRef)_font;
-(int)structuralComplexityContribution;
@end

