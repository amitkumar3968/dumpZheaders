/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "WebUI-Structs.h"
#import "UIPrintInteractionControllerDelegate.h"

@class NSNumberFormatter, UIWebPaginationInfo, UIFont, UIColor, NSString, UIWebBrowserView, WebFrame;

@interface BrowserPrintPageRenderer : XXUnknownSuperclass <UIPrintInteractionControllerDelegate> {
	UIWebBrowserView* _browserView;
	WebFrame* _webFrame;
	NSNumberFormatter* _numberFormatter;
	NSString* _URLString;
	UIWebPaginationInfo* _paginationInfo;
	float _URLWidth;
	NSString* _dateString;
	float _dateWidth;
	float _printWidth;
	CGPoint _contentOffset;
	CGPoint _footerOffset;
	UIFont* _footerFont;
	UIColor* _footerColor;
	BOOL _printFooter;
}
@property(assign, nonatomic) BOOL printFooter;	// @synthesize=_printFooter
@property(readonly, assign, nonatomic) UIWebPaginationInfo* paginationInfo;	// @synthesize=_paginationInfo
@property(retain, nonatomic) NSString* URLString;	// @synthesize=_URLString
@property(retain, nonatomic) NSNumberFormatter* numberFormatter;	// @synthesize=_numberFormatter
@property(retain, nonatomic) WebFrame* webFrame;	// @synthesize=_webFrame
@property(retain, nonatomic) UIWebBrowserView* browserView;	// @synthesize=_browserView
// declared property setter: -(void)setPrintFooter:(BOOL)footer;
// declared property getter: -(BOOL)printFooter;
// declared property getter: -(id)paginationInfo;
// declared property setter: -(void)setURLString:(id)string;
// declared property getter: -(id)URLString;
// declared property setter: -(void)setNumberFormatter:(id)formatter;
// declared property getter: -(id)numberFormatter;
// declared property setter: -(void)setWebFrame:(id)frame;
// declared property getter: -(id)webFrame;
// declared property setter: -(void)setBrowserView:(id)view;
// declared property getter: -(id)browserView;
-(void)associateWithPrintController:(id)printController;
-(id)printInfoWithPageTitle:(id)pageTitle;
-(id)printControllerWithPageTitle:(id)pageTitle;
-(void)printInteractionControllerDidFinishJob:(id)printInteractionController;
-(void)printInteractionControllerWillStartJob:(id)printInteractionController;
-(id)printingFrame;
-(void)drawFooterForPageAtIndex:(int)index inRect:(CGRect)rect;
-(void)drawContentForPageAtIndex:(int)index inRect:(CGRect)rect;
-(int)numberOfPages;
-(void)dealloc;
-(id)init;
@end

