/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMObject.h"

@class DOMNodeList;

__attribute__((visibility("hidden")))
@interface DOMWebKitNamedFlow : DOMObject {
}
@property(readonly, assign) DOMNodeList* contentNodes;
@property(readonly, assign) BOOL overflow;
-(id)getRegionsByContentNode:(id)node;
// declared property getter: -(id)contentNodes;
// declared property getter: -(BOOL)overflow;
-(void)finalize;
-(void)dealloc;
@end
