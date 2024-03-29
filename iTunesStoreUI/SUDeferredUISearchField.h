/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "iTunesStoreUI-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "SUDeferredUIView.h"

@class NSString;

@interface SUDeferredUISearchField : XXUnknownSuperclass <SUDeferredUIView> {
	int _deferredClearButtonMode;
	id _deferredFont;
	CGRect _deferredFrame;
	float _deferredPaddingLeft;
	float _deferredPaddingTop;
	NSString* _deferredPlaceholder;
	NSString* _deferredText;
	BOOL _isDeferringInterfaceUpdates;
}
@property(assign, nonatomic, getter=isDeferringInterfaceUpdates) BOOL deferringInterfaceUpdates;
@property(retain) id text;	// converted property
@property(retain) id placeholder;	// converted property
@property(assign) CGRect frame;	// converted property
@property(retain) id font;	// converted property
@property(assign) int clearButtonMode;	// converted property
-(void)_saveCurrentStateAsDeferred;
-(void)_commitDeferredInterfaceUpdates;
// converted property getter: -(id)text;
// converted property setter: -(void)setText:(id)text;
// converted property setter: -(void)setPlaceholder:(id)placeholder;
-(void)setPaddingTop:(float)top paddingLeft:(float)left;
// converted property setter: -(void)setFrame:(CGRect)frame;
// converted property setter: -(void)setFont:(id)font;
// converted property setter: -(void)setClearButtonMode:(int)mode;
// converted property getter: -(id)placeholder;
-(float)paddingTop;
-(float)paddingLeft;
// converted property getter: -(CGRect)frame;
// converted property getter: -(id)font;
// converted property getter: -(int)clearButtonMode;
// declared property setter: -(void)setDeferringInterfaceUpdates:(BOOL)updates;
// declared property getter: -(BOOL)isDeferringInterfaceUpdates;
-(void)dealloc;
@end

