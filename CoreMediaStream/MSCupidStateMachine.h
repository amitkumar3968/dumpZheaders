/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "MSStreamsProtocolDelegate.h"

@class NSMutableDictionary, MSBackoffManager, NSString;

@interface MSCupidStateMachine : XXUnknownSuperclass <MSStreamsProtocolDelegate> {
@private
	NSString* _personID;
	NSString* _manifestPath;
	NSMutableDictionary* _userManifest;
	MSBackoffManager* _streamsBackoffManager;
	MSBackoffManager* _MMCSBackoffManager;
	BOOL _hasDeactivated;
}
@property(assign, nonatomic) BOOL hasDeactivated;	// @synthesize=_hasDeactivated
@property(readonly, assign, nonatomic) NSString* personID;	// @synthesize=_personID
@property(retain, nonatomic) NSMutableDictionary* _userManifest;	// @synthesize
// declared property setter: -(void)setHasDeactivated:(BOOL)deactivated;
// declared property getter: -(BOOL)hasDeactivated;
// declared property getter: -(id)personID;
// declared property setter: -(void)set_userManifest:(id)manifest;
// declared property getter: -(id)_userManifest;
-(void).cxx_destruct;
-(void)protocol:(id)protocol didReceiveRetryAfterDate:(id)date;
-(void)_forget;
-(void)_abort;
-(void)_updateMasterManifest;
-(id)_latestNextActivityDate;
-(void)_didReceiveMMCSRetryAfterDate:(id)date;
-(void)_backoffMMCSBackoffTimer;
-(void)_resetMMCSBackoffTimer;
-(void)_didReceiveStreamsRetryAfterDate:(id)date;
-(void)_backoffStreamsBackoffTimer;
-(void)_resetStreamsBackoffTimer;
-(void)_commitUserManifest;
-(void)forget;
-(void)deactivate;
-(void)dealloc;
-(id)initWithPersonID:(id)personID;
@end

