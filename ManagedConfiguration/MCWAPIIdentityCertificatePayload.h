/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "ManagedConfiguration-Structs.h"
#import "MCCertificatePayload.h"

@class NSData;

@interface MCWAPIIdentityCertificatePayload : MCCertificatePayload {
@private
	NSData* _pemData;
}
@property(readonly, assign, nonatomic) NSData* pemData;	// @synthesize=_pemData
+(id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;
+(id)typeStrings;
// declared property getter: -(id)pemData;
-(void).cxx_destruct;
-(id)description;
-(BOOL)isIdentity;
-(SecIdentity*)copyIdentityFromKeychain;
-(SecCertificate*)copyCertificate;
-(id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id*)error;
@end

