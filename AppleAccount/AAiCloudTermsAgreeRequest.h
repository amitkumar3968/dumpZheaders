/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import "AARequest.h"

@class AAAccount;

@interface AAiCloudTermsAgreeRequest : AARequest {
	AAAccount* _account;
}
@property(retain, nonatomic) AAAccount* account;	// @synthesize=_account
// declared property setter: -(void)setAccount:(id)account;
// declared property getter: -(id)account;
-(void).cxx_destruct;
-(id)urlRequest;
-(id)initWithURLString:(id)urlstring account:(id)account;
@end

