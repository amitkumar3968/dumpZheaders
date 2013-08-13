/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebPluginManualLoader.h"
#import "WebPluginContainerCheckController.h"
#import </libobjc.A.h>

@class WebDataSource, NSMutableArray, NSMutableSet, WAKView;

@interface WebPluginController : NSObject <WebPluginManualLoader, WebPluginContainerCheckController> {
@private
	WAKView* _documentView;
	WebDataSource* _dataSource;
	NSMutableArray* _views;
	BOOL _started;
	NSMutableSet* _checksInProgress;
	NSMutableArray* _viewsNotInDocument;
}
+(void)pluginViewHidden:(id)hidden;
+(BOOL)isPlugInView:(id)view;
+(void)addPlugInView:(id)view;
+(id)plugInViewWithArguments:(id)arguments fromPluginPackage:(id)pluginPackage;
-(void)_webPluginContainerPostMediaPlayerNotification:(int)notification forElement:(id)element;
-(void)_webPluginContainerSetMediaPlayerProxy:(id)proxy forElement:(id)element;
-(void)pluginViewFinishedLoading:(id)loading;
-(void)pluginView:(id)view receivedError:(id)error;
-(void)pluginView:(id)view receivedData:(id)data;
-(void)pluginView:(id)view receivedResponse:(id)response;
-(id)URLPolicyCheckReferrer;
-(id)webView;
-(id)webFrame;
-(void)showStatus:(id)status;
-(void)webPlugInContainerShowStatus:(id)containerShowStatus;
-(void)webPlugInContainerDidHideFullScreenForView:(id)webPlugInContainer;
-(void)webPlugInContainerWillShowFullScreenForView:(id)webPlugInContainer;
-(void)webPlugInContainerLoadRequest:(id)containerLoadRequest inFrame:(id)frame;
-(id)_webPluginContainerCheckIfAllowedToLoadRequest:(id)loadRequest inFrame:(id)frame resultObject:(id)object selector:(SEL)selector;
-(BOOL)processingUserGesture;
-(void)destroyAllPlugins;
-(void)_cancelOutstandingChecks;
-(void)_webPluginContainerCancelCheckIfAllowedToLoadRequest:(id)loadRequest;
-(void)destroyPlugin:(id)plugin;
-(void)addPlugin:(id)plugin;
-(void)pluginViewCreated:(id)created;
-(void)restorePluginsFromCache;
-(void)stopPluginsForPageCache;
-(void)stopAllPlugins;
-(void)startAllPlugins;
-(void)destroyOnePlugin:(id)plugin;
-(void)stopOnePluginForPageCache:(id)pageCache;
-(void)stopOnePlugin:(id)plugin;
-(id)superlayerForPluginView:(id)pluginView;
-(BOOL)plugInsAreRunning;
-(void)dealloc;
-(void)setDataSource:(id)source;
-(id)initWithDocumentView:(id)documentView;
@end
