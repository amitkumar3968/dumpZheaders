/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import "Message-Structs.h"
#import "MFSASLAuthenticator.h"


@interface _MFNTLMAuthenticator : MFSASLAuthenticator {
	NtlmGenerator* _ntlmGeneratorRef;
	long _ntlmError;
}
-(id)responseForServerData:(id)serverData;
-(void)setAuthenticationState:(int)state;
-(void)dealloc;
@end

