/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "iTunesStoreUI-Structs.h"
#import "NSObject.h"


@protocol SUWebViewManagerDelegate <NSObject>
@optional
-(void)webViewManager:(id)manager webDocumentViewDidSetFrame:(CGRect)webDocumentView;
-(void)webViewManagerDidStartLoad:(id)webViewManager;
-(void)webViewManagerDidFinishLoad:(id)webViewManager;
-(void)webViewManager:(id)manager didFailLoadWithError:(id)error;
-(void)webViewManager:(id)manager willInjectScriptInterface:(id)interface;
-(void)webViewManager:(id)manager didReceivePrimaryResponse:(id)response;
-(void)webViewManager:(id)manager didRejectInvalidRequest:(id)request;
-(void)webViewManager:(id)manager didReceiveTitle:(id)title;
-(id)viewControllerForWebViewManager:(id)webViewManager;
-(id)newScriptInterfaceForWebViewManager:(id)webViewManager;
@end

