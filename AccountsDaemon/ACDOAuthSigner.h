/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "XPCProxyTarget.h"
#import "ACDOAuthSignerProtocol.h"

@class ACDClient, ACDClientAuthorizationManager, ACDDatabase;

@interface ACDOAuthSigner : XXUnknownSuperclass <ACDOAuthSignerProtocol, XPCProxyTarget> {
	ACDDatabase* _database;
	ACDClient* _client;
	ACDClientAuthorizationManager* _authorizationManager;
	BOOL _shouldIncludeAppIdInRequest;
}
-(void).cxx_destruct;
-(id)proxy:(id)proxy detailedSignatureForSelector:(SEL)selector;
-(id)csForAccountType:(id)accountType;
-(id)ckForAccountType:(id)accountType;
-(void)_presentAccessRequestForAccountType:(id)accountType client:(id)client withHandler:(id)handler;
-(BOOL)_permissionGrantedForBundleID:(id)bundleID onAccountType:(id)type;
-(void)signURLRequest:(id)request withAccount:(id)account applicationID:(id)anId timestamp:(id)timestamp handler:(id)handler;
-(id)signedRequest:(id)request withAccount:(id)account applicationID:(id)anId timestamp:(id)timestamp;
-(void)signURLRequest:(id)request withAccount:(id)account callingPID:(id)pid timestamp:(id)timestamp handler:(id)handler;
-(id)_signedRequest:(id)request withAccountObject:(id)accountObject applicationID:(id)anId timestamp:(id)timestamp;
-(void)setClientBundleID:(id)anId withHandler:(id)handler;
-(void)setShouldIncludeAppIdInRequest:(id)includeAppIdInRequest;
-(id)initWithClient:(id)client database:(id)database;
@end

