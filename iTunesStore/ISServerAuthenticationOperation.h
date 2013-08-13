/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "ISOperation.h"

@class NSNumber, SSAuthenticationContext, NSURL, ISDialog;

@interface ISServerAuthenticationOperation : ISOperation {
	NSNumber* _authenticatedAccountDSID;
	SSAuthenticationContext* _authenticationContext;
	ISDialog* _dialog;
	NSURL* _redirectURL;
}
@property(retain) NSURL* redirectURL;	// @synthesize=_redirectURL
@property(retain) NSNumber* authenticatedAccountDSID;	// @synthesize=_authenticatedAccountDSID
@property(retain) ISDialog* dialog;	// @synthesize=_dialog
@property(retain) SSAuthenticationContext* authenticationContext;	// @synthesize=_authenticationContext
// declared property setter: -(void)setRedirectURL:(id)url;
// declared property getter: -(id)redirectURL;
// declared property setter: -(void)setDialog:(id)dialog;
// declared property getter: -(id)dialog;
// declared property setter: -(void)setAuthenticatedAccountDSID:(id)dsid;
// declared property getter: -(id)authenticatedAccountDSID;
// declared property setter: -(void)setAuthenticationContext:(id)context;
// declared property getter: -(id)authenticationContext;
-(BOOL)_shouldAuthenticateForButton:(id)button;
-(BOOL)_handleSelectedButton:(id)button;
-(BOOL)_copySelectedButton:(id*)button returningError:(id*)error;
-(id)_copyButtonForDialogSkip;
-(id)_copyAuthenticationContext;
-(BOOL)_copyAccountIdentifier:(id*)identifier returningError:(id*)error;
-(void)run;
-(void)dealloc;
@end
