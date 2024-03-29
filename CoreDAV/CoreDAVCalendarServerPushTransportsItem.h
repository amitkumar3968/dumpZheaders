/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class NSMutableSet;

@interface CoreDAVCalendarServerPushTransportsItem : CoreDAVItem {
	NSMutableSet* _transports;
}
@property(retain) NSMutableSet* transports;	// @synthesize=_transports
+(id)copyParseRules;
// declared property setter: -(void)setTransports:(id)transports;
// declared property getter: -(id)transports;
-(void)addTransport:(id)transport;
-(id)description;
-(void)dealloc;
-(id)init;
@end

