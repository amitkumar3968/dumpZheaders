/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "UIWebViewDelegate.h"

@class UIView, RUIObjectModel, NSString, NSMutableArray, NSDictionary, UIToolbar, UIBarButtonItem, RUITableView, NSArray, RUIWebView;

@interface RUIPage : XXUnknownSuperclass <UIWebViewDelegate> {
	NSString* _pageID;
	UIView* _containerView;
	RUITableView* _tableViewOM;
	RUIWebView* _webViewOM;
	NSString* _validationFunction;
	BOOL _isLoading;
	NSString* _navTitle;
	NSString* _loadingTitle;
	NSDictionary* _rightNavigationBarButton;
	NSDictionary* _leftNavigationBarButton;
	BOOL _hidesBackButton;
	UIToolbar* _toolbar;
	NSDictionary* _rightToolbarButton;
	NSDictionary* _leftToolbarButton;
	UIBarButtonItem* _leftToolbarItem;
	UIBarButtonItem* _rightToolbarItem;
	UIBarButtonItem* _middleFlexSpace;
	UIBarButtonItem* _leftFlexSpace;
	RUIObjectModel* _objectModel;
	RUIPage* _parentPage;
	NSMutableArray* _childPages;
}
@property(readonly, assign, nonatomic) RUIPage* parentPage;	// @synthesize=_parentPage
@property(readonly, assign, nonatomic) NSArray* childPages;	// @synthesize=_childPages
@property(assign, nonatomic) RUIObjectModel* objectModel;	// @synthesize=_objectModel
@property(readonly, assign, nonatomic) UIToolbar* toolbar;	// @synthesize=_toolbar
@property(retain, nonatomic) UIBarButtonItem* leftToolbarItem;	// @synthesize=_leftToolbarItem
@property(retain, nonatomic) UIBarButtonItem* rightToolbarItem;	// @synthesize=_rightToolbarItem
@property(readonly, assign, nonatomic) NSArray* buttons;
@property(retain, nonatomic) NSDictionary* leftToolbarButton;	// @synthesize=_leftToolbarButton
@property(retain, nonatomic) NSDictionary* rightToolbarButton;	// @synthesize=_rightToolbarButton
@property(retain, nonatomic) NSDictionary* leftNavigationBarButton;	// @synthesize=_leftNavigationBarButton
@property(retain, nonatomic) NSDictionary* rightNavigationBarButton;	// @synthesize=_rightNavigationBarButton
@property(assign, nonatomic) BOOL hidesBackButton;	// @synthesize=_hidesBackButton
@property(copy, nonatomic) NSString* loadingTitle;	// @synthesize=_loadingTitle
@property(copy, nonatomic) NSString* navTitle;	// @synthesize=_navTitle
@property(retain, nonatomic) NSString* validationFunction;	// @synthesize=_validationFunction
@property(readonly, assign, nonatomic) RUIWebView* webViewOM;
@property(readonly, assign, nonatomic) RUITableView* tableViewOM;
@property(readonly, assign, nonatomic) UIView* containerView;	// @synthesize=_containerView
@property(copy, nonatomic) NSString* pageID;	// @synthesize=_pageID
// declared property getter: -(id)parentPage;
// declared property getter: -(id)objectModel;
// declared property getter: -(id)childPages;
// declared property getter: -(BOOL)hidesBackButton;
// declared property getter: -(id)toolbar;
// declared property getter: -(id)containerView;
// declared property setter: -(void)setLeftToolbarItem:(id)item;
// declared property getter: -(id)leftToolbarItem;
// declared property setter: -(void)setRightToolbarItem:(id)item;
// declared property getter: -(id)rightToolbarItem;
// declared property getter: -(id)leftToolbarButton;
// declared property getter: -(id)rightToolbarButton;
// declared property getter: -(id)leftNavigationBarButton;
// declared property getter: -(id)rightNavigationBarButton;
// declared property getter: -(id)loadingTitle;
// declared property getter: -(id)navTitle;
// declared property setter: -(void)setValidationFunction:(id)function;
// declared property getter: -(id)validationFunction;
// declared property setter: -(void)setPageID:(id)anId;
// declared property getter: -(id)pageID;
-(id)contentScrollView;
-(void)viewDidLayoutSubviews;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(void)viewDidDisappear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidLoad;
-(void)dealloc;
-(void)populatePostbackDictionary:(id)dictionary;
// declared property setter: -(void)setObjectModel:(id)model;
-(BOOL)hasWebView;
// declared property getter: -(id)webViewOM;
-(BOOL)hasTableView;
// declared property getter: -(id)tableViewOM;
-(void)_updateParentPage;
-(void)_updateWithCompletedChild:(id)completedChild;
-(void)_addChildPage:(id)page;
-(void)_setParentPage:(id)page;
-(void)_keyboardWillHide:(id)_keyboard;
-(void)_keyboardWillShow:(id)_keyboard;
-(void)_setContentInset:(float)inset;
-(float)_getKeyboardIntersectionHeight;
-(void)_leftToolbarButtonPressed:(id)pressed;
-(void)_rightToolbarButtonPressed:(id)pressed;
-(void)_leftNavigationBarButtonPressed:(id)pressed;
-(void)_rightNavigationBarButtonPressed:(id)pressed;
-(void)_barButtonPressed:(id)pressed isRight:(BOOL)right isNavbar:(BOOL)navbar;
// declared property setter: -(void)setLeftToolbarButton:(id)button;
// declared property setter: -(void)setRightToolbarButton:(id)button;
-(void)_updateToolbar;
// declared property setter: -(void)setLeftNavigationBarButton:(id)button;
// declared property setter: -(void)setRightNavigationBarButton:(id)button;
-(void)setButton:(id)button enabled:(BOOL)enabled;
// declared property getter: -(id)buttons;
-(id)_barButtonItemForDict:(id)dict action:(SEL)action;
-(void)setHasToolbar;
// declared property setter: -(void)setHidesBackButton:(BOOL)button;
// declared property setter: -(void)setLoadingTitle:(id)title;
// declared property setter: -(void)setNavTitle:(id)title;
-(void)_updateNavItemTitle;
-(id)description;
-(id)init;
@end

