/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray;
@protocol YTAuthenticatorDelegate;

@interface YTAuthenticator : XXUnknownSuperclass {
	id<YTAuthenticatorDelegate> _delegate;
	NSMutableArray* _deferredRequests;
	int _accountAuthState;
	int _deviceAuthState;
}
+(id)sharedAuthenticator;
+(id)authenticationDialogWithTarget:(id)target action:(SEL)action;
-(BOOL)loadStoredCredentials;
-(BOOL)isAccountAuthenticated;
-(BOOL)isWaitingForAuthentication;
-(BOOL)cachedCredentialsValid;
-(void)clearAccountInfo;
-(void)invalidateToken;
-(void)addAuthenticationHeadersToRequest:(id)request accountAuthRequired:(BOOL)required;
-(void)_removeDefferredRequests;
-(void)_completeAuthenticationForDeferredRequests;
-(void)userCancelledAccountAuthentication;
-(void)setAccount:(id)account password:(id)password;
-(void)_failedToAuthenticateAccount:(id)authenticateAccount;
-(void)_didAuthenticateAccount:(id)account;
-(void)_removeAccountAuthenticationObservers;
-(void)_addAccountAuthenticationObserers;
-(void)_failedToAuthenticateDevice:(id)authenticateDevice;
-(void)_didAuthenticateDevice:(id)device;
-(void)_removeDeviceAuthenticationObservers;
-(void)_addDeviceAuthenticationObserers;
-(void)_addDeferredRequest:(id)request accountAuthRequired:(BOOL)required;
-(void)setDelegate:(id)delegate;
-(void)dealloc;
-(id)init;
@end

