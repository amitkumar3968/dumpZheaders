/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UIAlertView, NSMutableArray, NSURLCredential;

@interface WebUIAuthenticationManager : XXUnknownSuperclass {
	NSMutableArray* _authenticationChallenges;
	NSURLCredential* _credentials;
	UIAlertView* _authenticationView;
	id _delegate;
	BOOL _isShowingAuthenticationPanel;
}
-(void)removeAuthenticationChallenge:(id)challenge;
-(void)addAuthenticationChallenge:(id)challenge displayPanel:(BOOL)panel;
-(void)addAuthenticationChallenge:(id)challenge;
-(void)setDelegate:(id)delegate;
-(void)cancelAuthentication;
-(void)dealloc;
-(void)alertView:(id)view didDismissWithButtonIndex:(int)buttonIndex;
-(void)sheetReturnKeyPressed:(id)pressed;
-(void)setShowingAuthentication:(BOOL)authentication;
-(id)authenticationChallenge;
@end

