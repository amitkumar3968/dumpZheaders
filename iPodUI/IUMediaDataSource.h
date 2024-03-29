/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "iPodUI-Structs.h"

@class MPStoreCompletionOffering, NSString, IUModalContext;

@interface IUMediaDataSource : XXUnknownSuperclass {
	IUModalContext* _modalContext;
	NSString* _title;
	BOOL _hasReloaded;
	BOOL _ignoresInvalidation;
	BOOL _coalesceInvalidateNotificationsSkipped;
	int _coalesceInvalidateNotifications;
	BOOL _editing;
	NSString* _backButtonTitle;
@private
	MPStoreCompletionOffering* _completionOffering;
}
@property(readonly, assign, nonatomic) BOOL isContentDisplayEnabled;
@property(readonly, assign, nonatomic) BOOL canShowCompletionOfferings;
@property(retain, nonatomic) MPStoreCompletionOffering* completionOffering;	// @synthesize=_completionOffering
@property(retain, nonatomic) NSString* backButtonTitle;	// @synthesize=_backButtonTitle
@property(assign, nonatomic, getter=isEditing, setter=setIsEditing:) BOOL editing;	// @synthesize=_editing
@property(readonly, assign, nonatomic, getter=isRestorableNavigationPathNode) BOOL restorableNavigationPathNode;
@property(readonly, assign, nonatomic) BOOL shouldDisplayWhenEmpty;
@property(retain, nonatomic) NSString* title;	// @synthesize=_title
@property(retain, nonatomic) IUModalContext* modalContext;	// @synthesize=_modalContext
@property(assign, nonatomic) BOOL ignoresInvalidation;	// @synthesize=_ignoresInvalidation
+(BOOL)isLoadingDisabled;
+(void)setLoadingDisabled:(BOOL)disabled;
+(id)moreListTitleKey;
+(id)shortNoContextNavigationTitleKey;
+(id)tabBarItemTitleKey;
+(int)tabBarSystemItem;
+(id)tabBarItemIconName;
+(UIEdgeInsets)tabBarItemIconImageInsets;
+(id)defaultTitle;
// declared property getter: -(id)completionOffering;
// declared property setter: -(void)setBackButtonTitle:(id)title;
// declared property getter: -(id)backButtonTitle;
// declared property getter: -(BOOL)isEditing;
// declared property setter: -(void)setIgnoresInvalidation:(BOOL)invalidation;
// declared property getter: -(BOOL)ignoresInvalidation;
// declared property setter: -(void)setTitle:(id)title;
// declared property getter: -(id)title;
// declared property getter: -(id)modalContext;
// declared property getter: -(BOOL)canShowCompletionOfferings;
// declared property setter: -(void)setCompletionOffering:(id)offering;
// declared property getter: -(BOOL)isContentDisplayEnabled;
-(int)filteredMediaTypes;
// declared property setter: -(void)setIsEditing:(BOOL)editing;
-(id)viewControllerContextForSearchCompletion;
-(id)viewControllerContextForMediaQuery:(id)mediaQuery;
-(id)viewControllerContextForSpecifier:(id)specifier;
// declared property setter: -(void)setModalContext:(id)context;
-(void)unloadReloadableData;
-(void)attemptToReloadDataIfNecessary;
-(void)reloadData;
-(void)endCoalescingChanges;
-(void)beginCoalescingChanges;
-(void)invalidate;
-(id)shortNoContextNavigationBackButtonTitle;
-(id)tabBarItemTitle;
-(id)newTabBarItem;
-(id)createNoContentDataSource;
-(void)configureMoreListTableCell:(id)cell;
-(SEL)libraryHasDisplayableEntitiesSelector;
-(id)contextForContext:(id)context redirectType:(int)type;
-(BOOL)showShuffleButtonWhenApplicable;
// declared property getter: -(BOOL)isRestorableNavigationPathNode;
// declared property getter: -(BOOL)shouldDisplayWhenEmpty;
-(void)dealloc;
-(BOOL)shouldHideContainerNavigationBar;
@end

