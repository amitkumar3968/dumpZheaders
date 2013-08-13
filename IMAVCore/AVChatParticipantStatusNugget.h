/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "NSCoding.h"

@class NSString, NSDictionary;

__attribute__((visibility("hidden")))
@interface AVChatParticipantStatusNugget : XXUnknownSuperclass <NSCoding> {
	NSString* _imHandleName;
	NSString* _imHandleID;
	NSString* _invitedBy;
	NSString* _vcPartyID;
	BOOL _sendingAudio;
	BOOL _sendingVideo;
	BOOL _usingICE;
	int _ardRole;
	unsigned _state;
	unsigned _newState;
	int _error;
	unsigned _reason;
}
@property(readonly, assign, nonatomic) unsigned reason;
@property(readonly, assign, nonatomic) int error;
@property(readonly, assign, nonatomic) unsigned newState;
@property(readonly, assign, nonatomic) unsigned state;
@property(readonly, assign, nonatomic) int ardRole;
@property(readonly, assign, nonatomic) BOOL isUsingICE;
@property(readonly, assign, nonatomic) BOOL sendingVideo;
@property(readonly, assign, nonatomic) BOOL sendingAudio;
@property(readonly, assign, nonatomic) NSString* vcPartyID;
@property(readonly, assign, nonatomic) NSString* invitedBy;
@property(readonly, assign, nonatomic) NSString* ID;
@property(readonly, assign, nonatomic) NSString* name;
@property(readonly, assign, nonatomic) NSDictionary* dictionaryDescription;
+(id)nuggetWithDictionaryDescription:(id)dictionaryDescription;
+(id)filterNuggets:(id)nuggets filterEndedState:(BOOL)state convertFromDict:(BOOL)dict;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
-(void)setVCPartyID:(id)anId;
// declared property getter: -(unsigned)reason;
// declared property getter: -(int)error;
// declared property getter: -(unsigned)newState;
// declared property getter: -(unsigned)state;
// declared property getter: -(int)ardRole;
// declared property getter: -(BOOL)isUsingICE;
// declared property getter: -(BOOL)sendingVideo;
// declared property getter: -(BOOL)sendingAudio;
// declared property getter: -(id)vcPartyID;
// declared property getter: -(id)invitedBy;
// declared property getter: -(id)ID;
// declared property getter: -(id)name;
-(void)dealloc;
-(id)description;
// declared property getter: -(id)dictionaryDescription;
-(void)_configureWithDictionaryDescription:(id)dictionaryDescription;
-(id)initWithParticipant:(id)participant;
@end
