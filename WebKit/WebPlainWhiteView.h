/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "WebDocumentElement.h"
#import "WebDocumentView.h"


__attribute__((visibility("hidden")))
@interface WebPlainWhiteView : XXUnknownSuperclass <WebDocumentView, WebDocumentElement> {
}
-(id)elementAtPoint:(CGPoint)point allowShadowContent:(BOOL)content;
-(id)elementAtPoint:(CGPoint)point;
-(void)viewDidMoveToHostWindow;
-(void)viewWillMoveToHostWindow:(id)view;
-(void)layout;
-(void)setNeedsLayout:(BOOL)layout;
-(void)dataSourceUpdated:(id)updated;
-(void)setDataSource:(id)source;
-(void)drawRect:(CGRect)rect;
@end
