/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

#import "NSCopying.h"
#import "FTServices-Structs.h"
#import "FTIDSMessage.h"

@class NSArray, NSString;

@interface FTiMessageIDQuery : FTIDSMessage <NSCopying> {
	NSString* _uri;
	NSArray* _responseIdentities;
	NSArray* _responseSessionTokens;
}
@property(copy) NSArray* responseSessionTokens;	// @synthesize=_responseSessionTokens
@property(copy) NSArray* responseIdentities;	// @synthesize=_responseIdentities
@property(copy, setter=setURI:) NSString* uri;	// @synthesize=_uri
// declared property setter: -(void)setResponseSessionTokens:(id)tokens;
// declared property getter: -(id)responseSessionTokens;
// declared property setter: -(void)setResponseIdentities:(id)identities;
// declared property getter: -(id)responseIdentities;
// declared property setter: -(void)setURI:(id)uri;
// declared property getter: -(id)uri;
-(void)handleResponseDictionary:(id)dictionary;
-(void)handleResponseHeaders:(id)headers;
-(BOOL)hasRequiredKeys:(id*)keys;
-(id)messageBody;
-(id)requiredKeys;
-(id)bagKey;
-(BOOL)wantsBodySignature;
-(BOOL)wantsHTTPGet;
-(BOOL)wantsManagedRetries;
-(id)additionalQueryStringParameters;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)zone;
-(id)init;
@end

