/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

#import "RemoteUI-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "UIWebViewDelegate.h"
#import "RUITableViewDelegate.h"
#import "RUIPageDelegate.h"

@class NSTimer, UIAlertView, RUIPage, NSURL, NSString, NSDictionary, NSMutableArray, NSMutableDictionary, NSArray;
@protocol RUIObjectModelDelegate;

@interface RUIObjectModel : XXUnknownSuperclass <UIWebViewDelegate, RUITableViewDelegate, RUIPageDelegate> {
	NSString* _name;
	NSURL* _sourceURL;
	NSURL* _scriptURL;
	NSString* _inlineScript;
	NSString* _validationFunction;
	NSMutableArray* _defaultPages;
	NSMutableDictionary* _namedPages;
	NSMutableArray* _displayedPages;
	int _currentPage;
	id<RUIObjectModelDelegate> _delegate;
	OpaqueJSContext* _ctx;
	NSDictionary* _alert;
	NSDictionary* _clientInfo;
	NSDictionary* _serverInfo;
	int _refreshDelay;
	NSString* _refreshURL;
	NSTimer* _refreshTimer;
	int _nextButtonStyle;
	UIAlertView* _confirmationAlert;
	UIAlertView* _secondConfirmationAlert;
	NSDictionary* _confirmationAttributes;
	NSString* _confirmationURLString;
	NSString* _confirmationButtonName;
}
@property(assign, nonatomic) int nextButtonStyle;	// @synthesize=_nextButtonStyle
@property(retain, nonatomic) NSString* refreshURL;	// @synthesize=_refreshURL
@property(assign, nonatomic) int refreshDelay;	// @synthesize=_refreshDelay
@property(retain, nonatomic) NSDictionary* serverInfo;	// @synthesize=_serverInfo
@property(retain, nonatomic) NSDictionary* clientInfo;	// @synthesize=_clientInfo
@property(retain, nonatomic) NSDictionary* alert;	// @synthesize=_alert
@property(retain, nonatomic) NSString* validationFunction;	// @synthesize=_validationFunction
@property(retain, nonatomic) NSString* inlineScript;	// @synthesize=_inlineScript
@property(retain, nonatomic) NSURL* scriptURL;	// @synthesize=_scriptURL
@property(retain, nonatomic) NSURL* sourceURL;	// @synthesize=_sourceURL
@property(retain, nonatomic) NSString* name;	// @synthesize=_name
@property(readonly, assign, nonatomic) RUIPage* visiblePage;
@property(readonly, assign, nonatomic) NSArray* allPages;
@property(readonly, assign, nonatomic) NSDictionary* namedPages;	// @synthesize=_namedPages
@property(readonly, assign, nonatomic) NSArray* defaultPages;	// @synthesize=_defaultPages
@property(readonly, assign, nonatomic) NSArray* pages;
@property(readonly, assign, nonatomic) NSArray* displayedPages;
+(id)objectModelForXMLNamed:(id)xmlnamed;
// declared property setter: -(void)setNextButtonStyle:(int)style;
// declared property getter: -(int)nextButtonStyle;
// declared property setter: -(void)setRefreshURL:(id)url;
// declared property getter: -(id)refreshURL;
// declared property setter: -(void)setRefreshDelay:(int)delay;
// declared property getter: -(int)refreshDelay;
// declared property setter: -(void)setServerInfo:(id)info;
// declared property getter: -(id)serverInfo;
// declared property setter: -(void)setClientInfo:(id)info;
// declared property getter: -(id)clientInfo;
// declared property setter: -(void)setAlert:(id)alert;
// declared property getter: -(id)alert;
// declared property setter: -(void)setValidationFunction:(id)function;
// declared property getter: -(id)validationFunction;
// declared property setter: -(void)setInlineScript:(id)script;
// declared property getter: -(id)inlineScript;
// declared property setter: -(void)setScriptURL:(id)url;
// declared property getter: -(id)scriptURL;
// declared property setter: -(void)setSourceURL:(id)url;
// declared property getter: -(id)sourceURL;
// declared property getter: -(id)namedPages;
// declared property getter: -(id)defaultPages;
// declared property setter: -(void)setName:(id)name;
// declared property getter: -(id)name;
-(BOOL)RUIPage:(id)page shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(void)RUIPage:(id)page toggledEditing:(BOOL)editing;
-(void)RUIPage:(id)page pressedNavBarButton:(id)button;
-(void)_nextPage;
-(BOOL)webView:(id)view shouldStartLoadWithRequest:(id)request navigationType:(int)type;
-(void)tableViewOMDidChange:(id)tableViewOM;
-(BOOL)tableViewOM:(id)om deleteRowAtIndexPath:(id)indexPath;
-(void)tableViewOM:(id)om pressedLink:(id)link attributes:(id)attributes;
-(void)tableViewOM:(id)om pressedButton:(id)button attributes:(id)attributes;
-(void)remoteUIWebViewControllerDonePressed:(id)pressed;
-(id)_pageContainingTableView:(id)view;
-(void)_handleButtonPressConfirmed:(id)confirmed attributes:(id)attributes;
-(void)_handleButtonPress:(id)press attributes:(id)attributes;
-(void)_handleLinkPressConfirmed:(id)confirmed attributes:(id)attributes;
-(void)_handleLinkPress:(id)press attributes:(id)attributes;
-(void)alertView:(id)view didDismissWithButtonIndex:(int)buttonIndex;
-(void)_cleanupConfirmation;
-(void)_presentSecondConfirmationWithAttributes:(id)attributes;
-(void)_presentConfirmationWithAttributes:(id)attributes;
-(BOOL)hasSecondConfirmationAttributes:(id)attributes;
-(BOOL)hasConfirmationAttributes:(id)attributes;
-(id)stringForAttributeName:(id)attributeName withAttributes:(id)attributes;
-(BOOL)hasAttributeOrAttributeFunctionNamed:(id)named withAttributes:(id)attributes;
-(id)relativeURLWithString:(id)string;
-(id)rowForFormField:(id)formField;
-(id)alertView;
-(void)setPages:(id)pages;
// declared property getter: -(id)allPages;
// declared property getter: -(id)pages;
// declared property getter: -(id)visiblePage;
// declared property getter: -(id)displayedPages;
-(id)postbackDictionary;
-(void)populatePostbackDictionary:(id)dictionary;
-(id)postbackData;
-(BOOL)goBack;
-(void)back:(id)back;
-(void)_displaySupplementalPage:(id)page;
-(id)newNavigationControllerForPresentation;
-(void)presentInParentViewController:(id)parentViewController animated:(BOOL)animated;
-(id)_firstPageForPresentation;
-(void)refreshTimeout;
-(void)_populatePageNavItem:(id)item withNextButton:(BOOL)nextButton;
-(void)setDelegate:(id)delegate;
-(id)description;
-(void)dealloc;
-(void)_cleanupRefreshTimer;
-(id)init;
-(void)setJSGlobalContext:(OpaqueJSContext*)context;
-(void)runScript;
-(id)invokeStringFunction:(id)function;
-(BOOL)validateWithFunction:(id)function;
-(BOOL)prepareScriptContext;
@end

