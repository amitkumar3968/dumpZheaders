/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "iTunesStoreUI-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class SUViewControllerFactory, SUStorePageProtocol, SUGridView;

@interface XXUnknownSuperclass (SUTabBarControllerAdditions)
-(void)tabBarControllerDidReselectTabBarItem:(id)tabBarController;
@end

@interface XXUnknownSuperclass (SUTabBarControllerAdditions)
-(void)tabBarControllerDidReselectTabBarItem:(id)tabBarController;
@end

@interface XXUnknownSuperclass (SUAdditions)
-(id)selectedNavigationController;
@end

@interface XXUnknownSuperclass (SUAdditions)
@property(readonly, assign, nonatomic) BOOL shouldInvalidateForMemoryPurge;
@property(readonly, assign, nonatomic, getter=isLoading) BOOL loading;
@property(readonly, assign, nonatomic, getter=isLoaded) BOOL loaded;
@property(readonly, assign, nonatomic) SUViewControllerFactory* viewControllerFactory;
// declared property getter: -(id)viewControllerFactory;
// declared property getter: -(BOOL)shouldInvalidateForMemoryPurge;
-(void)setBadgeValue:(id)value animated:(BOOL)animated blink:(BOOL)blink;
-(id)section;
-(id)_sectionForViewController:(id)viewController;
-(void)restoreArchivableContext:(id)context;
-(void)resetRestoredContext;
-(void)parentViewControllerHierarchyDidChange;
-(void)keyboardWillShowWithInfo:(id)keyboard;
-(void)keyboardWillHideWithInfo:(id)keyboard;
-(void)keyboardDidShowWithInfo:(id)keyboard;
-(void)keyboardDidHideWithInfo:(id)keyboard;
-(BOOL)isRootViewController;
// declared property getter: -(BOOL)isLoading;
// declared property getter: -(BOOL)isLoaded;
-(BOOL)isInMoreList;
-(BOOL)isDescendantOfViewController:(id)viewController;
-(void)iTunesStoreUI_dismissAction:(id)action;
-(void)dismissAnimated:(BOOL)animated;
-(id)copyArchivableJetsamContext;
-(id)copyArchivableContext;
@end

@interface XXUnknownSuperclass (SUAdditions)
-(void)invalidate;
-(unsigned)indexOfViewController:(id)viewController;
-(id)firstViewController;
@end

@interface XXUnknownSuperclass (SUStorePageAdditions)
-(BOOL)reloadWithURLRequestProperties:(id)urlrequestProperties;
-(BOOL)pushStorePage:(id)page withTarget:(int)target animated:(BOOL)animated;
-(BOOL)loadMoreWithURL:(id)url;
-(BOOL)hasDisplayableContent;
-(void)handleStoreFailureWithError:(id)error;
@end

@interface XXUnknownSuperclass (SUStorePageChildViewController)
@property(readonly, assign, nonatomic) CGRect documentBounds;
@property(retain, nonatomic) SUStorePageProtocol* storePageProtocol;
-(BOOL)viewIsReady;
-(void)storePageProtocolDidChange;
// declared property getter: -(id)storePageProtocol;
-(void)storePageCleanupBeforeTearDown;
// declared property setter: -(void)setStorePageProtocol:(id)protocol;
-(void)reloadWithStorePage:(id)storePage forURL:(id)url;
// declared property getter: -(CGRect)documentBounds;
-(id)displayedURL;
@end

@interface XXUnknownSuperclass (SUSectionedViewControllerAdditions)
-(id)setDisplayedSectionGroup:(id)group;
-(BOOL)reloadForSectionsWithGroup:(id)group;
-(BOOL)canDisplaySectionGroup:(id)group;
@end

@interface XXUnknownSuperclass (SUTouchCapture)
-(id)removeTouchCaptureViewWithTag:(int)tag;
-(id)addTouchCaptureViewWithTag:(int)tag;
@end

@interface XXUnknownSuperclass (SUAdditions)
-(void)safeEncodeUIColor:(id)color forKey:(id)key;
@end

@interface XXUnknownSuperclass (SUAdditions)
+(id)colorWithStyleString:(id)styleString;
-(id)initWithStyleString:(id)styleString;
@end

@interface XXUnknownSuperclass (SUAdditions)
-(id)stretchableImageWithLeftCapWidth:(int)leftCapWidth rightCapWidth:(int)width;
@end

@interface XXUnknownSuperclass (SUAdditions)
-(void)setTitleView:(id)view animated:(BOOL)animated;
-(void)resetAllValues;
-(void)mergeValuesFromItem:(id)item;
-(void)fadeOutTitleView;
-(void)fadeInTitleView;
@end

@interface XXUnknownSuperclass (SUAdditions)
@property(retain) id topExtensionViewColor;	// converted property
// converted property getter: -(id)topExtensionViewColor;
// converted property setter: -(void)setTopExtensionViewColor:(id)color;
@end

@interface XXUnknownSuperclass (SUAdditions)
-(void)sizeToFitWithMinimumSegmentWidth:(float)minimumSegmentWidth maximumTotalWidth:(float)width;
@end

@interface XXUnknownSuperclass (SUAdditions)
-(void)setBadgeValue:(id)value animated:(BOOL)animated blink:(BOOL)blink;
@end

@interface XXUnknownSuperclass (SUAdditions)
-(id)superviewOfClass:(Class)aClass;
-(void)centerSubviewInBounds:(id)bounds;
@end

@interface XXUnknownSuperclass (SUDialogAdditions)
+(id)ITunesStoreNotAvailableDialog;
@end

@interface XXUnknownSuperclass (SUAdditions)
+(id)termsAndConditionsURL;
-(int)storeURLType;
@end

