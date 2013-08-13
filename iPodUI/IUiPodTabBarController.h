/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import "ViewControllerArchiveNode.h"
#import "UINavigationControllerDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIViewController, IUMoreListDelegateProxy, NSString, NSArray, IUModalContext;

@interface IUiPodTabBarController : XXUnknownSuperclass <UINavigationControllerDelegate, ViewControllerArchiveNode> {
@private
	BOOL _allowsSearch;
	NSArray* _availableIdentifiers;
	NSString* _initialIdentifier;
	BOOL _isRestoringForModalPresentation;
	IUModalContext* _modalContext;
	IUMoreListDelegateProxy* _moreListDelegateProxy;
	IUModalContext* _presentedModalContext;
	int _style;
}
@property(assign, nonatomic) BOOL allowsSearch;	// @synthesize=_allowsSearch
@property(readonly, assign, nonatomic) UIViewController* topViewController;
@property(readonly, assign, nonatomic) NSString* selectedIdentifier;
@property(retain, nonatomic) IUModalContext* modalContext;	// @synthesize=_modalContext
@property(readonly, assign, nonatomic) NSArray* identifiers;
@property(assign, nonatomic) int style;	// @synthesize=_style
+(id)_newNavigationControllerWithRootContextIdentifier:(id)rootContextIdentifier style:(int)style;
+(Class)_moreNavigationControllerClass;
+(id)defaultIdentifiers;
// declared property getter: -(int)style;
// declared property getter: -(id)modalContext;
// declared property setter: -(void)setAllowsSearch:(BOOL)search;
// declared property getter: -(BOOL)allowsSearch;
-(id)_navigationControllerForIdentifier:(id)identifier outIndex:(unsigned*)index;
-(void)_updateViewControllersModalContext;
-(void)_switchToContextBehindCurrentController:(id)contextBehindCurrentController withRootControllerIdentifier:(id)rootControllerIdentifier withPlaybackDataSource:(id)playbackDataSource;
-(BOOL)_shouldPushContextDuringSwitch:(id)aSwitch;
-(void)_setNavigationControllerDelegates:(id)delegates;
-(void)_reloadIPodViewControllers;
-(BOOL)_pushContextForSpecifier:(id)specifier unlessMatchesFinalIdentifier:(id)identifier animated:(BOOL)animated;
-(void)_fixMoreListNavigationBar;
-(id)_copyTabBarOrdering;
-(void)_mediaLibraryDidChangeNotification:(id)_mediaLibrary;
-(void)_enabledMediaTypesDidChangeNotification:(id)_enabledMediaTypes;
-(void)_defaultMediaLibraryDidChangeNotification:(id)_defaultMediaLibrary;
-(void)_availableMediaLibrariesDidChangeNotification:(id)_availableMediaLibraries;
-(void)_updateControllersAvailable;
-(BOOL)_canDisplayItemWithIdentifier:(id)identifier;
-(BOOL)restoreArchivedContexts:(id)contexts;
-(id)copyArchivableContexts;
-(void)tabBar:(id)bar didEndCustomizingItems:(id)items changed:(BOOL)changed;
-(void)tabBar:(id)bar willShowCustomizationSheet:(id)sheet withNavigationBar:(id)navigationBar;
-(void)setViewControllers:(id)controllers animated:(BOOL)animated;
-(void)_setSelectedViewController:(id)controller;
-(void)dismissModalViewControllerAnimated:(BOOL)animated;
-(void)dismissViewControllerAnimated:(BOOL)animated completion:(id)completion;
// declared property getter: -(id)topViewController;
-(void)switchToShortcutIdentifier:(id)shortcutIdentifier;
-(void)switchToPlaylistContextForSpecifier:(id)specifier behindTopController:(BOOL)controller withPlaybackDataSource:(id)playbackDataSource;
-(void)switchToPlaylistContextForSpecifier:(id)specifier behindTopController:(BOOL)controller;
-(void)switchToContext:(id)context withRootControllerIdentifier:(id)rootControllerIdentifier;
-(void)switchToAlbumContextForSpecifier:(id)specifier behindTopController:(BOOL)controller;
// declared property setter: -(void)setStyle:(int)style;
// declared property setter: -(void)setModalContext:(id)context;
-(void)selectIdentifierAfterIdentifier:(id)identifier;
-(void)selectNextIdentifier;
// declared property getter: -(id)selectedIdentifier;
-(id)_rawSelectedIdentifier;
-(void)selectControllerWithIdentifier:(id)identifier;
-(id)visibleCustomViewControllers;
-(void)modalContext:(id)context didRestoreArchivedContexts:(id)contexts;
-(void)modalContext:(id)context willRestoreArchivedContexts:(id)contexts;
-(void)presentModalContext:(id)context animated:(BOOL)animated;
// declared property getter: -(id)identifiers;
-(void)dealloc;
-(id)initWithControllersWithAvailableIdentifiers:(id)availableIdentifiers initialIdentifier:(id)identifier maximumNumberOfItems:(int)items;
-(id)initWithControllersWithAvailableIdentifiers:(id)availableIdentifiers initialIdentifier:(id)identifier;
-(id)initWithControllersWithAvailableIdentifiers:(id)availableIdentifiers;
-(id)init;
@end

