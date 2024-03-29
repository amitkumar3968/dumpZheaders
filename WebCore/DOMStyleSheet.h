/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMObject.h"

@class NSString, DOMMediaList, DOMNode;

__attribute__((visibility("hidden")))
@interface DOMStyleSheet : DOMObject {
}
@property(readonly, assign) DOMMediaList* media;
@property(readonly, assign) NSString* title;
@property(readonly, assign) NSString* href;
@property(readonly, assign) DOMStyleSheet* parentStyleSheet;
@property(readonly, assign) DOMNode* ownerNode;
@property(assign) BOOL disabled;
@property(readonly, assign) NSString* type;
// declared property getter: -(id)media;
// declared property getter: -(id)title;
// declared property getter: -(id)href;
// declared property getter: -(id)parentStyleSheet;
// declared property getter: -(id)ownerNode;
// declared property setter: -(void)setDisabled:(BOOL)disabled;
// declared property getter: -(BOOL)disabled;
// declared property getter: -(id)type;
-(void)finalize;
-(void)dealloc;
@end

