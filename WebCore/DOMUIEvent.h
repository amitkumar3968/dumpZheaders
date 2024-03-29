/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMEvent.h"

@class DOMAbstractView;

@interface DOMUIEvent : DOMEvent {
}
@property(readonly, assign) int which;
@property(readonly, assign) int pageY;
@property(readonly, assign) int pageX;
@property(readonly, assign) int layerY;
@property(readonly, assign) int layerX;
@property(readonly, assign) int charCode;
@property(readonly, assign) int keyCode;
@property(readonly, assign) int detail;
@property(readonly, assign) DOMAbstractView* view;
-(void)initUIEvent:(id)event :(BOOL)arg2 :(BOOL)arg3 :(id)arg4 :(int)arg5;
-(void)initUIEvent:(id)event canBubble:(BOOL)bubble cancelable:(BOOL)cancelable view:(id)view detail:(int)detail;
// declared property getter: -(int)which;
// declared property getter: -(int)pageY;
// declared property getter: -(int)pageX;
// declared property getter: -(int)layerY;
// declared property getter: -(int)layerX;
// declared property getter: -(int)charCode;
// declared property getter: -(int)keyCode;
// declared property getter: -(int)detail;
// declared property getter: -(id)view;
@end

