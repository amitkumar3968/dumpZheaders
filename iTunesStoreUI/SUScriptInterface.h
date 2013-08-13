/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "SUScriptObject.h"
#import "iTunesStoreUI-Structs.h"

@class SUWebImagePool, SUScriptNavigationBar, SUScriptSectionsController, SUScriptAppleAccountStore, SUScriptDevice, SUScriptFairPlayContext, SUScriptNotificationObserver, NSString, NSArray, SUScriptPurchaseManager, SSAuthenticationContext, SUClientInterface, NSMutableDictionary, WebFrame, NSNumber, SUScriptAccount, SUScriptKeyValueStore, SUScriptAccountManager, SUScriptOperationDelegate, SUScriptApplication, SUScriptProtocol, SUScriptPreviewOverlay, SUScriptWindow, SUScriptWindowContext, SUScriptMediaLibrary, SUScriptViewController;
@protocol SUScriptInterfaceDelegate;

@interface SUScriptInterface : SUScriptObject {
	SUScriptAccountManager* _accountManager;
	SUScriptKeyValueStore* _applicationLocalStorage;
	SSAuthenticationContext* _authenticationContext;
	SUClientInterface* _clientInterface;
	id<SUScriptInterfaceDelegate> _delegate;
	SUScriptKeyValueStore* _deviceLocalStorage;
	NSMutableDictionary* _downloadQueues;
	WebFrame* _frame;
	SUScriptMediaLibrary* _mediaLibrary;
	SUScriptNotificationObserver* _notificationObserver;
	SUScriptPreviewOverlay* _previewOverlay;
	SUScriptPurchaseManager* _purchaseManager;
	SUScriptOperationDelegate* _scriptOperationDelegate;
	SUScriptWindowContext* _scriptWindowContext;
	id _threadSafeDelegate;
	SUWebImagePool* _webImagePool;
}
@property(readonly, assign) id screenReaderRunning;
@property(readonly, assign) SUScriptPreviewOverlay* previewOverlay;
@property(readonly, assign) NSNumber* orientation;
@property(readonly, assign) SUScriptNavigationBar* navigationBar;
@property(readonly, assign) id loggingEnabled;
@property(readonly, assign) id globalRootObject;
@property(readonly, assign) SUScriptKeyValueStore* deviceLocalStorage;
@property(copy) NSString* cookie;
@property(readonly, assign) NSString* clientIdentifier;
@property(readonly, assign) SUScriptKeyValueStore* applicationLocalStorage;
@property(readonly, assign) id applicationAccessibilityEnabled;
@property(retain) WebFrame* webFrame;
@property(retain) SUClientInterface* clientInterface;
@property(readonly, assign) id<SUScriptInterfaceDelegate> threadSafeDelegate;
@property(assign) id<SUScriptInterfaceDelegate> delegate;
@property(retain) SUScriptWindowContext* scriptWindowContext;
@property(copy) SSAuthenticationContext* authenticationContext;
@property(readonly, assign) SUScriptFairPlayContext* accountCreationSecureContext;
@property(readonly, assign) SUScriptAppleAccountStore* appleAccountStore;
@property(readonly, assign) SUScriptPurchaseManager* purchaseManager;
@property(readonly, assign) NSString* actionTypeReturnToLibrary;
@property(readonly, assign) SUScriptDevice* device;
@property(readonly, assign) SUScriptApplication* application;
@property(readonly, assign) SUScriptMediaLibrary* mediaLibrary;
@property(readonly, assign) SUScriptWindow* window;
@property(readonly, assign) SUScriptProtocol* protocol;
@property(readonly, assign) SUScriptViewController* viewController;
@property(readonly, assign) SUScriptSectionsController* sectionsController;
@property(retain) SUScriptAccount* primaryLockerAccount;
@property(retain) SUScriptAccount* primaryAccount;
@property(readonly, assign) NSArray* accounts;
@property(readonly, assign) NSArray* installedSoftwareApplications;
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)selector;
+(id)webScriptNameForKeyName:(id)keyName;
+(int)purchaseAnimationStyleFromString:(id)string;
-(id)scriptAttributeKeys;
-(id)attributeKeys;
-(id)_copyDialogWithMessage:(id)message title:(id)title cancelButtonTitle:(id)title3 okButtonTitle:(id)title4;
-(void)_scriptUserInfoDidChangeNotification:(id)_scriptUserInfo;
-(void)_globalEventNotification:(id)notification;
-(id)showPromptWithMessage:(id)message initialValue:(id)value title:(id)title okButtonTitle:(id)title4 cancelButtonTitle:(id)title5;
-(BOOL)showConfirmWithMessage:(id)message title:(id)title okButtonTitle:(id)title3 cancelButtonTitle:(id)title4;
-(void)showAlertWithMessage:(id)message title:(id)title buttonTitle:(id)title3;
-(BOOL)isExplicitContentDisabled;
-(id)hardwareType;
-(id)diskSpaceAvailable;
-(BOOL)canSendEmail;
-(BOOL)arePodcastsDisabled;
-(id)activeNetworkType;
-(void)selectTrackListItemWithIdentifier:(id)identifier;
-(void)handleTrackListWithPropertyListString:(id)propertyListString;
-(void)handleRootObjectWithPropertyListString:(id)propertyListString;
-(BOOL)checkCapabilitiesPropertyListString:(id)string showFailureDialog:(BOOL)dialog;
-(id)systemVersion;
-(BOOL)shouldRestrictContentOfSystem:(id)system level:(id)level;
-(BOOL)haveAccount;
-(id)accountName;
-(id)accountDSID;
-(void)setNavigationBar:(id)bar;
-(void)setOrientation:(id)orientation;
-(void)setLoggingEnabled:(id)enabled;
-(void)setGlobalRootObject:(id)object;
// declared property setter: -(void)setCookie:(id)cookie;
// declared property getter: -(id)screenReaderRunning;
// declared property getter: -(id)previewOverlay;
-(id)requestInfo;
// declared property getter: -(id)orientation;
// declared property getter: -(id)navigationBar;
// declared property getter: -(id)loggingEnabled;
// declared property getter: -(id)globalRootObject;
// declared property getter: -(id)cookie;
// declared property getter: -(id)clientIdentifier;
-(id)_className;
// declared property getter: -(id)applicationLocalStorage;
// declared property getter: -(id)applicationAccessibilityEnabled;
-(void)accessibilityPostScreenChange;
-(void)accessibilityPostLayoutChange;
-(void)_accessibilityPostLayoutChange;
-(void)signOutPrimaryAccount;
-(void)setLibraryIdentifierWithType:(id)type value:(id)value;
-(void)sendPostOfType:(id)type withOptions:(id)options;
-(void)reportAProblemForIdentifier:(id)identifier;
-(void)registerNavBarButtonWithTitle:(id)title side:(id)side function:(id)function;
-(void)performPurchaseAnimationForIdentifier:(id)identifier style:(id)style;
-(void)perfLog:(id)log;
-(id)machineGUID;
-(void)log:(id)log;
-(void)handleDialogPropertyListString:(id)string;
-(void)dispatchGlobalEventWithName:(id)name payload:(id)payload;
-(id)parentViewController;
-(id)DOMElementWithElement:(id)element;
// declared property getter: -(id)webFrame;
// declared property getter: -(id)threadSafeDelegate;
// declared property setter: -(void)setWebFrame:(id)frame;
// declared property setter: -(void)setScriptWindowContext:(id)context;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property setter: -(void)setClientInterface:(id)interface;
// declared property setter: -(void)setAuthenticationContext:(id)context;
// declared property getter: -(id)scriptWindowContext;
-(id)imagePool;
// declared property getter: -(id)deviceLocalStorage;
// declared property getter: -(id)delegate;
-(OpaqueJSContext*)copyJavaScriptContext;
// declared property getter: -(id)clientInterface;
// declared property getter: -(id)authenticationContext;
-(void)dealloc;
-(id)init;
-(void)finishedTest:(id)test extraResults:(id)results;
-(void)startedTest:(id)test;
-(BOOL)isRunningTest;
-(BOOL)launchedToTest;
-(void)_getSoftwareApplicationWithCompletionFunction:(id)completionFunction lookupBlock:(id)block;
// declared property getter: -(id)installedSoftwareApplications;
-(id)softwareApplicationWithBundleID:(id)bundleID;
-(id)softwareApplicationWithAdamID:(id)adamID;
-(void)getSoftwareApplicationWithBundleID:(id)bundleID completionFunction:(id)function;
-(void)getSoftwareApplicationWithAdamID:(id)adamID completionFunction:(id)function;
-(void)getInstalledSoftwareApplicationsWithCompletionFunction:(id)completionFunction;
-(id)makePopOverWithViewController:(id)viewController;
-(id)makeTextFieldWithStyle:(id)style placeholder:(id)placeholder value:(id)value width:(id)width;
-(id)systemItemUndo;
-(id)systemItemTrash;
-(id)systemItemStop;
-(id)systemItemSearch;
-(id)systemItemRewind;
-(id)systemItemReplay;
-(id)systemItemRefresh;
-(id)systemItemRedo;
-(id)systemItemPlay;
-(id)systemItemPause;
-(id)systemItemPageCurl;
-(id)systemItemOrganize;
-(id)systemItemFlexibleSpace;
-(id)systemItemFixedSpace;
-(id)systemItemFastForward;
-(id)systemItemEdit;
-(id)systemItemDone;
-(id)systemItemCompose;
-(id)systemItemCancel;
-(id)systemItemCamera;
-(id)systemItemBookmarks;
-(id)systemItemAdd;
-(id)systemItemAction;
-(id)makeButtonWithTitle:(id)title action:(id)action;
-(id)makeButtonWithSystemItemString:(id)systemItemString action:(id)action;
-(id)makeDialog;
-(int)dialogDisplayCountForKey:(id)key;
// declared property setter: -(void)setPrimaryLockerAccount:(id)account;
// declared property setter: -(void)setPrimaryAccount:(id)account;
-(void)setAccounts:(id)accounts;
// declared property getter: -(id)primaryLockerAccount;
// declared property getter: -(id)primaryAccount;
// declared property getter: -(id)accounts;
-(id)makeAccount;
-(void)authenticateForAccount:(id)account withOptions:(id)options;
-(id)accountForDSID:(id)dsid;
-(void)initAuthentication;
-(void)deallocAuthentication;
-(id)getDownloadQueueWithQueueType:(id)queueType;
-(void)gotoStoreURL:(id)url ofType:(id)type withAuthentication:(BOOL)authentication forceAuthentication:(BOOL)authentication4;
-(void)gotoStoreURL:(id)url;
-(void)goBack;
-(void)dismissSheet;
// declared property getter: -(id)viewController;
// declared property getter: -(id)sectionsController;
-(void)selectSectionWithIdentifier:(id)identifier;
-(void)reloadFooterSection:(id)section withURL:(id)url;
-(void)redeemCode:(id)code;
-(void)openURL:(id)url;
-(id)makeStorePageWithURLs:(id)urls;
-(id)makeNavigationControllerWithRootViewController:(id)rootViewController;
-(void)dismissWindowsWithOptions:(id)options;
-(void)composeEmailWithSubject:(id)subject body:(id)body;
-(void)handleProtocolPropertyListString:(id)string;
// declared property getter: -(id)protocol;
-(void)retryAllRestoreDownloads;
-(void)pingURL:(id)url;
// declared property getter: -(id)window;
-(void)setWindow:(id)window;
-(id)makeWindow;
-(id)makeNumberFormatterWithStyle:(id)style;
-(id)makeSplitViewController;
-(id)makeMenuViewController;
-(id)makeCanvasWithWidth:(id)width height:(id)height;
-(id)makeColorWithWhite:(id)white alpha:(id)alpha;
-(id)makeColorWithRed:(id)red green:(id)green blue:(id)blue alpha:(id)alpha;
-(id)makeColorWithHue:(id)hue saturation:(id)saturation brightness:(id)brightness alpha:(id)alpha;
-(id)makeRadialGradientWithX0:(float)x0 y0:(float)a0 r0:(float)a03 x1:(float)a1 y1:(float)a15 r1:(float)a16;
-(id)makeLinearGradientWithX0:(float)x0 y0:(float)a0 x1:(float)a1 y1:(float)a14;
-(void)setMediaLibrary:(id)library;
// declared property getter: -(id)mediaLibrary;
-(void)deallocMediaLibrary;
-(void)addPurchaseWithInfo:(id)info;
-(void)addExternalDownloads:(id)downloads;
-(void)addPurchaseWithInfo:(id)info options:(id)options;
-(void)addExternalDownloadsFromManifestURL:(id)manifestURL;
-(void)addExternalDownloads:(id)downloads options:(id)options;
-(id)makeReviewWithAdamID:(id)adamID;
-(void)composeReviewWithURL:(id)url itemIdentifier:(id)identifier type:(id)type;
-(id)makeComposeReviewViewControllerWithReview:(id)review;
// declared property getter: -(id)application;
-(id)makeVolumeViewController;
-(id)makeSegmentedControl;
-(id)makeURLRequestWithURLs:(id)urls timeoutInterval:(id)interval;
-(id)makeReportAProblemViewControllerWithAdamID:(id)adamID;
-(void)setDevice:(id)device;
// declared property getter: -(id)device;
-(id)makeAccountPageWithURLs:(id)urls;
-(id)makeScriptImagePickerController;
-(id)makeMessageEntryViewController;
-(id)makeMessage;
-(id)makeDocumentInteractionController;
// declared property getter: -(id)actionTypeReturnToLibrary;
-(id)makeScriptActionWithType:(id)type;
-(id)makeDateFormatter;
// declared property getter: -(id)purchaseManager;
-(id)makeTweetComposeViewController;
-(id)makeMediaPlayerItemWithProperties:(id)properties;
-(void)showMediaPreviewWithURLString:(id)urlstring;
-(void)showMediaPlayerWithURLString:(id)urlstring orientation:(id)orientation title:(id)title subtitle:(id)subtitle bookmarkID:(id)anId duration:(id)duration type:(id)type imageURL:(id)url;
-(id)makeMediaPlayerViewControllerWithMediaPlayerItem:(id)mediaPlayerItem;
-(id)getAudioPlayerForURL:(id)url;
-(id)activeAudioPlayers;
-(id)makeActivityViewControllerWithProviders:(id)providers activities:(id)activities;
-(id)makeFacebookRequestWithURL:(id)url requestMethod:(id)method;
-(id)makeActivity;
// declared property getter: -(id)appleAccountStore;
-(id)makeActivityItemProviderWithMIMEType:(id)mimetype;
-(id)makeLookupRequest;
-(id)makeFacebookSessionWithAccount:(id)account;
-(id)makeCalloutView;
// declared property getter: -(id)accountCreationSecureContext;
@end

