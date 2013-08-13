/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Conference.framework/Conference
 */



@protocol IMAVInvitationControllerDelegate
@optional
-(void)avChatStateChangedFrom:(unsigned)from to:(unsigned)to;
-(BOOL)conference:(id)conference requiresWiFiAssociationForInvitationFromIMHandle:(id)imhandle isWiFiEnabled:(BOOL)enabled foundActiveWiFi:(BOOL)fi;
-(void)avChatStateChangedFrom:(unsigned)from to:(unsigned)to reason:(unsigned)reason;
-(void)conference:(id)conference handleMissedInvitationFromIMHandle:(id)imhandle;
-(void)conference:(id)conference receivedCancelledInvitationFromIMHandle:(id)imhandle;
-(void)conference:(id)conference receivedInvitationFromIMHandle:(id)imhandle;
@end

