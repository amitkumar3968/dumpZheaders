/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Conference.framework/Conference
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "Conference-Structs.h"
#import "IMAVControllerDelegate.h"
#import "IMAVInvitationControllerDelegate.h"

@class NSMutableArray, IMAVChat;

@interface CNFConferenceController : XXUnknownSuperclass <IMAVControllerDelegate, IMAVInvitationControllerDelegate> {
@private
	BOOL _isConnected;
	int _type;
	IMAVChat* _activeAVChat;
	NSMutableArray* _avChatList;
}
@property(readonly, assign, nonatomic) int type;	// @synthesize=_type
@property(readonly, assign, nonatomic) CGSize remoteCameraAspectRatio;
@property(readonly, assign, nonatomic) unsigned remoteCameraOrientation;
@property(readonly, assign, nonatomic) unsigned remoteCameraType;
@property(readonly, assign, nonatomic) unsigned localCameraType;
@property(readonly, assign, nonatomic) BOOL isFullConferenceCapable;	// @dynamic
@property(readonly, assign, nonatomic) IMAVChat* avChat;	// @synthesize=_activeAVChat
@property(assign) BOOL faceTimePaused;	// converted property
@property(assign) BOOL faceTimeMuted;	// converted property
+(CFPhoneNumberRef)newPhoneNumberRefForDestinationId:(id)destinationId useNetworkCountryCode:(BOOL)code;
+(BOOL)disconnect;
+(BOOL)connect;
+(int)conferenceControllerType;
+(id)sharedInstance;
// declared property getter: -(int)type;
// declared property getter: -(id)avChat;
-(id)currentCallConnectedDate;
-(id)currentCallRemoteUserId;
-(void)activateFaceTime;
-(int)activationState;
-(void)faceTimeHistoryChanged:(id)changed;
-(BOOL)havePreviouslyConferencedWithID:(id)anId;
-(void)avChatStateChanged:(id)changed;
-(void)_handleConferenceEnded:(id)ended withReason:(unsigned)reason withError:(int)error;
-(void)_handleConferenceConnecting:(id)connecting;
-(void)avChatStateChangedFrom:(unsigned)from to:(unsigned)to reason:(unsigned)reason;
-(void)conference:(id)conference receivedCancelledInvitationFromIMHandle:(id)imhandle;
-(void)conference:(id)conference handleMissedInvitationFromIMHandle:(id)imhandle;
-(void)conference:(id)conference receivedInvitationFromIMHandle:(id)imhandle;
-(void)inviteFailedFromIMHandle:(id)imhandle reason:(int)reason;
-(void)invitedToIMAVChat:(id)imavchat;
-(BOOL)faceTimeInvitationExists;
-(BOOL)inFaceTime;
-(BOOL)_chat:(id)chat isCrossInvitationWithChat:(id)chat2;
-(unsigned)_currentChatState;
-(void)endFaceTime;
-(CGSize)localCameraAspectRatioForOrientation:(unsigned)orientation;
// declared property getter: -(CGSize)remoteCameraAspectRatio;
// declared property getter: -(unsigned)remoteCameraOrientation;
// declared property getter: -(unsigned)remoteCameraType;
// declared property getter: -(unsigned)localCameraType;
// converted property setter: -(void)setFaceTimePaused:(BOOL)paused;
// converted property getter: -(BOOL)faceTimePaused;
// converted property setter: -(void)setFaceTimeMuted:(BOOL)muted;
// converted property getter: -(BOOL)faceTimeMuted;
-(void)declineFaceTimeInvitationForConferenceID:(id)conferenceID fromHandle:(id)handle;
-(void)acceptFaceTimeInvitationForConferenceID:(id)conferenceID fromHandle:(id)handle;
-(id)avChatForConferenceID:(id)conferenceID;
-(id)sendFaceTimeInvitationTo:(id)to isVideo:(BOOL)video;
-(id)sendFaceTimeInvitationTo:(id)to;
-(BOOL)canSendFaceTimeInvitationTo:(id)to;
-(BOOL)validFaceTimeAccountExistsForDestinationID:(id)destinationID;
-(id)remoteParticipant;
-(BOOL)_activeChatExists;
-(void)_handleEndAVChat:(id)chat withReason:(unsigned)reason error:(int)error;
-(void)_handleAVChatStateChangeFromState:(unsigned)state to:(unsigned)to withReason:(unsigned)reason;
-(void)_handleCanceledInvitationForConferenceID:(id)conferenceID fromHandle:(id)handle;
-(void)_handleInvitationForConferenceID:(id)conferenceID fromHandle:(id)handle;
-(BOOL)faceTimeIsAvailable;
-(BOOL)isInvitationListener;
// declared property getter: -(BOOL)isFullConferenceCapable;
-(void)_cleanUpAfterAVChat;
-(id)_imHandleFromURL:(id)url;
-(id)_imHandleFromID:(id)anId countryCode:(id)code;
-(id)_countryCode;
-(void)setNeedsPushReliability:(BOOL)reliability;
-(void)disconnectFromService;
-(void)iChatAgentDisconnected;
-(void)iChatAgentConnected;
-(void)connectToService;
-(void)dealloc;
-(id)_initWithType:(int)type;
-(id)init;
@end

