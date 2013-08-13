/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "NSObject.h"


@protocol WebGeolocationProvider <NSObject>
-(void)stopTrackingWebView:(id)view;
-(void)cancelWarmUpForWebView:(id)webView;
-(void)initializeGeolocationForWebView:(id)webView listener:(id)listener;
-(void)setEnableHighAccuracy:(BOOL)accuracy;
-(id)lastPosition;
-(void)unregisterWebView:(id)view;
-(void)registerWebView:(id)view;
@end

