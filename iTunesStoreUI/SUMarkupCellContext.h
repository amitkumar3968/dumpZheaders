/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "iTunesStoreUI-Structs.h"
#import "SUItemCellContext.h"

@class NSString;

@interface SUMarkupCellContext : SUItemCellContext {
	int _pendingWebViewLoads;
	NSString* _stylesheet;
	CFDictionaryRef _webViewCache;
	float _webViewWidth;
}
@property(assign, nonatomic) float webViewWidth;	// @synthesize=_webViewWidth
@property(retain, nonatomic) NSString* stylesheet;	// @synthesize=_stylesheet
// declared property setter: -(void)setWebViewWidth:(float)width;
// declared property getter: -(float)webViewWidth;
// declared property setter: -(void)setStylesheet:(id)stylesheet;
// declared property getter: -(id)stylesheet;
-(void)webViewDidFinishLoading:(id)webView;
-(id)webViewForMarkup:(id)markup;
-(void)dealloc;
@end