@interface XXUnknownSuperclass (SUAdditions)
+(id)pathForITunesResource:(id)itunesResource ofType:(id)type;
-(id)newDataURLForResource:(id)resource ofType:(id)type withMIMEType:(id)mimetype;
@end

@interface XXUnknownSuperclass (SUTransitionSafety)
+(id)transitionSafetyDelegate;
+(id)transitionSafePerformer:(id)performer;
+(void)endTransitionSafety;
+(void)beginTransitionSafety;
+(void)_iTunesStoreUI_timeoutTransitionSafety;
+(void)_iTunesStoreUI_enqueueTransitionSafeInvocation:(id)invocation;
+(void)_iTunesStoreUI_dequeueTransitionSafeInvocations;
-(void)transitionSafePresentModalViewController:(id)controller animated:(BOOL)animated;
@end

@interface XXUnknownSuperclass (SUAggregatedDataSourceAdditions)
-(id)indexPathBySettingSection:(unsigned)section;
@end

@interface XXUnknownSuperclass (SUPPT)
-(void)endCurrentPPT;
-(void)beginPPTWithName:(id)name;
@end

@interface XXUnknownSuperclass (SUPPT)
-(void)runScrollTest:(id)test withDelta:(float)delta forIterations:(int)iterations;
-(void)scrollBy:(float)by forIterations:(int)iterations;
-(void)_testingScrollStep;
@end

@interface XXUnknownSuperclass (SUPPT)
-(id)scriptEntry;
-(id)scriptPath;
-(SEL)testSelector;
-(SEL)setupSelector;
-(float)offset;
-(int)iterations;
@end

@interface XXUnknownSuperclass (SUPPT)
-(id)firstScrollViewDescendant;
-(id)_firstDescendantOfKind:(Class)kind;
@end

@interface XXUnknownSuperclass (SUScriptAdditions)
-(id)safeValueForKey:(id)key;
-(id)safeCallWebScriptMethod:(id)method withArguments:(id)arguments;
-(id)copyValuesForKeys:(id)keys;
-(id)copyJSONDataWithContext:(OpaqueJSContext*)context;
-(id)copyArrayOrDictionaryWithContext:(OpaqueJSContext*)context;
-(id)copyArrayValueWithValidator:(/*function-pointer*/ void*)validator context:(void*)context;
@end

@interface XXUnknownSuperclass (SUScriptAdditions)
-(id)copyObjectForScriptFromPoolWithClass:(Class)aClass;
@end

@interface XXUnknownSuperclass (SUInvocationAdditions)
-(id)responderChainProxy:(id)proxy;
@end

@interface XXUnknownSuperclass (SUPopOverController)
-(id)copyScriptPopOver;
@end

@interface XXUnknownSuperclass (SUScriptTextFieldAdditions)
-(void)configureFromScriptTextField:(id)scriptTextField;
@end

@interface XXUnknownSuperclass (SUScriptButtonAdditions)
-(void)configureFromScriptButton:(id)scriptButton;
@end

@interface XXUnknownSuperclass (SUScriptButtonAdditions)
-(void)configureFromScriptButton:(id)scriptButton;
@end

@interface XXUnknownSuperclass (SUScriptPost)
-(void)setScriptOptions:(id)options;
-(void)sendCompletionCallback:(id)callback;
@end

@interface XXUnknownSuperclass (SUScriptViewControllerAdditions)
-(id)copyScriptViewController;
@end

@interface XXUnknownSuperclass (SUScriptStorePageViewControllerAdditions)
@property(assign) BOOL showsBackgroundShadow;	// converted property
// converted property getter: -(BOOL)showsBackgroundShadow;
// converted property setter: -(void)setShowsBackgroundShadow:(BOOL)shadow;
@end

@interface XXUnknownSuperclass (SUOverlayBackgroundAdditions)
-(BOOL)presentViewController:(id)controller inOverlayWithConfiguration:(id)configuration;
-(BOOL)presentOverlayViewController:(id)controller withTransition:(id)transition;
-(BOOL)presentOverlayBackgroundViewController:(id)controller;
-(id)overlayBackgroundViewController;
-(void)dismissOverlayBackgroundViewController;
@end

@interface XXUnknownSuperclass (SUOverlayViewControllerAdditions)
-(id)scriptWindowContext;
-(id)overlayViewController;
@end

@interface XXUnknownSuperclass (SUSplitViewAdditions)
-(id)storeSplitViewController;
-(CGSize)minimumViewSize;
-(CGSize)maximumViewSize;
@end

@interface XXUnknownSuperclass (SUScriptNavigationItemAdditions)
-(id)navigationItemForScriptInterface;
@end

@interface XXUnknownSuperclass (SUGridViewAdditions)
@property(readonly, assign, nonatomic) unsigned gridSection;
@property(readonly, assign, nonatomic) unsigned gridRow;
@property(readonly, assign, nonatomic) unsigned gridColumn;
+(id)indexPathForRow:(unsigned)row column:(unsigned)column inSection:(unsigned)section;
// declared property getter: -(unsigned)gridSection;
// declared property getter: -(unsigned)gridRow;
// declared property getter: -(unsigned)gridColumn;
@end

@interface XXUnknownSuperclass (SUGridTableAdditions)
@property(readonly, assign, nonatomic) SUGridView* gridView;
-(void)setEditingBySwiping:(BOOL)swiping animated:(BOOL)animated;
// declared property getter: -(id)gridView;
@end

@interface XXUnknownSuperclass (SUSearchFieldController)
-(id)iTunesStoreUI_searchFieldController;
@end

