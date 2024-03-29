/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMHTMLElement.h"

@class NSString, DOMHTMLCollection;

__attribute__((visibility("hidden")))
@interface DOMHTMLTableSectionElement : DOMHTMLElement {
}
@property(readonly, assign) DOMHTMLCollection* rows;
@property(copy) NSString* vAlign;
@property(copy) NSString* chOff;
@property(copy) NSString* ch;
@property(copy) NSString* align;
-(void)deleteRow:(int)row;
-(id)insertRow:(int)row;
// declared property getter: -(id)rows;
// declared property setter: -(void)setVAlign:(id)align;
// declared property getter: -(id)vAlign;
// declared property setter: -(void)setChOff:(id)off;
// declared property getter: -(id)chOff;
// declared property setter: -(void)setCh:(id)ch;
// declared property getter: -(id)ch;
// declared property setter: -(void)setAlign:(id)align;
// declared property getter: -(id)align;
@end

