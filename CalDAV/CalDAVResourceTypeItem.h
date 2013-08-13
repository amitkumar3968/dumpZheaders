/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class CoreDAVItemWithNoChildren;

@interface CalDAVResourceTypeItem : XXUnknownSuperclass {
	CoreDAVItemWithNoChildren* _calendar;
	CoreDAVItemWithNoChildren* _scheduleInbox;
	CoreDAVItemWithNoChildren* _scheduleOutbox;
	CoreDAVItemWithNoChildren* _notification;
	CoreDAVItemWithNoChildren* _subscribed;
	CoreDAVItemWithNoChildren* _sharedOwner;
}
@property(retain) CoreDAVItemWithNoChildren* sharedOwner;	// @synthesize=_sharedOwner
@property(retain) CoreDAVItemWithNoChildren* subscribed;	// @synthesize=_subscribed
@property(retain) CoreDAVItemWithNoChildren* notification;	// @synthesize=_notification
@property(retain) CoreDAVItemWithNoChildren* scheduleOutbox;	// @synthesize=_scheduleOutbox
@property(retain) CoreDAVItemWithNoChildren* scheduleInbox;	// @synthesize=_scheduleInbox
@property(retain) CoreDAVItemWithNoChildren* calendar;	// @synthesize=_calendar
// declared property setter: -(void)setSharedOwner:(id)owner;
// declared property getter: -(id)sharedOwner;
// declared property setter: -(void)setSubscribed:(id)subscribed;
// declared property getter: -(id)subscribed;
// declared property setter: -(void)setNotification:(id)notification;
// declared property getter: -(id)notification;
// declared property setter: -(void)setScheduleOutbox:(id)outbox;
// declared property getter: -(id)scheduleOutbox;
// declared property setter: -(void)setScheduleInbox:(id)inbox;
// declared property getter: -(id)scheduleInbox;
// declared property setter: -(void)setCalendar:(id)calendar;
// declared property getter: -(id)calendar;
-(void)write:(id)write;
-(id)copyParseRules;
-(id)description;
-(void)dealloc;
-(id)initWithNameSpace:(id)nameSpace andName:(id)name;
@end
