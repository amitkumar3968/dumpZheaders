/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableSet;
@protocol CalDAVPrincipal;

@interface CalDAVOperation : XXUnknownSuperclass {
	id<CalDAVPrincipal> _principal;
	BOOL _isCancellingTaskGroups;
	NSMutableSet* _outstandingTaskGroups;
}
@property(readonly, assign) NSMutableSet* outstandingTaskGroups;	// @synthesize=_outstandingTaskGroups
@property(readonly, assign) id<CalDAVPrincipal> principal;	// @synthesize=_principal
// declared property getter: -(id)outstandingTaskGroups;
// declared property getter: -(id)principal;
-(void)bailWithError:(id)error;
-(void)cancelTaskGroup;
-(void)_tearDownAllTaskGroupsWithBlock:(id)block;
-(void)dealloc;
-(id)initWithPrincipal:(id)principal;
-(id)init;
@end

