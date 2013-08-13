/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
 */

#import "YTXMLHTTPRequest.h"

@class YTCaptionTrack;
@protocol YTCaptionTrackRequestDelegate;

@interface YTCaptionTrackRequest : YTXMLHTTPRequest {
	id<YTCaptionTrackRequestDelegate> _delegate;
	YTCaptionTrack* _captionTrack;
}
@property(readonly, retain) YTCaptionTrack* captionTrack;	// converted property
-(void)failWithError:(id)error;
-(int)parseData:(id)data;
-(void)_requestCaptionTrackDataWithURL:(id)url;
// converted property getter: -(id)captionTrack;
-(void)dealloc;
-(id)initCaptionTrackDataRequest:(id)request withDelegate:(id)delegate;
@end

