/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSRequest.h"
#import "SSXPCCoding.h"

@class SSAuthenticationContext, NSArray;

@interface SSRedeemCodesRequest : SSRequest <SSXPCCoding> {
@private
	SSAuthenticationContext* _authenticationContext;
	NSArray* _redeemCodes;
}
@property(copy) SSAuthenticationContext* authenticationContext;
@property(readonly, assign) NSArray* redeemCodes;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)xpcencoding;
-(void)startWithCompletionBlock:(id)completionBlock;
-(void)startWithRedeemResponseBlock:(id)redeemResponseBlock;
// declared property setter: -(void)setAuthenticationContext:(id)context;
// declared property getter: -(id)redeemCodes;
// declared property getter: -(id)authenticationContext;
-(void)dealloc;
-(id)initWithRedeemCodes:(id)redeemCodes;
@end

