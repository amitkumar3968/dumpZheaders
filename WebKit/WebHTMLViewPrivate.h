/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import </libobjc.A.h>

@class WebDataSource, WAKView, WebEvent, NSMutableDictionary, NSString, WebPluginController, NSArray, NSTimer;

__attribute__((visibility("hidden")))
@interface WebHTMLViewPrivate : NSObject {
@private
	BOOL closed;
	BOOL ignoringMouseDraggedEvents;
	BOOL printing;
	BOOL paginateScreenContent;
	WAKView* layerHostingView;
	BOOL drawingIntoLayer;
	WebEvent* mouseDownEvent;
	BOOL handlingMouseDownEvent;
	WebEvent* keyDownEvent;
	BOOL exposeInputContext;
	CGPoint lastScrollPosition;
	BOOL inScrollPositionChanged;
	WebPluginController* pluginController;
	NSString* toolTip;
	id trackingRectOwner;
	void* trackingRectUserData;
	NSTimer* autoscrollTimer;
	WebEvent* autoscrollTriggerEvent;
	NSArray* pageRects;
	NSMutableDictionary* highlighters;
	BOOL transparentBackground;
	WebHTMLViewInterpretKeyEventsParameters* interpretKeyEventsParameters;
	WebDataSource* dataSource;
	SEL selectorForDoCommandBySelector;
}
+(void)initialize;
-(id).cxx_construct;
-(void)clear;
-(void)finalize;
-(void)dealloc;
@end

