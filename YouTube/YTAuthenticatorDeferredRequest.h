/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableURLRequest;

@interface YTAuthenticatorDeferredRequest : XXUnknownSuperclass {
	NSMutableURLRequest* _request;
	BOOL _accountAuthRequired;
}
@property(assign) BOOL accountAuthRequired;	// converted property
@property(retain) NSMutableURLRequest* request;	// converted property
// converted property getter: -(BOOL)accountAuthRequired;
// converted property setter: -(void)setAccountAuthRequired:(BOOL)required;
// converted property getter: -(id)request;
// converted property setter: -(void)setRequest:(id)request;
-(void)dealloc;
@end

