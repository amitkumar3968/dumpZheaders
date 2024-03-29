/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
 */

#import "YTXMLHTTPRequest.h"

@class YTVideo, NSMutableArray;
@protocol YTCaptionsRequestDelegate;

@interface YTCaptionsRequest : YTXMLHTTPRequest {
	id<YTCaptionsRequestDelegate> _delegate;
	NSMutableArray* _captions;
	YTVideo* _video;
}
@property(readonly, retain) YTVideo* video;	// converted property
-(void)failWithError:(id)error;
-(void)didAuthenticate:(id)authenticate;
-(void)didParseData;
-(int)parseData:(id)data;
// converted property getter: -(id)video;
-(void)dealloc;
-(id)initRequestingCaptionsForVideo:(id)video withDelegate:(id)delegate;
-(void)_requestCaptionsFromURL:(id)url;
@end

