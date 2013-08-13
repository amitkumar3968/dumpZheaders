/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "iTunesStoreUI-Structs.h"
#import "UIDocumentInteractionControllerDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIDocumentInteractionController;

@interface SUDocumentInteractionSession : XXUnknownSuperclass <UIDocumentInteractionControllerDelegate> {
	id _completionHandler;
	UIDocumentInteractionController* _documentInteractionController;
}
@property(copy, nonatomic) id completionHandler;	// @synthesize=_completionHandler
// declared property setter: -(void)setCompletionHandler:(id)handler;
// declared property getter: -(id)completionHandler;
-(void)documentInteractionController:(id)controller willBeginSendingToApplication:(id)application;
-(void)documentInteractionControllerDidDismissOpenInMenu:(id)documentInteractionController;
-(void)cancel;
-(void)dealloc;
-(id)initWithDocumentInteractionController:(id)documentInteractionController;
@end

