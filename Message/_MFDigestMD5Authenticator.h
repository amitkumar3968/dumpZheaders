/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import "MFSASLAuthenticator.h"

@class NSData;

@interface _MFDigestMD5Authenticator : MFSASLAuthenticator {
	unsigned _maxbuf : 16;
	unsigned _securityLevel : 2;
	NSData* _expectedResponse;
	void* _cryptInfo;
}
@property(assign) int securityLevel;	// converted property
-(void)setExpectedResponse:(id)response;
-(void)setCryptInfo:(void*)info;
-(void)setMaxBuffer:(unsigned)buffer;
// converted property getter: -(int)securityLevel;
// converted property setter: -(void)setSecurityLevel:(int)level;
-(id)responseForServerData:(id)serverData;
-(void)setAuthenticationState:(int)state;
-(void)dealloc;
@end

