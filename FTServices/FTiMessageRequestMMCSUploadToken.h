/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

#import "NSCopying.h"
#import "FTServices-Structs.h"
#import "FTiMessageMessage.h"

@class NSNumber, NSData, NSString;

@interface FTiMessageRequestMMCSUploadToken : FTiMessageMessage <NSCopying> {
	NSString* _responseAuthToken;
	NSNumber* _length;
	NSData* _signature;
	NSString* _responseRequestURL;
	NSString* _responseRequestorID;
}
@property(copy) NSString* responseRequestorID;	// @synthesize=_responseRequestorID
@property(copy) NSString* responseRequestURL;	// @synthesize=_responseRequestURL
@property(copy) NSString* responseAuthToken;	// @synthesize=_responseAuthToken
@property(copy) NSNumber* length;	// @synthesize=_length
@property(copy) NSData* signature;	// @synthesize=_signature
// declared property setter: -(void)setResponseRequestorID:(id)anId;
// declared property getter: -(id)responseRequestorID;
// declared property setter: -(void)setResponseRequestURL:(id)url;
// declared property getter: -(id)responseRequestURL;
// declared property setter: -(void)setSignature:(id)signature;
// declared property getter: -(id)signature;
// declared property setter: -(void)setLength:(id)length;
// declared property getter: -(id)length;
// declared property setter: -(void)setResponseAuthToken:(id)token;
// declared property getter: -(id)responseAuthToken;
-(void)handleResponseDictionary:(id)dictionary;
-(id)messageBody;
-(id)requiredKeys;
-(int)responseCommand;
-(int)command;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(id)init;
@end

