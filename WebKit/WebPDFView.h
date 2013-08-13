/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebPDFDocumentRepresentation.h"
#import "WebKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "WebPDFDocumentView.h"

@class NSString;

@interface WebPDFView : XXUnknownSuperclass <WebPDFDocumentView, WebPDFDocumentRepresentation> {
@private
	BOOL dataSourceHasBeenSet;
	CGPDFDocumentRef _PDFDocument;
	NSString* _title;
	CGRect* _pageRects;
}
@property(readonly, retain) NSString* title;	// converted property
+(Class)_representationClassForWebFrame:(id)webFrame;
+(CGColorRef)backgroundColor;
+(CGColorRef)shadowColor;
+(id)supportedMIMETypes;
-(CGRect)rectForPageNumber:(unsigned)pageNumber;
-(CGPDFDocumentRef)doc;
-(unsigned)totalPages;
-(unsigned)pageNumberForRect:(CGRect)rect;
// converted property getter: -(id)title;
-(id)documentSource;
-(BOOL)canProvideDocumentSource;
-(void)finishedLoadingWithDataSource:(id)dataSource;
-(void)_checkPDFTitle;
-(void)_computePageRects;
-(void)receivedError:(id)error withDataSource:(id)dataSource;
-(void)receivedData:(id)data withDataSource:(id)dataSource;
-(void)viewDidMoveToHostWindow;
-(void)viewWillMoveToHostWindow:(id)view;
-(void)layout;
-(void)setNeedsLayout:(BOOL)layout;
-(void)dataSourceUpdated:(id)updated;
-(void)setDataSource:(id)source;
-(void)drawRect:(CGRect)rect;
-(id)_pagesInRect:(CGRect)rect;
-(void)drawPage:(CGPDFPageRef)page;
-(void)dealloc;
@end

