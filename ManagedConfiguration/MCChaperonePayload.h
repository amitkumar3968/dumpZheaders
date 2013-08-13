/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCPayload.h"

@class NSData;

@interface MCChaperonePayload : MCPayload {
@private
	NSData* _pairingCertificateData;
	BOOL _nonChaperonePairingAllowed;
}
@property(readonly, assign, nonatomic) BOOL nonChaperonePairingAllowed;	// @synthesize=_nonChaperonePairingAllowed
@property(readonly, assign, nonatomic) NSData* pairingCertificateData;	// @synthesize=_pairingCertificateData
+(id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;
+(id)typeStrings;
// declared property getter: -(BOOL)nonChaperonePairingAllowed;
// declared property getter: -(id)pairingCertificateData;
-(void).cxx_destruct;
-(id)description;
-(id)subtitle2Description;
-(id)subtitle2Label;
-(id)subtitle1Description;
-(id)subtitle1Label;
-(id)stubDictionary;
-(id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id*)error;
@end
