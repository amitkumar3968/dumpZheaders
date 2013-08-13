/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import "iPodUI-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class SSURLRequestProperties, SUStorePageViewController;

@interface IUEmbeddedStorePageViewController : XXUnknownSuperclass {
	id _contentBoundsHandler;
	id _loadHandler;
	SSURLRequestProperties* _requestProperties;
	SUStorePageViewController* _storePageViewController;
}
@property(copy, nonatomic) id loadHandler;	// @synthesize=_loadHandler
@property(copy, nonatomic) id contentBoundsHandler;	// @synthesize=_contentBoundsHandler
@property(readonly, assign, nonatomic) CGRect contentBounds;
@property(readonly, assign, nonatomic) SSURLRequestProperties* requestProperties;
// declared property setter: -(void)setLoadHandler:(id)handler;
// declared property getter: -(id)loadHandler;
// declared property setter: -(void)setContentBoundsHandler:(id)handler;
// declared property getter: -(id)contentBoundsHandler;
-(void)_documentBoundsChangeNotification:(id)notification;
-(void)storePage:(id)page finishedWithSuccess:(BOOL)success;
-(id)viewControllerFactory;
-(void)loadView;
-(void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
// declared property getter: -(id)requestProperties;
// declared property getter: -(CGRect)contentBounds;
-(void)dealloc;
-(id)initWithRequestProperties:(id)requestProperties;
@end
