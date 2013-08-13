/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMDocument.h"

@class NSString, DOMElement, DOMHTMLCollection;

@interface DOMHTMLDocument : DOMDocument {
}
@property(copy) NSString* vlinkColor;
@property(copy) NSString* linkColor;
@property(copy) NSString* alinkColor;
@property(copy) NSString* fgColor;
@property(copy) NSString* bgColor;
@property(readonly, assign) DOMElement* activeElement;
@property(readonly, assign) NSString* compatMode;
@property(copy) NSString* designMode;
@property(copy) NSString* dir;
@property(readonly, assign) int height;
@property(readonly, assign) int width;
@property(readonly, assign) DOMHTMLCollection* scripts;
@property(readonly, assign) DOMHTMLCollection* plugins;
@property(readonly, assign) DOMHTMLCollection* embeds;
-(BOOL)hasFocus;
-(void)releaseEvents;
-(void)captureEvents;
-(void)clear;
-(void)writeln:(id)writeln;
-(void)write:(id)write;
-(void)close;
-(void)open;
// declared property setter: -(void)setVlinkColor:(id)color;
// declared property getter: -(id)vlinkColor;
// declared property setter: -(void)setLinkColor:(id)color;
// declared property getter: -(id)linkColor;
// declared property setter: -(void)setAlinkColor:(id)color;
// declared property getter: -(id)alinkColor;
// declared property setter: -(void)setFgColor:(id)color;
// declared property getter: -(id)fgColor;
// declared property setter: -(void)setBgColor:(id)color;
// declared property getter: -(id)bgColor;
// declared property getter: -(id)activeElement;
// declared property getter: -(id)compatMode;
// declared property setter: -(void)setDesignMode:(id)mode;
// declared property getter: -(id)designMode;
// declared property setter: -(void)setDir:(id)dir;
// declared property getter: -(id)dir;
// declared property getter: -(int)height;
// declared property getter: -(int)width;
// declared property getter: -(id)scripts;
// declared property getter: -(id)plugins;
// declared property getter: -(id)embeds;
-(id)createDocumentFragmentWithText:(id)text;
-(id)createDocumentFragmentWithMarkupString:(id)markupString baseURL:(id)url;
-(id)_createDocumentFragmentWithText:(id)text;
-(id)_createDocumentFragmentWithMarkupString:(id)markupString baseURLString:(id)string;
@end

