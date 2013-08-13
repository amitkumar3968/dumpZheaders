/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "CoreDAVPropPatchTaskDelegate.h"

@class NSURL;

@interface CalDAVModifyCalendarSharingLevelTaskGroup : XXUnknownSuperclass <CoreDAVPropPatchTaskDelegate> {
	int _action;
	NSURL* _url;
	int _state;
}
@property(assign) int state;	// @synthesize=_state
@property(retain) NSURL* url;	// @synthesize=_url
@property(assign) int action;	// @synthesize=_action
// declared property setter: -(void)setState:(int)state;
// declared property getter: -(int)state;
// declared property setter: -(void)setUrl:(id)url;
// declared property getter: -(id)url;
// declared property setter: -(void)setAction:(int)action;
// declared property getter: -(int)action;
-(void)finishWithError:(id)error;
-(void)task:(id)task didFinishWithError:(id)error;
-(void)startTaskGroup;
-(id)description;
-(void)dealloc;
-(id)initWithSharingAction:(int)sharingAction atCalendarURL:(id)calendarURL accountInfoProvider:(id)provider taskManager:(id)manager;
-(id)initWithAccountInfoProvider:(id)accountInfoProvider taskManager:(id)manager;
@end
