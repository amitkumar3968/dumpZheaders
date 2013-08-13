/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iAdDeveloper.framework/iAdDeveloper
 */

#import "iAdDeveloper-Structs.h"
#import "HTSHTTPMessage.h"

@class NSString, NSURL;

@interface HTSHTTPMessageRequest : HTSHTTPMessage {
@private
	NSString* _requestMethod;
	NSURL* _requestURL;
}
@property(copy, nonatomic) NSURL* requestURL;	// @synthesize=_requestURL
@property(copy, nonatomic) NSString* requestMethod;	// @synthesize=_requestMethod
// declared property setter: -(void)setRequestURL:(id)url;
// declared property getter: -(id)requestURL;
// declared property setter: -(void)setRequestMethod:(id)method;
// declared property getter: -(id)requestMethod;
-(BOOL)responseCanUseGZip;
-(id)responseWithStatus:(int)status;
-(CFHTTPMessageRef)copyMessage;
-(id)initWithRequest:(CFHTTPMessageRef)request;
-(void)dealloc;
@end

