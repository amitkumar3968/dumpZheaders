/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "SUScriptButtonNativeObject.h"
#import "iTunesStoreUI-Structs.h"


@interface SUScriptNativeUIBarButtonItem : SUScriptButtonNativeObject {
	BOOL _isBackButton;
}
@property(assign, getter=isLoading) BOOL loading;	// converted property
@property(retain) id title;	// converted property
@property(assign) int tag;	// converted property
@property(assign) UIEdgeInsets imageInsets;	// converted property
@property(retain) id image;	// converted property
@property(readonly, assign) BOOL isBackButton;	// converted property
+(id)objectWithDefaultButtonForScriptButton:(id)scriptButton;
-(id)systemItemString;
-(id)styleString;
-(void)showConfirmationWithTitle:(id)title animated:(BOOL)animated;
-(void)setupNativeObject;
-(void)setStyleFromString:(id)string;
// converted property setter: -(void)setLoading:(BOOL)loading;
-(BOOL)isShowingConfirmation;
// converted property getter: -(BOOL)isLoading;
// converted property getter: -(BOOL)isBackButton;
-(void)hideConfirmationAnimated:(BOOL)animated;
-(void)disconnectButtonAction;
-(void)destroyNativeObject;
-(void)connectButtonAction;
-(int)buttonType;
// converted property getter: -(id)title;
// converted property getter: -(int)tag;
// converted property setter: -(void)setTitle:(id)title;
// converted property setter: -(void)setTag:(int)tag;
// converted property setter: -(void)setImageInsets:(UIEdgeInsets)insets;
// converted property setter: -(void)setImage:(id)image;
// converted property getter: -(UIEdgeInsets)imageInsets;
// converted property getter: -(id)image;
@end

