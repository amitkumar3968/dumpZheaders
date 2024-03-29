/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceSerializable.h"
#import "AceObject.h"

@class SACalendar, NSNumber, SAUIAppPunchOut, NSURL;

@interface SARestaurantOpening : AceObject <SAAceSerializable> {
}
@property(retain, nonatomic) SACalendar* timeSlot;
@property(copy, nonatomic) NSNumber* partySize;
@property(retain, nonatomic) SAUIAppPunchOut* makeReservationPunchOut;
@property(copy, nonatomic) NSURL* bookingId;
+(id)openingWithDictionary:(id)dictionary context:(id)context;
+(id)opening;
// declared property setter: -(void)setTimeSlot:(id)slot;
// declared property getter: -(id)timeSlot;
// declared property setter: -(void)setPartySize:(id)size;
// declared property getter: -(id)partySize;
// declared property setter: -(void)setMakeReservationPunchOut:(id)anOut;
// declared property getter: -(id)makeReservationPunchOut;
// declared property setter: -(void)setBookingId:(id)anId;
// declared property getter: -(id)bookingId;
-(id)encodedClassName;
-(id)groupIdentifier;
@end

