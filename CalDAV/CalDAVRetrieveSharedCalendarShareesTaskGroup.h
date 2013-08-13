/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "CoreDAVPropFindTaskDelegate.h"

@class NSURL, NSSet;

@interface CalDAVRetrieveSharedCalendarShareesTaskGroup : XXUnknownSuperclass <CoreDAVPropFindTaskDelegate> {
	NSURL* _url;
	NSSet* _sharees;
}
@property(retain) NSURL* url;	// @synthesize=_url
@property(retain) NSSet* sharees;	// @synthesize=_sharees
// declared property setter: -(void)setSharees:(id)sharees;
// declared property getter: -(id)sharees;
// declared property setter: -(void)setUrl:(id)url;
// declared property getter: -(id)url;
-(void)task:(id)task didFinishWithError:(id)error;
-(void)startTaskGroup;
-(void)dealloc;
-(id)initWithCalendarURL:(id)calendarURL accountInfoProvider:(id)provider taskManager:(id)manager;
-(id)initWithAccountInfoProvider:(id)accountInfoProvider taskManager:(id)manager;
@end

