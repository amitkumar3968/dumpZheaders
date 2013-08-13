/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSString, NSArray, NSURL, NSDate, NSNumber;

@interface SACalendarEventSearch : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSString* title;
@property(copy, nonatomic) NSString* timeZoneId;
@property(copy, nonatomic) NSDate* startDate;
@property(copy, nonatomic) NSArray* participants;
@property(copy, nonatomic) NSString* notes;
@property(copy, nonatomic) NSString* location;
@property(retain, nonatomic) NSNumber* limit;
@property(copy, nonatomic) NSURL* eventId;
@property(copy, nonatomic) NSDate* endDate;
@property(copy, nonatomic) NSURL* targetAppId;
+(id)eventSearchWithDictionary:(id)dictionary context:(id)context;
+(id)eventSearch;
-(BOOL)requiresResponse;
// declared property setter: -(void)setTitle:(id)title;
// declared property getter: -(id)title;
// declared property setter: -(void)setTimeZoneId:(id)anId;
// declared property getter: -(id)timeZoneId;
// declared property setter: -(void)setStartDate:(id)date;
// declared property getter: -(id)startDate;
// declared property setter: -(void)setParticipants:(id)participants;
// declared property getter: -(id)participants;
// declared property setter: -(void)setNotes:(id)notes;
// declared property getter: -(id)notes;
// declared property setter: -(void)setLocation:(id)location;
// declared property getter: -(id)location;
// declared property setter: -(void)setLimit:(id)limit;
// declared property getter: -(id)limit;
// declared property setter: -(void)setEventId:(id)anId;
// declared property getter: -(id)eventId;
// declared property setter: -(void)setEndDate:(id)date;
// declared property getter: -(id)endDate;
// declared property setter: -(void)setTargetAppId:(id)anId;
// declared property getter: -(id)targetAppId;
-(id)encodedClassName;
-(id)groupIdentifier;
@end

