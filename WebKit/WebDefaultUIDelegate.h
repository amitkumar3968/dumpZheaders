/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import </libobjc.A.h>


__attribute__((visibility("hidden")))
@interface WebDefaultUIDelegate : NSObject {
}
+(id)sharedUIDelegate;
-(void)webViewSupportedOrientationsUpdated:(id)updated;
-(id)webView:(id)view generateReplacementFile:(id)file;
-(BOOL)webView:(id)view shouldReplaceUploadFile:(id)file usingGeneratedFilename:(id*)filename;
-(void)webView:(id)view exceededApplicationCacheOriginQuotaForSecurityOrigin:(id)securityOrigin totalSpaceNeeded:(unsigned)needed;
-(void)webView:(id)view didScrollDocumentInFrameView:(id)frameView;
-(void)webView:(id)view didDrawRect:(CGRect)rect;
-(void)webView:(id)view printFrameView:(id)view2;
-(void)webView:(id)view runOpenPanelForFileButtonWithResultListener:(id)resultListener;
-(id)webView:(id)view runJavaScriptTextInputPanelWithPrompt:(id)prompt defaultText:(id)text initiatedByFrame:(id)frame;
-(BOOL)webView:(id)view runJavaScriptConfirmPanelWithMessage:(id)message initiatedByFrame:(id)frame;
-(void)webView:(id)view runJavaScriptAlertPanelWithMessage:(id)message initiatedByFrame:(id)frame;
-(CGRect)webViewFrame:(id)frame;
-(void)webView:(id)view setFrame:(CGRect)frame;
-(void)webView:(id)view setResizable:(BOOL)resizable;
-(BOOL)webViewIsResizable:(id)resizable;
-(void)webView:(id)view setStatusBarVisible:(BOOL)visible;
-(BOOL)webViewIsStatusBarVisible:(id)visible;
-(void)webView:(id)view setToolbarsVisible:(BOOL)visible;
-(BOOL)webViewAreToolbarsVisible:(id)visible;
-(void)webView:(id)view mouseDidMoveOverElement:(id)mouse modifierFlags:(unsigned)flags;
-(id)webViewStatusText:(id)text;
-(void)webView:(id)view setStatusText:(id)text;
-(void)webView:(id)view makeFirstResponder:(id)responder;
-(id)webViewFirstResponder:(id)responder;
-(void)webViewUnfocus:(id)unfocus;
-(void)webViewFocus:(id)focus;
-(void)webViewClose:(id)close;
-(void)webViewShow:(id)show;
-(id)webView:(id)view createWebViewWithRequest:(id)request userGesture:(BOOL)gesture;
-(id)webView:(id)view createWebViewWithRequest:(id)request windowFeatures:(id)features;
@end

