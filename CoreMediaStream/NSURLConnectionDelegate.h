/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "NSObject.h"


@protocol NSURLConnectionDelegate <NSObject>
@optional
-(void)connection:(id)connection didCancelAuthenticationChallenge:(id)challenge;
-(void)connection:(id)connection didReceiveAuthenticationChallenge:(id)challenge;
-(BOOL)connection:(id)connection canAuthenticateAgainstProtectionSpace:(id)space;
-(void)connection:(id)connection willSendRequestForAuthenticationChallenge:(id)authenticationChallenge;
-(BOOL)connectionShouldUseCredentialStorage:(id)connection;
-(void)connection:(id)connection didFailWithError:(id)error;
@end

