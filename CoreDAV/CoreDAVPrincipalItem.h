/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class CoreDAVItemWithNoChildren, CoreDAVHrefItem;

@interface CoreDAVPrincipalItem : CoreDAVItem {
	CoreDAVHrefItem* _href;
	CoreDAVItemWithNoChildren* _all;
	CoreDAVItemWithNoChildren* _authenticated;
	CoreDAVItemWithNoChildren* _unauthenticated;
	CoreDAVItem* _property;
	CoreDAVItemWithNoChildren* _selfItem;
}
@property(retain) CoreDAVItemWithNoChildren* selfItem;	// @synthesize=_selfItem
@property(retain) CoreDAVItem* property;	// @synthesize=_property
@property(retain) CoreDAVItemWithNoChildren* unauthenticated;	// @synthesize=_unauthenticated
@property(retain) CoreDAVItemWithNoChildren* authenticated;	// @synthesize=_authenticated
@property(retain) CoreDAVItemWithNoChildren* all;	// @synthesize=_all
@property(retain) CoreDAVHrefItem* href;	// @synthesize=_href
+(id)copyParseRules;
// declared property setter: -(void)setSelfItem:(id)item;
// declared property getter: -(id)selfItem;
// declared property setter: -(void)setProperty:(id)property;
// declared property getter: -(id)property;
// declared property setter: -(void)setUnauthenticated:(id)unauthenticated;
// declared property getter: -(id)unauthenticated;
// declared property setter: -(void)setAuthenticated:(id)authenticated;
// declared property getter: -(id)authenticated;
// declared property setter: -(void)setAll:(id)all;
// declared property getter: -(id)all;
// declared property setter: -(void)setHref:(id)href;
// declared property getter: -(id)href;
-(id)hashString;
-(void)write:(id)write;
-(id)description;
-(void)dealloc;
-(id)initTypeIsSelf;
-(id)initTypeIsUnauthenticated;
-(id)initTypeIsAuthenticated;
-(id)initTypeIsProperty:(id)property;
-(id)initTypeIsHREFWithURL:(id)url;
-(id)initTypeIsAll;
-(id)init;
@end

