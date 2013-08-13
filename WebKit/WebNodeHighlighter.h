/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import </libobjc.A.h>

@class WebView, WebNodeHighlight;

__attribute__((visibility("hidden")))
@interface WebNodeHighlighter : NSObject {
@private
	WebView* _inspectedWebView;
	WebNodeHighlight* _currentHighlight;
}
-(void)willDetachWebNodeHighlight:(id)highlight;
-(void)didAttachWebNodeHighlight:(id)highlight;
-(void)hideHighlight;
-(void)highlight;
-(void)dealloc;
-(id)initWithInspectedWebView:(id)inspectedWebView;
@end

