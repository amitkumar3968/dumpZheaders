/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface AFSpeechRequestOptions : XXUnknownSuperclass {
@private
	int _event;
	NSString* _btDeviceAddress;
	BOOL _isEyesFree;
}
@property(assign, nonatomic) BOOL isEyesFree;	// @synthesize=_isEyesFree
@property(copy, nonatomic) NSString* btDeviceAddress;	// @synthesize=_btDeviceAddress
@property(assign, nonatomic) int activationEvent;	// @synthesize=_event
// declared property setter: -(void)setIsEyesFree:(BOOL)free;
// declared property getter: -(BOOL)isEyesFree;
// declared property setter: -(void)setBtDeviceAddress:(id)address;
// declared property getter: -(id)btDeviceAddress;
// declared property setter: -(void)setActivationEvent:(int)event;
// declared property getter: -(int)activationEvent;
-(void).cxx_destruct;
-(id)initWithDKPlistRepresentation:(id)dkplistRepresentation;
-(id)dkPlistRepresentation;
-(id)initWithActivationEvent:(int)activationEvent;
@end

