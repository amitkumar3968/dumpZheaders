/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceSerializable.h"
#import "AceObject.h"

@class NSDate;

@interface SACalendarRecurrence : AceObject <SAAceSerializable> {
}
@property(assign, nonatomic) int interval;
@property(assign, nonatomic) int frequency;
@property(copy, nonatomic) NSDate* endDate;
@property(assign, nonatomic) int endCount;
+(id)recurrenceWithDictionary:(id)dictionary context:(id)context;
+(id)recurrence;
// declared property setter: -(void)setInterval:(int)interval;
// declared property getter: -(int)interval;
// declared property setter: -(void)setFrequency:(int)frequency;
// declared property getter: -(int)frequency;
// declared property setter: -(void)setEndDate:(id)date;
// declared property getter: -(id)endDate;
// declared property setter: -(void)setEndCount:(int)count;
// declared property getter: -(int)endCount;
-(id)encodedClassName;
-(id)groupIdentifier;
@end

