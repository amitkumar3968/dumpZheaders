/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCPayload.h"

@class NSNumber, NSString;

@interface MCGlobalHTTPProxyPayload : MCPayload {
@private
	int _proxyType;
	NSString* _proxyServer;
	NSNumber* _proxyServerPort;
	NSString* _proxyUsername;
	NSString* _proxyPassword;
	NSString* _proxyPACURLString;
	NSString* _credentialUUID;
}
@property(retain, nonatomic) NSString* credentialUUID;	// @synthesize=_credentialUUID
@property(retain, nonatomic) NSString* proxyPACURLString;	// @synthesize=_proxyPACURLString
@property(retain, nonatomic) NSString* proxyPassword;	// @synthesize=_proxyPassword
@property(retain, nonatomic) NSString* proxyUsername;	// @synthesize=_proxyUsername
@property(retain, nonatomic) NSNumber* proxyServerPort;	// @synthesize=_proxyServerPort
@property(retain, nonatomic) NSString* proxyServer;	// @synthesize=_proxyServer
@property(assign, nonatomic) int proxyType;	// @synthesize=_proxyType
+(id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;
+(id)typeStrings;
// declared property setter: -(void)setCredentialUUID:(id)uuid;
// declared property getter: -(id)credentialUUID;
// declared property setter: -(void)setProxyPACURLString:(id)string;
// declared property getter: -(id)proxyPACURLString;
// declared property setter: -(void)setProxyPassword:(id)password;
// declared property getter: -(id)proxyPassword;
// declared property setter: -(void)setProxyUsername:(id)username;
// declared property getter: -(id)proxyUsername;
// declared property setter: -(void)setProxyServerPort:(id)port;
// declared property getter: -(id)proxyServerPort;
// declared property setter: -(void)setProxyServer:(id)server;
// declared property getter: -(id)proxyServer;
// declared property setter: -(void)setProxyType:(int)type;
// declared property getter: -(int)proxyType;
-(void).cxx_destruct;
-(id)description;
-(id)subtitle2Description;
-(id)subtitle2Label;
-(id)subtitle1Description;
-(id)subtitle1Label;
-(id)stubDictionary;
-(id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id*)error;
@end

