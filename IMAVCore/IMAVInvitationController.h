/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface IMAVInvitationController : XXUnknownSuperclass {
}
+(id)curentAVChatConnectedDate;
+(id)curentAVChatRemoteUserID;
+(unsigned)currentAVChatEndedReason;
+(unsigned)currentAVChatState;
+(id)delegate;
+(void)setDelegate:(id)delegate;
+(void)sendResponse:(unsigned)response toInvitationRequestFromBuddy:(id)buddy forConference:(id)conference;
+(void)declineInvitationRequestFromBuddy:(id)buddy forConference:(id)conference;
+(void)acceptInvitationRequestFromBuddy:(id)buddy forConference:(id)conference;
+(void)setupIMAVInvitationController;
+(void)_markSetup;
@end

