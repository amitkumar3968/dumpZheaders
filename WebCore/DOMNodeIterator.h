/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMObject.h"

@class DOMNode;
@protocol DOMNodeFilter;

__attribute__((visibility("hidden")))
@interface DOMNodeIterator : DOMObject {
}
@property(readonly, assign) BOOL pointerBeforeReferenceNode;
@property(readonly, assign) DOMNode* referenceNode;
@property(readonly, assign) BOOL expandEntityReferences;
@property(readonly, assign) id<DOMNodeFilter> filter;
@property(readonly, assign) unsigned whatToShow;
@property(readonly, assign) DOMNode* root;
-(void)detach;
-(id)previousNode;
-(id)nextNode;
// declared property getter: -(BOOL)pointerBeforeReferenceNode;
// declared property getter: -(id)referenceNode;
// declared property getter: -(BOOL)expandEntityReferences;
// declared property getter: -(id)filter;
// declared property getter: -(unsigned)whatToShow;
// declared property getter: -(id)root;
-(void)finalize;
-(void)dealloc;
@end

