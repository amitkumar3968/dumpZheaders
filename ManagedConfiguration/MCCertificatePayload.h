/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "ManagedConfiguration-Structs.h"
#import "MCPayload.h"

@class NSData, NSDate, NSString;

@interface MCCertificatePayload : MCPayload {
@private
	NSData* _certificatePersistentID;
	NSString* _installedOnDeviceID;
}
@property(readonly, assign, nonatomic) BOOL isSigned;
@property(readonly, assign, nonatomic) NSDate* expiry;
@property(readonly, assign, nonatomic) BOOL isIdentity;
@property(readonly, assign, nonatomic) BOOL isRoot;
@property(retain, nonatomic) NSData* certificatePersistentID;	// @synthesize=_certificatePersistentID
@property(copy, nonatomic) NSString* installedOnDeviceID;	// @synthesize=_installedOnDeviceID
// declared property setter: -(void)setInstalledOnDeviceID:(id)anId;
// declared property getter: -(id)installedOnDeviceID;
// declared property setter: -(void)setCertificatePersistentID:(id)anId;
// declared property getter: -(id)certificatePersistentID;
-(void).cxx_destruct;
// declared property getter: -(id)expiry;
-(id)description;
-(id)subtitle2Description;
-(id)subtitle2Label;
-(id)subtitle1Description;
-(id)subtitle1Label;
-(id)title;
// declared property getter: -(BOOL)isIdentity;
// declared property getter: -(BOOL)isRoot;
-(SecIdentity*)copyIdentityFromKeychain;
-(SecCertificate*)copyCertificate;
-(id)stubDictionary;
// declared property getter: -(BOOL)isSigned;
-(id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id*)error;
@end
