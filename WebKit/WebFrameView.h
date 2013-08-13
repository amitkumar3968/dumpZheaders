/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "WebCoreFrameView.h"

@class WebFrameViewPrivate;

@interface WebFrameView : XXUnknownSuperclass <WebCoreFrameView> {
@private
	WebFrameViewPrivate* _private;
}
@property(assign) BOOL allowsScrolling;	// converted property
+(Class)_viewClassForMIMEType:(id)mimetype allowingPlugins:(BOOL)plugins;
+(BOOL)_canShowMIMETypeAsHTML:(id)html;
+(id)_viewTypesAllowImageTypeOmission:(BOOL)omission;
-(void)printDocumentView;
-(BOOL)documentViewShouldHandlePrint;
-(id)_webcore_effectiveFirstResponder;
-(void)keyDown:(id)down;
-(void)mouseUp:(id)up;
-(void)mouseDown:(id)down;
-(void)_forwardMouseEvent:(id)event;
-(BOOL)_firstResponderIsFormControl;
-(void)scrollLineDown:(id)down;
-(void)scrollLineUp:(id)up;
-(void)scrollPageDown:(id)down;
-(void)scrollPageUp:(id)up;
-(BOOL)_scrollLineHorizontally:(BOOL)horizontally;
-(BOOL)_scrollLineVertically:(BOOL)vertically;
-(BOOL)_pageInBlockProgressionDirection:(BOOL)blockProgressionDirection;
-(BOOL)_pageHorizontally:(BOOL)horizontally;
-(BOOL)_pageVertically:(BOOL)vertically;
-(float)_horizontalPageScrollDistance;
-(float)_horizontalKeyboardScrollDistance;
-(BOOL)_scrollHorizontallyBy:(float)by;
-(BOOL)_scrollVerticallyBy:(float)by;
-(void)_goForward;
-(void)_goBack;
-(void)scrollToEndOfDocument:(id)document;
-(void)scrollToBeginningOfDocument:(id)document;
-(BOOL)_scrollToEndOfDocument;
-(BOOL)_scrollToBeginningOfDocument;
-(BOOL)_isFlippedDocument;
-(BOOL)_isVerticalDocument;
-(BOOL)_scrollOverflowInDirection:(int)direction granularity:(int)granularity;
-(void)viewDidMoveToWindow;
-(void)setFrameSize:(CGSize)size;
-(CGRect)visibleRect;
-(void)drawRect:(CGRect)rect;
-(BOOL)isOpaque;
-(void)setNextKeyView:(id)view;
-(BOOL)becomeFirstResponder;
-(BOOL)acceptsFirstResponder;
-(id)documentView;
// converted property getter: -(BOOL)allowsScrolling;
// converted property setter: -(void)setAllowsScrolling:(BOOL)scrolling;
-(id)webFrame;
-(BOOL)scrollView:(id)view shouldScrollToPoint:(CGPoint)point;
-(void)finalize;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
-(Frame*)_web_frame;
-(float)_verticalKeyboardScrollDistance;
-(void)_frameSizeChanged;
-(void)_install;
-(Class)_viewClassForMIMEType:(id)mimetype;
-(float)_verticalPageScrollDistance;
-(id)_scrollView;
-(void)_setWebFrame:(id)frame;
-(id)_makeDocumentViewForDataSource:(id)dataSource;
-(void)_setDocumentView:(id)view;
-(id)_webView;
-(Class)_customScrollViewClass;
-(id)_contentView;
-(id)_largestChildWithScrollBars;
-(BOOL)_hasScrollBars;
-(id)_largestScrollableChild;
-(BOOL)_isScrollable;
-(float)_area;
-(void)frameSizeChanged;
@end

