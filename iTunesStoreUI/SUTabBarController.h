/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "SUOverlayBackgroundDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSMutableArray, UIViewController, NSArray, UIImage, SUClientInterface, SUViewController, SUPreviewOverlayViewController;
@protocol SUTabBarControllerDelegate;

@interface SUTabBarController : XXUnknownSuperclass <SUOverlayBackgroundDelegate> {
	SUClientInterface* _clientInterface;
	NSString* _moreListTitle;
	NSMutableArray* _overlayBackgroundViewControllers;
	UIViewController* _preTransientSelectedViewController;
	int _reloadingUnderneathTransientControllerCount;
	NSArray* _sections;
@private
	BOOL _ignoreTabReselection;
	UIImage* _moreListSelectedImage;
	UIImage* _moreListUnselectedImage;
	SUViewController* _preloadedViewController;
	NSString* _preloadedViewControllerIdentifier;
	NSString* _preloadedViewControllerKey;
	SUPreviewOverlayViewController* _previewOverlayViewController;
}
@property(readonly, assign, nonatomic, getter=_previewOverlayViewController) SUPreviewOverlayViewController* _previewOverlayViewController;
@property(retain, nonatomic) NSString* moreListTitle;	// @synthesize=_moreListTitle
@property(retain, nonatomic) NSString* selectedIdentifier;
@property(retain, nonatomic) NSArray* sections;	// @synthesize=_sections
@property(assign, nonatomic) id<SUTabBarControllerDelegate> delegate;	// @dynamic
@property(readonly, assign, nonatomic) SUClientInterface* clientInterface;	// @synthesize=_clientInterface
+(Class)_moreNavigationControllerClass;
// declared property getter: -(id)sections;
// declared property getter: -(id)moreListTitle;
// declared property getter: -(id)clientInterface;
-(id)_viewControllerForContext:(id)context;
-(void)_transitionSafeHandlePartnerChange:(id)change;
-(void)_showPhonePreviewOverlay:(id)overlay animated:(BOOL)animated;
-(void)_showPadPreviewOverlay:(id)overlay animated:(BOOL)animated;
-(id)_sectionForType:(int)type;
-(id)_sectionForIdentifier:(id)identifier;
-(BOOL)_saveTransientNavigationPathToDefaults;
-(BOOL)_saveNavigationPathToDefaults;
-(id)_rootViewControllerForSection:(id)section;
-(void)_restoreArchivedTransientContexts:(id)contexts;
-(void)_restoreOverlayContexts:(id)contexts;
-(void)_restoreArchivedContexts:(id)contexts;
-(void)_removePreviewOverlayViewController;
-(void)_reloadViewControllersFromSections:(id)sections animated:(BOOL)animated;
-(void)_moveView:(id)view toView:(id)view2;
-(void)_moveTransientViewController:(id)controller toSectionWithIdentifier:(id)identifier asRoot:(BOOL)root;
-(BOOL)_isReloadingUnderneathTransientViewController;
-(void)_hidePhonePreviewOverlayAnimated:(BOOL)animated;
-(void)_hidePadPreviewOverlayAnimated:(BOOL)animated;
-(void)_fixupViewControllers;
-(void)_fixupTabBarSelection;
-(void)_endReloadingUnderneathTransientViewController;
-(void)_beginReloadingUnderneathTransientViewController;
-(id)_archivedContextsForViewController:(id)viewController;
-(void)_applyMoreListConfiguration;
-(void)_showPreviewOverlay:(id)overlay animated:(BOOL)animated;
// declared property getter: -(id)_previewOverlayViewController;
-(void)_hidePreviewOverlayAnimated:(BOOL)animated;
-(void)_partnerChanged:(id)changed;
-(void)_applicationDidChangeStatusBarFrame:(id)_application;
-(id)viewControllerForSectionType:(int)sectionType;
-(id)viewControllerForSectionIdentifier:(id)sectionIdentifier;
// declared property setter: -(void)setSelectedIdentifier:(id)identifier;
// declared property setter: -(void)setSections:(id)sections;
// declared property getter: -(id)selectedIdentifier;
-(unsigned)indexOfViewControllerWithSectionType:(int)sectionType;
-(void)scriptOverlayBackgroundDidDismiss:(id)scriptOverlayBackground;
-(BOOL)presentOverlayBackgroundViewController:(id)controller;
-(id)overlayBackgroundViewController;
-(void)dismissOverlayBackgroundViewController;
-(BOOL)window:(id)window shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
-(void)cancelTransientViewController:(id)controller;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidDisappear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)tabBar:(id)bar willShowCustomizationSheet:(id)sheet withNavigationBar:(id)navigationBar;
-(void)tabBar:(id)bar willEndCustomizingItems:(id)items changed:(BOOL)changed;
-(void)tabBar:(id)bar didEndCustomizingItems:(id)items changed:(BOOL)changed;
-(void)setViewControllers:(id)controllers animated:(BOOL)animated;
-(void)setTransientViewController:(id)controller animated:(BOOL)animated;
-(id)selectedViewController;
-(void)_setSelectedViewController:(id)controller;
-(id)_sectionForViewController:(id)viewController;
-(id)rotatingHeaderView;
-(id)rotatingFooterView;
-(BOOL)_isSupportedInterfaceOrientation:(int)orientation;
-(void)loadView;
-(void)setTransientViewController:(id)controller onSectionWithIdentifier:(id)identifier;
-(void)setSectionOrdering:(id)ordering;
// declared property setter: -(void)setMoreListTitle:(id)title;
-(void)setMoreListSelectedImage:(id)image unselectedImage:(id)image2;
-(void)selectSectionOfType:(int)type;
-(void)selectDefaultSection;
-(BOOL)saveToDefaults;
-(BOOL)saveOrderingToDefaults;
-(void)resetUserDefaults;
-(void)resetToSystemDefaults;
-(void)reloadSectionWithIdentifier:(id)identifier URL:(id)url;
-(void)reloadSectionVisibilityAnimated:(BOOL)animated;
-(void)pushTransientViewController:(id)controller onSectionWithIdentifier:(id)identifier;
-(BOOL)loadFromDefaults;
-(BOOL)loadFromDefaultsAndSetSections:(id)defaultsAndSetSections;
-(void)dealloc;
-(id)initWithClientInterface:(id)clientInterface;
-(id)init;
@end

