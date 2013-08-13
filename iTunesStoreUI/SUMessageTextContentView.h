/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "iTunesStoreUI-Structs.h"
#import "DOMEventListener.h"
#import <XXUnknownSuperclass.h> // Unknown library

@protocol SUMessageTextContentViewDelegate;

@interface SUMessageTextContentView : XXUnknownSuperclass <DOMEventListener> {
}
@property(assign, nonatomic) id<SUMessageTextContentViewDelegate> delegate;	// @dynamic
-(void)_sendDidChangeSize;
-(void)_sendDidChange;
-(BOOL)_hasImages;
-(void)_collapseIfNecessary;
-(void)handleEvent:(id)event;
-(BOOL)keyboardInputChanged:(id)changed;
-(void)setMarginEdgeInsets:(UIEdgeInsets)insets;
-(void)insertHTMLString:(id)string;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame webView:(id)view;
-(id)initWithFrame:(CGRect)frame;
-(void)_initSUMessageTextContentView;
@end
