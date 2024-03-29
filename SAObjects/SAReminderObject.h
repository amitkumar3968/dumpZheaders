/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainObject.h"

@class SAReminderTrigger, NSString, NSArray, NSDate, SAReminderRecurrence;
@protocol SAReminderPayload;

@interface SAReminderObject : SADomainObject {
}
@property(retain, nonatomic) SAReminderTrigger* trigger;
@property(copy, nonatomic) NSString* subject;
@property(retain, nonatomic) SAReminderRecurrence* recurrence;
@property(retain, nonatomic) id<SAReminderPayload> payload;
@property(copy, nonatomic) NSArray* lists;
@property(assign, nonatomic) BOOL important;
@property(copy, nonatomic) NSString* dueDateTimeZoneId;
@property(copy, nonatomic) NSDate* dueDate;
@property(assign, nonatomic) BOOL completed;
@property(copy, nonatomic) NSString* alternateSubject;
+(id)objectWithDictionary:(id)dictionary context:(id)context;
+(id)object;
-(void)updateUsingSet:(id)set add:(id)add remove:(id)remove;
// declared property setter: -(void)setTrigger:(id)trigger;
// declared property getter: -(id)trigger;
// declared property setter: -(void)setSubject:(id)subject;
// declared property getter: -(id)subject;
// declared property setter: -(void)setRecurrence:(id)recurrence;
// declared property getter: -(id)recurrence;
// declared property setter: -(void)setPayload:(id)payload;
// declared property getter: -(id)payload;
// declared property setter: -(void)setLists:(id)lists;
// declared property getter: -(id)lists;
// declared property setter: -(void)setImportant:(BOOL)important;
// declared property getter: -(BOOL)important;
// declared property setter: -(void)setDueDateTimeZoneId:(id)anId;
// declared property getter: -(id)dueDateTimeZoneId;
// declared property setter: -(void)setDueDate:(id)date;
// declared property getter: -(id)dueDate;
// declared property setter: -(void)setCompleted:(BOOL)completed;
// declared property getter: -(BOOL)completed;
// declared property setter: -(void)setAlternateSubject:(id)subject;
// declared property getter: -(id)alternateSubject;
-(id)encodedClassName;
-(id)groupIdentifier;
@end

