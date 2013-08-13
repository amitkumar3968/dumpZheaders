/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import "CalDAVOperation.h"

@class NSError, NSString;
@protocol CalDAVCalendar, CalDAVCalendarSyncDelegate;

@interface CalDAVCalendarSyncOperation : CalDAVOperation {
	BOOL _getScheduleTags;
	BOOL _getScheduleChanges;
	NSError* _savedError;
	NSString* _nextCtag;
	id<CalDAVCalendar> _calendar;
}
@property(assign) BOOL getScheduleChanges;	// @synthesize=_getScheduleChanges
@property(assign) BOOL getScheduleTags;	// @synthesize=_getScheduleTags
@property(assign, nonatomic) id<CalDAVCalendarSyncDelegate> delegate;	// @dynamic
// declared property setter: -(void)setGetScheduleChanges:(BOOL)changes;
// declared property getter: -(BOOL)getScheduleChanges;
// declared property setter: -(void)setGetScheduleTags:(BOOL)tags;
// declared property getter: -(BOOL)getScheduleTags;
-(void)containerSyncTask:(id)task completedWithNewCTag:(id)newCTag newSyncToken:(id)token addedOrModified:(id)modified removed:(id)removed error:(id)error;
-(void)containerSyncTask:(id)task retrievedAddedOrModifiedActions:(id)actions removed:(id)removed;
-(BOOL)syncDeleteTask:(id)task error:(id)error;
-(BOOL)syncPutTask:(id)task completedWithNewETag:(id)newETag error:(id)error;
-(BOOL)setLocalScheduleTag:(id)tag forItemWithURL:(id)url inFolderWithURL:(id)url3;
-(BOOL)setLocalETag:(id)tag forItemWithURL:(id)url inFolderWithURL:(id)url3;
-(id)copyAllLocalURLsInFolderWithURL:(id)url;
-(id)copyLocalETagsForURLs:(id)urls inFolderWithURL:(id)url;
-(void)_syncEventsForMerge;
-(void)_processAddedOrModified:(id)modified removed:(id)removed;
-(void)syncCalendar;
-(void)_reallySyncCalendar;
-(id)_distantFutureEndDate;
-(void)_finishWithError:(id)error;
-(void)dealloc;
-(id)initWithPrincipal:(id)principal calendar:(id)calendar nextCtag:(id)ctag;
@end
