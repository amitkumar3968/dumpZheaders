/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "NSURLConnectionDelegate.h"

@class NSURL, NSURLConnection, NSMutableData, NSString;

@interface YTImageLoad : XXUnknownSuperclass <NSURLConnectionDelegate> {
	NSURL* _URL;
	NSURLConnection* _connection;
	NSMutableData* _imageData;
	NSString* _videoID;
}
-(void)connection:(id)connection didFailWithError:(id)error;
-(void)connectionDidFinishLoading:(id)connection;
-(void)_createImage;
-(void)connection:(id)connection didReceiveData:(id)data;
-(void)_loadFinished;
-(void)start;
-(void)dealloc;
@end

