/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import "AAResponse.h"

@class NSData;

@interface AAUpgradeiOSTermsResponse : AAResponse {
	NSData* _xmlUIData;
}
@property(readonly, assign, nonatomic) NSData* xmlUIData;	// @synthesize=_xmlUIData
// declared property getter: -(id)xmlUIData;
-(void).cxx_destruct;
-(BOOL)bodyIsPlist;
-(id)responseXMLData;
-(id)initWithHTTPResponse:(id)httpresponse data:(id)data;
@end

