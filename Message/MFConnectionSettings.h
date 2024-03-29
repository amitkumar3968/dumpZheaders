/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import "Message-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "NSCopying.h"

@class NSString;

@interface MFConnectionSettings : XXUnknownSuperclass <NSCopying> {
	NSString* _hostname;
	NSString* _serviceName;
	NSString* _certUIService;
	unsigned _portNumber;
	CFStringRef _connectionServiceType;
	BOOL _usesSSL;
	BOOL _usesOpportunisticSockets;
	BOOL _tryDirectSSLConnection;
	BOOL _allowsTrustPrompt;
}
@property(assign, nonatomic) BOOL allowsTrustPrompt;	// @synthesize=_allowsTrustPrompt
@property(assign, nonatomic) BOOL tryDirectSSL;	// @synthesize=_tryDirectSSLConnection
@property(assign, nonatomic) BOOL usesOpportunisticSockets;	// @synthesize=_usesOpportunisticSockets
@property(assign, nonatomic) BOOL usesSSL;	// @synthesize=_usesSSL
@property(assign, nonatomic) unsigned portNumber;	// @synthesize=_portNumber
@property(copy, nonatomic) NSString* serviceName;	// @synthesize=_serviceName
@property(copy, nonatomic) NSString* hostname;	// @synthesize=_hostname
@property(copy, nonatomic) NSString* certUIService;	// @synthesize=_certUIService
@property(assign) CFStringRef connectionServiceType;	// converted property
// declared property setter: -(void)setAllowsTrustPrompt:(BOOL)prompt;
// declared property getter: -(BOOL)allowsTrustPrompt;
// declared property setter: -(void)setTryDirectSSL:(BOOL)ssl;
// declared property getter: -(BOOL)tryDirectSSL;
// declared property setter: -(void)setUsesOpportunisticSockets:(BOOL)sockets;
// declared property getter: -(BOOL)usesOpportunisticSockets;
// declared property setter: -(void)setUsesSSL:(BOOL)ssl;
// declared property getter: -(BOOL)usesSSL;
// declared property setter: -(void)setPortNumber:(unsigned)number;
// declared property getter: -(unsigned)portNumber;
// declared property setter: -(void)setServiceName:(id)name;
// declared property getter: -(id)serviceName;
// declared property setter: -(void)setHostname:(id)hostname;
// declared property getter: -(id)hostname;
// declared property setter: -(void)setCertUIService:(id)service;
// declared property getter: -(id)certUIService;
-(id)description;
// converted property setter: -(void)setConnectionServiceType:(CFStringRef)type;
// converted property getter: -(CFStringRef)connectionServiceType;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
@end

