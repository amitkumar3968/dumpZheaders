/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMEvent.h"


__attribute__((visibility("hidden")))
@interface DOMOverflowEvent : DOMEvent {
}
@property(readonly, assign) BOOL verticalOverflow;
@property(readonly, assign) BOOL horizontalOverflow;
@property(readonly, assign) unsigned short orient;
-(void)initOverflowEvent:(unsigned short)event horizontalOverflow:(BOOL)overflow verticalOverflow:(BOOL)overflow3;
// declared property getter: -(BOOL)verticalOverflow;
// declared property getter: -(BOOL)horizontalOverflow;
// declared property getter: -(unsigned short)orient;
@end

