/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import "CalDAVOperation.h"

@class NSMutableDictionary, NSError;
@protocol CalDAVCalendarPropertyRefreshDelegate;

@interface CalDAVCalendarPropertyRefreshOperation : CalDAVOperation {
	NSError* _savedError;
	NSMutableDictionary* _ctags;
	BOOL _didFinish;
	BOOL _didMakeCalendars;
	BOOL _isSecondRefresh;
	int _nextCalendarOrder;
}
@property(assign, nonatomic) id<CalDAVCalendarPropertyRefreshDelegate> delegate;	// @dynamic
-(void)containerInfoTask:(id)task completedWithContainers:(id)containers error:(id)error;
-(void)_getDefaultCalendarsTasksIfNeededForPrincipal:(id)principal tasks:(id)tasks;
-(id)_getDefaultMkCalendarForPrincipalTask:(id)principalTask isEventCalendar:(BOOL)calendar;
-(void)_continueHandleContainerInfoTask:(id)task completedWithContainers:(id)containers error:(id)error;
-(id)_getMkcalendarTaskForCalendar:(id)calendar;
-(id)_generateTimeZoneString:(id)string;
-(id)_getSetPropertyStringTask:(id)task forName:(id)name andNamespace:(id)aNamespace atURL:(id)url;
-(int)_sharingStatusForContainer:(id)container;
-(void)refreshCalendarProperties;
-(void)_prepareCalendarsBeforeRefresh;
-(void)_handleCalendarPublish;
-(void)_reallyRefreshCalendarProperties;
-(void)_finishRefresh;
-(void)dealloc;
@end

