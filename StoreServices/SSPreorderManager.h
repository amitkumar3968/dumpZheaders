/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "StoreServices-Structs.h"

@class SSXPCConnection, NSObject, NSArray;
@protocol OS_dispatch_queue;

@interface SSPreorderManager : XXUnknownSuperclass {
@private
	SSXPCConnection* _connection;
	NSObject<OS_dispatch_queue>* _dispatchQueue;
	NSArray* _itemKinds;
	SSXPCConnection* _observerConnection;
	NSObject<OS_dispatch_queue>* _observerQueue;
	CFArrayRef _observers;
	NSArray* _preorders;
}
@property(readonly, assign) NSArray* preorders;
@property(readonly, assign) NSArray* itemKinds;
+(id)musicStoreItemKinds;
+(id)bookStoreItemKinds;
-(void)_sendMessageToObservers:(SEL)observers;
-(void)_registerAsObserver;
-(void)_handleMessage:(id)message fromServerConnection:(id)serverConnection;
-(void)_connectAsObserver;
-(void)removeObserver:(id)observer;
-(void)reloadFromServer;
// declared property getter: -(id)preorders;
// declared property getter: -(id)itemKinds;
-(void)cancelPreorders:(id)preorders withCompletionBlock:(id)completionBlock;
-(void)addObserver:(id)observer;
-(void)dealloc;
-(id)initWithItemKinds:(id)itemKinds;
-(id)init;
@end
