/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMObject.h"


__attribute__((visibility("hidden")))
@interface DOMNamedNodeMap : DOMObject {
}
@property(readonly, assign) unsigned length;
-(id)removeNamedItemNS:(id)ns :(id)arg2;
-(id)removeNamedItemNS:(id)ns localName:(id)name;
-(id)setNamedItemNS:(id)ns;
-(id)getNamedItemNS:(id)ns :(id)arg2;
-(id)getNamedItemNS:(id)ns localName:(id)name;
-(id)item:(unsigned)item;
-(id)removeNamedItem:(id)item;
-(id)setNamedItem:(id)item;
-(id)getNamedItem:(id)item;
// declared property getter: -(unsigned)length;
-(void)finalize;
-(void)dealloc;
@end

