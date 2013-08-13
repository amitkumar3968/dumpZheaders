/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VideoUpload.framework/VideoUpload
 */

#import "NSURLConnectionDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableData, NSData, NSDictionary, NSHTTPURLResponse, NSMutableURLRequest, NSURLConnection;
@protocol JSONHTTPRequestDelegate;

@interface JSONHTTPRequest : XXUnknownSuperclass <NSURLConnectionDelegate> {
	NSMutableURLRequest* _request;
	NSURLConnection* _connection;
	NSMutableData* _rawData;
	NSData* _overridePostBody;
	id<JSONHTTPRequestDelegate> _delegate;
	BOOL _receivedValidResponse;
@private
	NSDictionary* _getParams;
	NSDictionary* _postParams;
	NSHTTPURLResponse* _response;
	int _HTTPMethod;
}
@property(assign, nonatomic) int HTTPMethod;	// @synthesize=_HTTPMethod
@property(readonly, assign, nonatomic) NSHTTPURLResponse* response;	// @synthesize=_response
@property(retain, nonatomic) NSDictionary* postParams;	// @synthesize=_postParams
@property(retain, nonatomic) NSDictionary* getParams;	// @synthesize=_getParams
// declared property getter: -(int)HTTPMethod;
// declared property getter: -(id)response;
// declared property setter: -(void)setPostParams:(id)params;
// declared property getter: -(id)postParams;
// declared property setter: -(void)setGetParams:(id)params;
// declared property getter: -(id)getParams;
-(void)connection:(id)connection didSendBodyData:(int)data totalBytesWritten:(int)written totalBytesExpectedToWrite:(int)write;
-(void)connection:(id)connection didFailWithError:(id)error;
-(void)connectionDidFinishLoading:(id)connection;
-(void)connection:(id)connection didReceiveData:(id)data;
-(void)connection:(id)connection didReceiveResponse:(id)response;
-(void)cancel;
-(void)start;
-(void)setOverridePostBody:(id)body;
// declared property setter: -(void)setHTTPMethod:(int)method;
-(id)_multipartParamData:(id)data;
-(id)_paramString:(id)string;
-(void)setHTTPHeader:(id)header value:(id)value;
-(void)dealloc;
-(id)initWithURL:(id)url delegate:(id)delegate;
@end

