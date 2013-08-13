/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "NSURLConnectionDelegate.h"

@class NSError, NSURLResponse, NSMutableData;

@interface MFMessageURLConnectionDelegate : XXUnknownSuperclass <NSURLConnectionDelegate> {
	NSMutableData* _responseBody;
	BOOL _done;
	NSError* _error;
	NSURLResponse* _response;
}
-(void)dealloc;
-(void)connectionDidFinishLoading:(id)connection;
-(void)connection:(id)connection didFailWithError:(id)error;
-(void)connection:(id)connection didReceiveData:(id)data;
-(void)connection:(id)connection didReceiveResponse:(id)response;
@end
