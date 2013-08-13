/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import "AARequest.h"

@class AAAccount, AASigningSession, NSDictionary;

@interface AASetupAssistantCreateRequest : AARequest {
	NSDictionary* appleIDParameters;
	AASigningSession* signingSession;
	AAAccount* _account;
}
+(Class)responseClass;
-(void).cxx_destruct;
-(id)urlRequest;
-(id)urlString;
-(id)bodyDictionary;
-(id)initWithAccount:(id)account withAppleIDParameters:(id)appleIDParameters signingSession:(id)session;
@end

