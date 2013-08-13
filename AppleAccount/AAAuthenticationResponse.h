/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import "AAResponse.h"

@class NSString, NSDictionary;

@interface AAAuthenticationResponse : AAResponse {
	NSDictionary* _tokens;
	NSDictionary* _appleAccount;
}
@property(readonly, assign, nonatomic) NSString* personID;
@property(readonly, assign, nonatomic) NSString* authToken;
@property(readonly, assign, nonatomic) NSString* fmipToken;
-(void).cxx_destruct;
// declared property getter: -(id)personID;
// declared property getter: -(id)authToken;
// declared property getter: -(id)fmipToken;
-(id)initWithHTTPResponse:(id)httpresponse data:(id)data;
@end
