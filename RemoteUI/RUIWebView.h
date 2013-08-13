/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

#import "RUIElement.h"
#import "UIWebViewDelegate.h"

@class NSString, UIWebView, NSURL;

@interface RUIWebView : RUIElement <UIWebViewDelegate> {
	UIWebView* _webView;
	NSString* _html;
	NSURL* _baseURL;
	id _delegate;
}
@property(retain, nonatomic) NSURL* baseURL;	// @synthesize=_baseURL
@property(copy, nonatomic) NSString* html;	// @synthesize=_html
@property(readonly, retain) UIWebView* webView;	// converted property
// declared property setter: -(void)setBaseURL:(id)url;
// declared property getter: -(id)baseURL;
// declared property getter: -(id)html;
-(BOOL)webView:(id)view shouldStartLoadWithRequest:(id)request navigationType:(int)type;
-(void)dealloc;
-(void)webView:(id)view didFailLoadWithError:(id)error;
-(void)webViewDidFinishLoad:(id)webView;
// declared property setter: -(void)setHtml:(id)html;
// converted property getter: -(id)webView;
-(void)setDelegate:(id)delegate;
@end
