/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

#import "FTMessage.h"
#import "NSCopying.h"
#import "FTServices-Structs.h"

@class NSNumber, NSData;

@interface FTInitializeValidationMessage : FTMessage <NSCopying> {
	NSData* _sessionInfoRequest;
	NSData* _responseSessionInfo;
	NSNumber* _responseTTL;
	NSData* _pushToken;
}
@property(copy, nonatomic) NSNumber* responseTTL;	// @synthesize=_responseTTL
@property(copy, nonatomic) NSData* responseSessionInfo;	// @synthesize=_responseSessionInfo
@property(copy, nonatomic) NSData* pushToken;	// @synthesize=_pushToken
@property(copy, nonatomic) NSData* sessionInfoRequest;	// @synthesize=_sessionInfoRequest
// declared property setter: -(void)setPushToken:(id)token;
// declared property getter: -(id)pushToken;
// declared property setter: -(void)setResponseTTL:(id)ttl;
// declared property getter: -(id)responseTTL;
// declared property setter: -(void)setResponseSessionInfo:(id)info;
// declared property getter: -(id)responseSessionInfo;
// declared property setter: -(void)setSessionInfoRequest:(id)request;
// declared property getter: -(id)sessionInfoRequest;
-(void)handleResponseDictionary:(id)dictionary;
-(id)additionalMessageHeaders;
-(id)messageBody;
-(id)requiredKeys;
-(id)bagKey;
-(int)responseCommand;
-(int)command;
-(BOOL)wantsBinaryPush;
-(BOOL)wantsCompressedBody;
-(BOOL)wantsHTTPHeaders;
-(BOOL)wantsBagKey;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(id)init;
@end

