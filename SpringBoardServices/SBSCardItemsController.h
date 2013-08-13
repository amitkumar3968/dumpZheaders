/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "XPCProxyTarget.h"
#import "SBSCardItemsControllerRemoteInterface.h"

@class NSString;
@protocol SBCardItemsControllerRemoteInterface;

@interface SBSCardItemsController : XXUnknownSuperclass <XPCProxyTarget, SBSCardItemsControllerRemoteInterface> {
@private
	id<SBCardItemsControllerRemoteInterface> _remoteProxy;
	NSString* _identifier;
}
-(void)getCardItemsWithHandler:(id)handler;
-(void)clearAllCardItems;
-(void)setCardItems:(id)items;
-(void)removeCardItems:(id)items;
-(void)addCardItems:(id)items;
-(id)proxy:(id)proxy detailedSignatureForSelector:(SEL)selector;
-(void)dealloc;
-(id)initWithIdentifier:(id)identifier;
@end
