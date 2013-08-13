/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import </libobjc.A.h>


__attribute__((visibility("hidden")))
@interface WebDefaultEditingDelegate : NSObject {
}
+(id)sharedEditingDelegate;
-(id)undoManagerForWebView:(id)webView;
-(void)webViewDidChangeSelection:(id)webView;
-(void)webViewDidChangeTypingStyle:(id)webView;
-(void)webViewDidEndEditing:(id)webView;
-(void)webViewDidChange:(id)webView;
-(void)webViewDidBeginEditing:(id)webView;
-(id)documentFragmentForPasteboardItemAtIndex:(int)index;
-(id)supportedPasteboardTypesForCurrentSelection;
-(BOOL)webView:(id)view doCommandBySelector:(SEL)selector;
-(BOOL)webView:(id)view shouldChangeTypingStyle:(id)style toStyle:(id)style3;
-(BOOL)webView:(id)view shouldMoveRangeAfterDelete:(id)aDelete replacingRange:(id)range;
-(BOOL)webView:(id)view shouldApplyStyle:(id)style toElementsInDOMRange:(id)domrange;
-(BOOL)webView:(id)view shouldChangeSelectedDOMRange:(id)range toDOMRange:(id)domrange affinity:(int)affinity stillSelecting:(BOOL)selecting;
-(BOOL)webView:(id)view shouldDeleteDOMRange:(id)range;
-(BOOL)webView:(id)view shouldInsertText:(id)text replacingDOMRange:(id)range givenAction:(int)action;
-(BOOL)webView:(id)view shouldInsertNode:(id)node replacingDOMRange:(id)range givenAction:(int)action;
-(BOOL)webView:(id)view shouldEndEditingInDOMRange:(id)domrange;
-(BOOL)webView:(id)view shouldBeginEditingInDOMRange:(id)domrange;
-(BOOL)webView:(id)view shouldShowDeleteInterfaceForElement:(id)element;
@end
