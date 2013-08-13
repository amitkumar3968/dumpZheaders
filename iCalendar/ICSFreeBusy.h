/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import "ICSComponent.h"

@class NSArray, ICSDate, NSString, ICSUserAddress, ICSDuration;

@interface ICSFreeBusy : ICSComponent {
}
@property(retain) NSString* x_calendarserver_mask_uid;
@property(retain) NSString* uid;	// @dynamic
@property(retain) NSString* summary;	// @dynamic
@property(retain) ICSUserAddress* organizer;	// @dynamic
@property(retain) NSArray* freebusy;
@property(retain) ICSDuration* duration;	// @dynamic
@property(retain) ICSDate* dtstart;	// @dynamic
@property(retain) ICSDate* dtstamp;	// @dynamic
@property(retain) ICSDate* dtend;	// @dynamic
@property(retain) ICSDate* created;	// @dynamic
@property(retain) NSArray* attendee;	// @dynamic
+(id)name;
// declared property setter: -(void)setX_calendarserver_mask_uid:(id)uid;
// declared property getter: -(id)x_calendarserver_mask_uid;
// declared property setter: -(void)setFreebusy:(id)freebusy;
// declared property getter: -(id)freebusy;
@end
