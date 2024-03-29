/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDateComponents;
@protocol CalDAVCalendar;

@interface CalDAVContainerSyncTaskGroup : XXUnknownSuperclass {
	id<CalDAVCalendar> _calendar;
	BOOL _getScheduleTags;
	BOOL _getScheduleChanges;
	BOOL _syncEvents;
	BOOL _syncTodos;
	BOOL _supportsExtendedCalendarQuery;
	BOOL _fallbackOnMultiGetError;
	int _fetchingEtagState;
	NSDateComponents* _eventFilterStartDate;
	NSDateComponents* _eventFilterEndDate;
	NSDateComponents* _todoFilterStartDate;
	NSDateComponents* _todoFilterEndDate;
}
@property(retain) NSDateComponents* todoFilterEndDate;	// @synthesize=_todoFilterEndDate
@property(retain) NSDateComponents* todoFilterStartDate;	// @synthesize=_todoFilterStartDate
@property(retain) NSDateComponents* eventFilterEndDate;	// @synthesize=_eventFilterEndDate
@property(retain) NSDateComponents* eventFilterStartDate;	// @synthesize=_eventFilterStartDate
@property(assign) BOOL fallbackOnMultiGetError;	// @synthesize=_fallbackOnMultiGetError
@property(assign) BOOL supportsExtendedCalendarQuery;	// @synthesize=_supportsExtendedCalendarQuery
@property(assign) BOOL syncTodos;	// @synthesize=_syncTodos
@property(assign) BOOL syncEvents;	// @synthesize=_syncEvents
@property(assign) BOOL getScheduleChanges;	// @synthesize=_getScheduleChanges
@property(assign) BOOL getScheduleTags;	// @synthesize=_getScheduleTags
@property(retain) id<CalDAVCalendar> calendar;	// @synthesize=_calendar
// declared property setter: -(void)setFallbackOnMultiGetError:(BOOL)error;
// declared property getter: -(BOOL)fallbackOnMultiGetError;
// declared property setter: -(void)setTodoFilterEndDate:(id)date;
// declared property getter: -(id)todoFilterEndDate;
// declared property setter: -(void)setTodoFilterStartDate:(id)date;
// declared property getter: -(id)todoFilterStartDate;
// declared property setter: -(void)setEventFilterEndDate:(id)date;
// declared property getter: -(id)eventFilterEndDate;
// declared property setter: -(void)setEventFilterStartDate:(id)date;
// declared property getter: -(id)eventFilterStartDate;
// declared property setter: -(void)setSupportsExtendedCalendarQuery:(BOOL)query;
// declared property getter: -(BOOL)supportsExtendedCalendarQuery;
// declared property setter: -(void)setSyncTodos:(BOOL)todos;
// declared property getter: -(BOOL)syncTodos;
// declared property setter: -(void)setSyncEvents:(BOOL)events;
// declared property getter: -(BOOL)syncEvents;
// declared property setter: -(void)setGetScheduleChanges:(BOOL)changes;
// declared property getter: -(BOOL)getScheduleChanges;
// declared property setter: -(void)setGetScheduleTags:(BOOL)tags;
// declared property getter: -(BOOL)getScheduleTags;
// declared property setter: -(void)setCalendar:(id)calendar;
// declared property getter: -(id)calendar;
-(id)initWithFolderURL:(id)folderURL previousCTag:(id)tag previousSyncToken:(id)token getScheduleTags:(BOOL)tags getScheduleChanges:(BOOL)changes accountInfoProvider:(id)provider taskManager:(id)manager;
-(id)initWithFolderURL:(id)folderURL previousCTag:(id)tag previousSyncToken:(id)token actions:(id)actions getScheduleTags:(BOOL)tags getScheduleChanges:(BOOL)changes accountInfoProvider:(id)provider taskManager:(id)manager appSpecificCalendarItemClass:(Class)aClass;
-(id)copyAdditionalResourcePropertiesToFetch;
-(BOOL)shouldFetchResourceWithEtag:(id)etag propertiesToValues:(id)values;
-(id)dataContentType;
-(id)copyGetEtagTaskWithPropertiesToFind:(id)find;
-(BOOL)_shouldFetchTodosForState:(int)state;
-(BOOL)_shouldFetchEventsForState:(int)state;
-(BOOL)shouldFetchMoreETags;
-(void)applyAdditionalPropertiesFromPostTask:(id)postTask;
-(void)applyAdditionalPropertiesFromPutTask:(id)putTask;
-(id)copyPutTaskWithPayloadItem:(id)payloadItem forAction:(id)action;
-(id)copyGetTaskWithURL:(id)url;
-(id)copyMultiGetTaskWithURLs:(id)urls;
-(void)dealloc;
-(id)initWithCalendar:(id)calendar accountInfoProvider:(id)provider taskManager:(id)manager;
-(id)initWithFolderURL:(id)folderURL previousCTag:(id)tag previousSyncToken:(id)token actions:(id)actions accountInfoProvider:(id)provider taskManager:(id)manager appSpecificCalendarItemClass:(Class)aClass;
@end

