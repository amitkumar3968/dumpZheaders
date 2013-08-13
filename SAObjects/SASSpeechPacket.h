/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAServerBoundCommand.h"
#import "SABaseCommand.h"

@class NSData, NSString, NSArray;

@interface SASSpeechPacket : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString* refId;	// @dynamic
@property(copy, nonatomic) NSString* aceId;	// @dynamic
@property(copy, nonatomic) NSArray* packets;
@property(assign, nonatomic) int packetNumber;
@property(copy, nonatomic) NSData* data;
+(id)speechPacketWithDictionary:(id)dictionary context:(id)context;
+(id)speechPacket;
// declared property setter: -(void)setPackets:(id)packets;
// declared property getter: -(id)packets;
// declared property setter: -(void)setPacketNumber:(int)number;
// declared property getter: -(int)packetNumber;
// declared property setter: -(void)setData:(id)data;
// declared property getter: -(id)data;
-(id)encodedClassName;
-(id)groupIdentifier;
@end

