/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "ISStoreURLOperationDelegate.h"
#import "SUWebViewDelegate.h"
#import "iTunesStoreUI-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class ISStoreURLOperation, SUWebView;

@interface SUScriptExecutionContext : XXUnknownSuperclass <ISStoreURLOperationDelegate, SUWebViewDelegate> {
@private
	ISStoreURLOperation* _loadOperation;
	SUWebView* _webView;
}
@property(readonly, assign, nonatomic) OpaqueJSContext* globalExecutionContext;
@property(readonly, assign, nonatomic) id windowScriptObject;
-(id)_webView;
-(id)_newLoadOperation;
-(void)_cancelLoadOperation;
-(id)parentViewControllerForWebView:(id)webView;
-(void)operation:(id)operation finishedWithOutput:(id)output;
-(void)operation:(id)operation failedWithError:(id)error;
// declared property getter: -(id)windowScriptObject;
// declared property getter: -(OpaqueJSContext*)globalExecutionContext;
-(void)evaluateScriptWithURLBagKey:(id)urlbagKey;
-(void)evaluateScriptAtURL:(id)url;
-(void)callWebScriptMethod:(id)method withArguments:(id)arguments;
-(BOOL)evaluateData:(id)data MIMEType:(id)type textEncodingName:(id)name baseURL:(id)url;
-(void)dealloc;
@end

