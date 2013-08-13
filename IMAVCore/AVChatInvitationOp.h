/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

#import "AVChatNegotiationOp.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface AVChatInvitationOp : AVChatNegotiationOp {
	NSMutableDictionary* _inviteesInfo;
	BOOL _audioOnly;
}
-(void)main;
-(void)didFinish;
-(void)createChildOperations;
-(void)dealloc;
-(id)initWithParticipant:(id)participant conferenceID:(id)anId;
@end
