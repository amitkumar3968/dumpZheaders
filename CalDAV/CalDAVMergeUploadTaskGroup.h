/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class CalDAVBulkUploadTaskGroup;
@protocol CalDAVCalendar, CalDAVPrincipal;

@interface CalDAVMergeUploadTaskGroup : XXUnknownSuperclass {
	id<CalDAVCalendar> _calendar;
	id<CalDAVPrincipal> _principal;
	CalDAVBulkUploadTaskGroup* _uploadTaskGroup;
}
-(void)cancelTaskGroup;
-(void)startTaskGroup;
-(id)dataContentType;
-(void)dealloc;
-(id)initWithCalendar:(id)calendar principal:(id)principal accountInfoProvider:(id)provider taskManager:(id)manager;
@end

