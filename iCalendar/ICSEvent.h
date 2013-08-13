/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import "ICSComponent.h"

@class NSArray, ICSDate, ICSUserAddress, NSString, NSURL, ICSStructuredLocation, ICSDuration;

@interface ICSEvent : ICSComponent {
}
@property(retain) NSArray* conferences;	// @dynamic
@property(retain) ICSStructuredLocation* x_apple_structured_location;	// @dynamic
@property(retain) NSString* x_calendarserver_private_comment;
@property(retain) NSArray* x_calendarserver_attendee_comment;
@property(assign) BOOL x_wr_rsvpneeded;	// @dynamic
@property(assign) BOOL x_wr_itipstatusml;	// @dynamic
@property(assign) BOOL x_wr_itipstatusattendeeml;	// @dynamic
@property(assign) BOOL x_wr_itipalreadysent;	// @dynamic
@property(assign) BOOL x_apple_needs_reply;	// @dynamic
@property(assign) BOOL x_apple_ignore_on_restore;	// @dynamic
@property(assign) BOOL x_apple_dontschedule;
@property(assign) int x_apple_ews_busystatus;
@property(retain) NSString* x_apple_ews_permission;	// @dynamic
@property(assign) BOOL x_apple_ews_needsserverconfirmation;	// @dynamic
@property(retain) NSString* x_apple_ews_itemid;	// @dynamic
@property(retain) NSString* x_apple_ews_changekey;	// @dynamic
@property(retain) NSString* x_apple_dropbox;	// @dynamic
@property(retain) NSURL* url;	// @dynamic
@property(retain) NSString* uid;	// @dynamic
@property(assign) int transp;
@property(retain) NSString* summary;	// @dynamic
@property(assign) int status;	// @dynamic
@property(retain) NSArray* rrule;	// @dynamic
@property(retain) ICSDate* recurrence_id;	// @dynamic
@property(retain) NSArray* rdate;	// @dynamic
@property(assign) unsigned sequence;	// @dynamic
@property(retain) ICSUserAddress* organizer;	// @dynamic
@property(retain) NSString* location;	// @dynamic
@property(retain) ICSDate* last_modified;	// @dynamic
@property(retain) NSArray* exrule;	// @dynamic
@property(retain) NSArray* exdate;	// @dynamic
@property(retain) ICSDuration* duration;	// @dynamic
@property(readonly, assign) BOOL isAllDay;	// @dynamic
@property(retain) ICSDate* dtstart;	// @dynamic
@property(retain) ICSDate* dtstamp;	// @dynamic
@property(retain) ICSDate* dtend;	// @dynamic
@property(retain) NSString* description;	// @dynamic
@property(retain) ICSDate* created;	// @dynamic
@property(assign) int classification;	// @dynamic
@property(retain) NSArray* attendee;	// @dynamic
@property(retain) NSArray* attach;	// @dynamic
+(id)name;
-(BOOL)isDefaultAlarmDeleted;
// declared property setter: -(void)setX_apple_ews_busystatus:(int)busystatus;
// declared property getter: -(int)x_apple_ews_busystatus;
// declared property getter: -(BOOL)x_wr_rsvpneeded;
// declared property setter: -(void)setX_wr_rsvpneeded:(BOOL)rsvpneeded;
// declared property getter: -(BOOL)x_wr_itipstatusml;
// declared property setter: -(void)setX_wr_itipstatusml:(BOOL)itipstatusml;
// declared property getter: -(BOOL)x_wr_itipstatusattendeeml;
// declared property setter: -(void)setX_wr_itipstatusattendeeml:(BOOL)itipstatusattendeeml;
// declared property getter: -(BOOL)x_wr_itipalreadysent;
// declared property setter: -(void)setX_wr_itipalreadysent:(BOOL)itipalreadysent;
// declared property setter: -(void)setX_apple_needs_reply:(BOOL)reply;
// declared property getter: -(BOOL)x_apple_needs_reply;
// declared property getter: -(BOOL)x_apple_dontschedule;
// declared property setter: -(void)setX_apple_dontschedule:(BOOL)dontschedule;
// declared property setter: -(void)setX_calendarserver_private_comment:(id)comment;
// declared property getter: -(id)x_calendarserver_private_comment;
// declared property setter: -(void)setX_calendarserver_attendee_comment:(id)comment;
// declared property getter: -(id)x_calendarserver_attendee_comment;
// declared property setter: -(void)setTransp:(int)transp;
// declared property getter: -(int)transp;
-(BOOL)validate:(id*)validate;
-(void)fixComponent;
@end
