/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "iTunesStoreUI-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class SUTouchCaptureView, UINavigationItem, SUUIAppearance, UIView, NSString;

@interface SUBarButtonItem : XXUnknownSuperclass {
@private
	UIView* _accessoryView;
	UIEdgeInsets _accessoryViewInsets;
	SUUIAppearance* _confirmationAppearance;
	UINavigationItem* _lastNavigationItem;
	NSString* _preConfirmationTitle;
	SUTouchCaptureView* _touchCaptureView;
}
@property(readonly, assign, nonatomic, getter=isShowingConfirmation) BOOL showingConfirmation;
@property(assign, nonatomic, getter=isLoading) BOOL loading;
@property(assign, nonatomic) UIEdgeInsets accessoryViewInsets;	// @synthesize=_accessoryViewInsets
@property(retain, nonatomic) UIView* accessoryView;	// @synthesize=_accessoryView
+(Class)classForNavigationButton;
// declared property getter: -(UIEdgeInsets)accessoryViewInsets;
// declared property getter: -(id)accessoryView;
-(void)_updateViewForAccessoryChange;
-(void)_setTitle:(id)title isConfirmation:(BOOL)confirmation appearance:(id)appearance animated:(BOOL)animated;
-(void)_removeTouchCaptureView;
-(id)_navigationButton;
-(void)_addTouchCaptureViewForNavigationButton:(id)navigationButton;
-(void)_touchCaptureAction:(id)action;
-(id)createViewForNavigationItem:(id)navigationItem;
-(void)configureFromScriptButton:(id)scriptButton;
-(void)showConfirmationWithTitle:(id)title appearance:(id)appearance animated:(BOOL)animated;
// declared property setter: -(void)setLoading:(BOOL)loading;
// declared property setter: -(void)setAccessoryViewInsets:(UIEdgeInsets)insets;
// declared property setter: -(void)setAccessoryView:(id)view;
// declared property getter: -(BOOL)isShowingConfirmation;
// declared property getter: -(BOOL)isLoading;
-(void)hideConfirmationWithAppearance:(id)appearance animated:(BOOL)animated;
-(void)dealloc;
@end

