/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

#import "NSCopying.h"
#import "FTServices-Structs.h"
#import "FTiMessageMessage.h"

@class NSArray, NSData, NSString;

@interface FTiMessagePeerMessage : FTiMessageMessage <NSCopying> {
	NSData* _targetToken;
	NSString* _targetPeerID;
	NSString* _sourcePeerID;
	NSData* _targetSessionToken;
	NSArray* _targetPeers;
	NSString* _messageID;
}
@property(copy) NSArray* targetPeers;	// @synthesize=_targetPeers
@property(copy) NSString* messageID;	// @synthesize=_messageID
@property(copy) NSData* targetToken;	// @synthesize=_targetToken
@property(copy) NSString* sourcePeerID;	// @synthesize=_sourcePeerID
@property(copy) NSString* targetPeerID;	// @synthesize=_targetPeerID
@property(copy) NSData* targetSessionToken;	// @synthesize=_targetSessionToken
// declared property setter: -(void)setMessageID:(id)anId;
// declared property getter: -(id)messageID;
// declared property setter: -(void)setTargetPeers:(id)peers;
// declared property getter: -(id)targetPeers;
// declared property setter: -(void)setTargetSessionToken:(id)token;
// declared property getter: -(id)targetSessionToken;
// declared property setter: -(void)setSourcePeerID:(id)anId;
// declared property getter: -(id)sourcePeerID;
// declared property setter: -(void)setTargetPeerID:(id)anId;
// declared property getter: -(id)targetPeerID;
// declared property setter: -(void)setTargetToken:(id)token;
// declared property getter: -(id)targetToken;
-(id)messageBody;
-(id)requiredKeys;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)zone;
-(id)init;
@end

