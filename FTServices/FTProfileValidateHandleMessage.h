/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

#import "NSCopying.h"
#import "FTServices-Structs.h"
#import "FTProfileMessage.h"

@class NSNumber, NSString;

@interface FTProfileValidateHandleMessage : FTProfileMessage <NSCopying> {
	NSString* _uri;
	NSNumber* _responseVettingStatus;
	NSString* _deviceName;
}
@property(copy) NSNumber* responseVettingStatus;	// @synthesize=_responseVettingStatus
@property(copy) NSString* deviceName;	// @synthesize=_deviceName
@property(copy, setter=setURI:) NSString* URI;	// @synthesize=_uri
// declared property setter: -(void)setDeviceName:(id)name;
// declared property getter: -(id)deviceName;
// declared property setter: -(void)setResponseVettingStatus:(id)status;
// declared property getter: -(id)responseVettingStatus;
// declared property setter: -(void)setURI:(id)uri;
// declared property getter: -(id)URI;
-(void)handleResponseDictionary:(id)dictionary;
-(id)messageBody;
-(id)requiredKeys;
-(id)bagKey;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)zone;
-(id)init;
@end
