/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDateComponents;

@interface CalDAVCalendarQueryTask : XXUnknownSuperclass {
	BOOL _syncEvents;
	BOOL _syncTodos;
	NSDateComponents* _eventFilterStartDate;
	NSDateComponents* _eventFilterEndDate;
	NSDateComponents* _todoFilterStartDate;
	NSDateComponents* _todoFilterEndDate;
}
@property(retain) NSDateComponents* todoFilterEndDate;	// @synthesize=_todoFilterEndDate
@property(retain) NSDateComponents* todoFilterStartDate;	// @synthesize=_todoFilterStartDate
@property(retain) NSDateComponents* eventFilterEndDate;	// @synthesize=_eventFilterEndDate
@property(retain) NSDateComponents* eventFilterStartDate;	// @synthesize=_eventFilterStartDate
@property(assign) BOOL syncTodos;	// @synthesize=_syncTodos
@property(assign) BOOL syncEvents;	// @synthesize=_syncEvents
// declared property setter: -(void)setTodoFilterEndDate:(id)date;
// declared property getter: -(id)todoFilterEndDate;
// declared property setter: -(void)setTodoFilterStartDate:(id)date;
// declared property getter: -(id)todoFilterStartDate;
// declared property setter: -(void)setEventFilterEndDate:(id)date;
// declared property getter: -(id)eventFilterEndDate;
// declared property setter: -(void)setEventFilterStartDate:(id)date;
// declared property getter: -(id)eventFilterStartDate;
// declared property setter: -(void)setSyncTodos:(BOOL)todos;
// declared property getter: -(BOOL)syncTodos;
// declared property setter: -(void)setSyncEvents:(BOOL)events;
// declared property getter: -(BOOL)syncEvents;
-(id)requestBody;
-(void)_appendComponentFiltersToXMLData:(id)xmldata;
-(void)_appendTimeRangeFilterToXMLData:(id)xmldata startDate:(id)date endDate:(id)date3;
-(id)_icsDateStringForNSDateComponents:(id)nsdateComponents;
-(id)httpMethod;
-(id)description;
-(void)dealloc;
@end
