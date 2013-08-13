/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "MSSharingManager.h"
#import "MSSharingProtocolDelegate.h"
#import "NSObject.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, NSTimer, MSSharingProtocol, NSMutableArray, MSMediaStreamDaemon, NSString, NSMutableDictionary;
@protocol MSSharingManagerDelegate;

@protocol MSSharingManager <NSObject>
@property(retain, nonatomic) NSArray* shares;
@property(readonly, assign, nonatomic) NSString* personID;
@property(assign, nonatomic) id<MSSharingManagerDelegate> delegate;
// declared property setter: -(void)setShares:(id)shares;
// declared property getter: -(id)shares;
// declared property getter: -(id)personID;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property getter: -(id)delegate;
-(void)removeShare:(id)share;
-(void)modifyShare:(id)share;
-(void)refreshCurrentShareState;
-(void)respondToInvitation:(id)invitation accept:(BOOL)accept;
-(void)sendInvitationsForShares:(id)shares;
@end

@interface MSSharingManager : XXUnknownSuperclass <MSSharingManager, MSSharingProtocolDelegate> {
@private
	NSString* _personID;
	NSString* _manifestPath;
	NSArray* _shares;
	NSMutableArray* _sharesWithLocalModifications;
	MSSharingProtocol* _protocol;
	int _state;
	BOOL _requestCurrentStateRequested;
	NSMutableArray* _invitationQueue;
	NSMutableArray* _invitationResponseQueue;
	NSMutableDictionary* _manageShareByPersonID;
	NSMutableArray* _deleteQueue;
	NSTimer* _manageShareDebounceTimer;
	id<MSSharingManagerDelegate> _delegate;
	MSMediaStreamDaemon* _daemon;
}
@property(retain, nonatomic) NSArray* shares;
@property(readonly, assign, nonatomic) NSString* personID;	// @synthesize=_personID
@property(assign, nonatomic) id<MSSharingManagerDelegate> delegate;	// @synthesize=_delegate
@property(assign, nonatomic) MSMediaStreamDaemon* daemon;	// @synthesize=_daemon
+(void)forgetPersonID:(id)anId;
+(void)abortAllActivities;
+(id)_clearInstantiatedSharingManagersByPersonID;
+(id)existingSharingManagerForPersonID:(id)personID;
+(id)sharingManagerForPersonID:(id)personID;
// declared property setter: -(void)setDaemon:(id)daemon;
// declared property getter: -(id)daemon;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property getter: -(id)delegate;
// declared property getter: -(id)personID;
-(void).cxx_destruct;
-(void)sharingProtocol:(id)protocol didFailToSendInvitations:(id)sendInvitations;
-(void)sharingProtocol:(id)protocol didReceiveAuthenticationError:(id)error;
-(void)sharingProtocol:(id)protocol didCompleteTransactionWithError:(id)error;
-(void)sharingProtocol:(id)protocol didFindShareState:(id)state;
-(void)abort;
-(void)_performNextQueuedAction;
-(void)_requestCurrentShareState;
-(void)_sendNextManagedShare;
-(void)_sendNextInvitationResponse;
-(void)_sendNextInvitation;
-(void)_sendNextDeletion;
-(id)_sharesWithLocalModifications;
-(void)refreshCurrentShareState;
-(void)removeShare:(id)share;
-(void)modifyShare:(id)share;
-(void)_shareDebounceTimerDidFire:(id)_shareDebounceTimer;
-(void)respondToInvitation:(id)invitation accept:(BOOL)accept;
-(void)sendInvitationsForShares:(id)shares;
// declared property setter: -(void)setShares:(id)shares;
// declared property getter: -(id)shares;
-(void)dealloc;
-(id)initWithPersonID:(id)personID baseURL:(id)url;
@end
