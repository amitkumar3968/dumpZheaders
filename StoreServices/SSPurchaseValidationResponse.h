/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class SSItemOfferDeviceError, NSDictionary, SSPurchase, NSError;

@interface SSPurchaseValidationResponse : XXUnknownSuperclass {
@private
	SSItemOfferDeviceError* _deviceError;
	NSError* _genericError;
	SSPurchase* _failedPurchase;
	NSDictionary* _mismatchedSoftwareCapabilities;
	BOOL _valid;
}
@property(readonly, assign) NSDictionary* mismatchedSoftwareCapabilities;	// @synthesize=_mismatchedSoftwareCapabilities
@property(readonly, assign) NSError* genericError;	// @synthesize=_genericError
@property(readonly, assign) SSPurchase* failedPurchase;	// @synthesize=_failedPurchase
@property(readonly, assign) SSItemOfferDeviceError* deviceError;	// @synthesize=_deviceError
@property(readonly, assign, getter=isValid) BOOL valid;	// @synthesize=_valid
// declared property getter: -(BOOL)isValid;
// declared property getter: -(id)mismatchedSoftwareCapabilities;
// declared property getter: -(id)genericError;
// declared property getter: -(id)failedPurchase;
// declared property getter: -(id)deviceError;
-(void)_setValid:(BOOL)valid;
-(void)_setMismatchedSoftwareCapabilities:(id)capabilities;
-(void)_setGenericError:(id)error;
-(void)_setFailedPurchase:(id)purchase;
-(void)_setDeviceError:(id)error;
-(void)dealloc;
@end

