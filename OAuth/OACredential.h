/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OAuth.framework/OAuth
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface OACredential : XXUnknownSuperclass {
	NSString* _consumerKey;
	NSString* _consumerSecret;
	NSString* _oauthToken;
	NSString* _oauthTokenSecret;
}
@property(copy, nonatomic) NSString* oauthTokenSecret;	// @synthesize=_oauthTokenSecret
@property(copy, nonatomic) NSString* oauthToken;	// @synthesize=_oauthToken
@property(copy, nonatomic) NSString* consumerSecret;	// @synthesize=_consumerSecret
@property(copy, nonatomic) NSString* consumerKey;	// @synthesize=_consumerKey
// declared property setter: -(void)setOauthTokenSecret:(id)secret;
// declared property getter: -(id)oauthTokenSecret;
// declared property setter: -(void)setOauthToken:(id)token;
// declared property getter: -(id)oauthToken;
// declared property setter: -(void)setConsumerSecret:(id)secret;
// declared property getter: -(id)consumerSecret;
// declared property setter: -(void)setConsumerKey:(id)key;
// declared property getter: -(id)consumerKey;
-(id)signingKey;
-(void)dealloc;
@end

