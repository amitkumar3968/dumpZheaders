/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VideoUpload.framework/VideoUpload
 */

#import "JSONHTTPRequestDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class JSONHTTPRequest, NSString;

@interface VUAuthenticator : XXUnknownSuperclass <JSONHTTPRequestDelegate> {
	int _authenticatorState;
	NSString* _account;
	JSONHTTPRequest* _authenticationRequest;
}
@property(readonly, assign, nonatomic) NSString* account;	// @synthesize=_account
@property(readonly, assign, nonatomic) int authenticatorState;	// @synthesize=_authenticatorState
+(id)sharedAuthenticator;
// declared property getter: -(int)authenticatorState;
// declared property getter: -(id)account;
-(void)_notifyFailure;
-(void)_notifyStateChange;
-(void)request:(id)request didFailWithError:(id)error;
-(void)request:(id)request didReceiveObject:(id)object;
-(void)invalidateAuthentication;
-(id)authenticationDialogWithTarget:(id)target action:(SEL)action;
-(void)loadCredentials;
-(void)authenticateWithUsername:(id)username password:(id)password;
@end

