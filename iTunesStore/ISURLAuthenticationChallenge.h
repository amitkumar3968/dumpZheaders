/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "ISAuthenticationChallenge.h"

@class NSURLAuthenticationChallenge;

@interface ISURLAuthenticationChallenge : ISAuthenticationChallenge {
	NSURLAuthenticationChallenge* _challenge;
}
-(void)useCredential:(id)credential;
-(id)user;
-(id)sender;
-(id)password;
-(BOOL)hasPassword;
-(int)failureCount;
-(void)cancelAuthentication;
-(void)dealloc;
-(id)initWithAuthenticationChallenge:(id)authenticationChallenge;
@end

