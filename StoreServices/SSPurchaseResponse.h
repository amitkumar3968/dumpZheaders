/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SSXPCCoding.h"

@class SSPurchase, NSError, SSURLConnectionResponse;

@interface SSPurchaseResponse : XXUnknownSuperclass <SSXPCCoding> {
@private
	NSError* _error;
	SSPurchase* _purchase;
	SSURLConnectionResponse* _response;
}
@property(retain, nonatomic) SSURLConnectionResponse* URLResponse;	// @synthesize=_response
@property(copy, nonatomic) SSPurchase* purchase;	// @synthesize=_purchase
@property(copy, nonatomic) NSError* error;	// @synthesize=_error
// declared property setter: -(void)setURLResponse:(id)response;
// declared property getter: -(id)URLResponse;
// declared property setter: -(void)setPurchase:(id)purchase;
// declared property getter: -(id)purchase;
// declared property setter: -(void)setError:(id)error;
// declared property getter: -(id)error;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)xpcencoding;
-(void)dealloc;
@end

