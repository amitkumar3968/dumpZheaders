/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

#import "NSCopying.h"
#import "FTServices-Structs.h"
#import "FTProfileMessage.h"

@class NSDictionary, NSString;

@interface FTProfileValidateInvitationContext : FTProfileMessage <NSCopying> {
	NSString* _basePhoneNumber;
	NSString* _regionID;
	NSString* _responseBasePhoneNumber;
	NSString* _responseRegionID;
	NSDictionary* _responseExtraInfo;
}
@property(copy) NSDictionary* responseExtraInfo;	// @synthesize=_responseExtraInfo
@property(copy) NSString* responseBasePhoneNumber;	// @synthesize=_responseBasePhoneNumber
@property(copy) NSString* responseRegionID;	// @synthesize=_responseRegionID
@property(copy) NSString* basePhoneNumber;	// @synthesize=_basePhoneNumber
@property(copy) NSString* regionID;	// @synthesize=_regionID
// declared property setter: -(void)setResponseExtraInfo:(id)info;
// declared property getter: -(id)responseExtraInfo;
// declared property setter: -(void)setResponseRegionID:(id)anId;
// declared property getter: -(id)responseRegionID;
// declared property setter: -(void)setResponseBasePhoneNumber:(id)number;
// declared property getter: -(id)responseBasePhoneNumber;
// declared property setter: -(void)setRegionID:(id)anId;
// declared property getter: -(id)regionID;
// declared property setter: -(void)setBasePhoneNumber:(id)number;
// declared property getter: -(id)basePhoneNumber;
-(void)handleResponseDictionary:(id)dictionary;
-(id)messageBody;
-(id)requiredKeys;
-(id)bagKey;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)zone;
-(id)init;
@end

