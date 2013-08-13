/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import "AAResponse.h"

@class NSData, NSString, NSDictionary;

@interface AAGenericTermsUIResponse : AAResponse {
	NSDictionary* _responseTermsDictionary;
	NSString* _responseAgreeURL;
	NSData* _responseData;
}
@property(readonly, assign, nonatomic) NSDictionary* termsDictionary;
@property(readonly, assign, nonatomic) NSString* agreeURL;
@property(readonly, assign, nonatomic) NSData* responseData;
-(void).cxx_destruct;
// declared property getter: -(id)agreeURL;
// declared property getter: -(id)responseData;
// declared property getter: -(id)termsDictionary;
-(id)initWithHTTPResponse:(id)httpresponse data:(id)data;
@end

