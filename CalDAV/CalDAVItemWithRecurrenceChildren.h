/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableSet;

@interface CalDAVItemWithRecurrenceChildren : XXUnknownSuperclass {
	NSMutableSet* _recurrences;
}
@property(retain) NSMutableSet* recurrences;	// @synthesize=_recurrences
// declared property setter: -(void)setRecurrences:(id)recurrences;
// declared property getter: -(id)recurrences;
-(id)copyParseRules;
-(void)addRecurrence:(id)recurrence;
-(void)dealloc;
@end

