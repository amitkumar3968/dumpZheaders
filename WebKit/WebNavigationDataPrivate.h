/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import </libobjc.A.h>

@class NSURLResponse, NSString, NSURLRequest;

__attribute__((visibility("hidden")))
@interface WebNavigationDataPrivate : NSObject {
@private
	NSString* url;
	NSString* title;
	NSURLRequest* originalRequest;
	NSURLResponse* response;
	BOOL hasSubstituteData;
	NSString* clientRedirectSource;
}
-(void)dealloc;
@end
