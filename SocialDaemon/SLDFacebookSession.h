/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SocialDaemon.framework/SocialDaemon
 */

#import "SLFacebookRemoteSession.h"
#import "SLDSession.h"
#import "SLDFacebookPostUploadDelegate.h"

@class ACAccountStore, NSString, NSMutableSet;

@interface SLDFacebookSession : SLDSession <SLFacebookRemoteSession, SLDFacebookPostUploadDelegate> {
	NSString* _activeAccountIdentifier;
@private
	NSMutableSet* _postUploads;
	ACAccountStore* _accountStore;
}
@property(readonly, assign) ACAccountStore* accountStore;
@property(readonly, assign) NSMutableSet* postUploads;
-(void).cxx_destruct;
-(id)proxy:(id)proxy detailedSignatureForSelector:(SEL)selector;
-(id)whitelistedClassNamesForDecoding;
-(void)_playPostSound;
-(id)_privilegedAccount;
-(void)setActiveAccountIdentifier:(id)identifier;
-(void)revokeAllAccessTokensForDeviceWithCompletion:(id)completion;
-(void)revokeAccessTokenForAppWithID:(id)anId;
-(void)fetchLikeStatusForURL:(id)url flags:(id)flags completion:(id)completion;
-(void)unlikeURL:(id)url completion:(id)completion;
-(void)likeURL:(id)url completion:(id)completion;
-(void)_uploadPost:(id)post withSourceAppIdentifier:(id)sourceAppIdentifier suppressAlerts:(BOOL)alerts trackPostStatus:(BOOL)status completion:(id)completion;
-(void)uploadPost:(id)post suppressAlerts:(id)alerts withPostCompletion:(id)postCompletion;
-(void)uploadPost:(id)post forPID:(id)pid withXPCTransferCompletion:(id)xpctransferCompletion;
-(void)uploadPost:(id)post withXPCTransferCompletion:(id)xpctransferCompletion;
-(void)finishedPostUpload:(id)upload withSuccess:(BOOL)success;
-(id)_tokenSecret;
-(void)doTestCallWithDict:(id)dict withHandler:(id)handler;
-(void)tokenSecretForEntitledClientWithHandler:(id)handler;
-(void)accountForEntitledClientWithHandler:(id)handler;
-(void)accountsAvailabilityWithHandler:(id)handler;
// declared property getter: -(id)postUploads;
// declared property getter: -(id)accountStore;
@end

