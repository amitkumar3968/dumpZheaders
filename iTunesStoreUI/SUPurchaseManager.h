/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "iTunesStoreUI-Structs.h"
#import "SUContinuationDelegate.h"
#import "SSDownloadManagerObserver.h"
#import "SSPurchaseRequestDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSMutableArray, NSMutableSet, NSSet, SUQueueSessionManager;
@protocol SUPurchaseManagerDelegate;

@interface SUPurchaseManager : XXUnknownSuperclass <SUContinuationDelegate, SSDownloadManagerObserver, SSPurchaseRequestDelegate> {
@private
	id<SUPurchaseManagerDelegate> _delegate;
	NSMutableSet* _futurePurchases;
	NSMutableSet* _inflightContinuations;
	NSMutableArray* _observedDownloadManagers;
	NSMutableArray* _pendingContinuations;
	NSMutableArray* _pendingPurchases;
	NSMutableSet* _purchasedIdentifiers;
	NSMutableArray* _purchaseRequests;
	SUQueueSessionManager* _queueSessionManager;
	BOOL _showingErrorDialogs;
	int _updatesCount;
	NSString* _userAgent;
	BOOL _waitingForAuthentication;
}
@property(assign, nonatomic) id<SUPurchaseManagerDelegate> delegate;	// @synthesize=_delegate
@property(readonly, assign, nonatomic) NSSet* purchasedItemIdentifiers;	// @synthesize=_purchasedIdentifiers
@property(readonly, assign, nonatomic) NSSet* futurePurchases;	// @synthesize=_futurePurchases
@property(readonly, assign, nonatomic) int numberOfPendingPurchases;
@property(copy, nonatomic) NSString* userAgent;	// @synthesize=_userAgent
@property(retain, nonatomic) SUQueueSessionManager* queueSessionManager;	// @synthesize=_queueSessionManager
// declared property setter: -(void)setUserAgent:(id)agent;
// declared property getter: -(id)userAgent;
// declared property setter: -(void)setQueueSessionManager:(id)manager;
// declared property getter: -(id)queueSessionManager;
// declared property getter: -(id)purchasedItemIdentifiers;
// declared property getter: -(id)futurePurchases;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property getter: -(id)delegate;
-(void)_startPurchases:(id)purchases;
-(void)_startContinuations:(id)continuations;
-(void)_showDialogsForErrors:(id)errors;
-(void)_removePurchaseRequest:(id)request;
-(void)_removePlaceholdersForPurchase:(id)purchase;
-(void)_performNextAction;
-(BOOL)_needsAuthenticationForPurchases:(id)purchases;
-(BOOL)_issuePurchaseRequestForPurchases:(id)purchases;
-(void)_enqueuePurchases:(id)purchases;
-(void)_enqueueExternalDownload:(id)download;
-(void)_enqueueContinuations:(id)continuations;
-(id)_downloadManagerForDownloadKind:(id)downloadKind;
-(void)_addDownloadingIconForPurchases:(id)purchases;
-(id)_accountForPurchase:(id)purchase;
-(void)requestDidFinish:(id)request;
-(void)request:(id)request didFailWithError:(id)error;
-(void)purchaseRequest:(id)request purchaseDidSucceed:(id)purchase;
-(void)purchaseRequest:(id)request purchaseDidFail:(id)purchase withError:(id)error;
-(void)continuationFinished:(id)finished;
-(void)continuation:(id)continuation failedWithError:(id)error;
-(void)_dialogDidFinish:(id)_dialog;
-(void)removePurchasedItemIdentifier:(unsigned long long)identifier;
// declared property getter: -(int)numberOfPendingPurchases;
-(id)newPurchaseBatchForItems:(id)items offers:(id)offers;
-(BOOL)itemIdentifierIsPurchasing:(unsigned long long)purchasing;
-(BOOL)itemIdentifierIsPurchased:(unsigned long long)purchased;
-(void)endUpdates;
-(void)cancelFuturePurchase:(id)purchase;
-(void)beginUpdates;
-(void)addPurchasedItemIdentifiers:(id)identifiers;
-(void)addPurchasedItemIdentifier:(unsigned long long)identifier;
-(BOOL)addPurchaseBatch:(id)batch;
-(void)addFuturePurchase:(id)purchase;
-(void)dealloc;
-(id)init;
-(void)_schedulePurchaseCallback:(id)callback;
-(id)_newPurchaseBatchForPurchases:(id)purchases;
-(id)_newExternalDownloadWithItemDictionary:(id)itemDictionary;
-(id)_newExternalDownloadWithDownloadDictionary:(id)downloadDictionary;
-(id)_newExternalDownloadWithDictionary:(id)dictionary;
-(id)_newDictionaryForWebScriptValue:(id)webScriptValue inContext:(OpaqueJSContext*)context;
-(void)_addBatchForPurchases:(id)purchases options:(id)options;
-(void)purchaseScriptObject:(id)object withOptions:(id)options inContext:(OpaqueJSContext*)context;
-(void)purchaseScriptObject:(id)object;
-(void)enqueueScriptPurchases:(id)purchases;
-(id)copyPurchaseForScriptObject:(id)scriptObject inContext:(OpaqueJSContext*)context;
-(id)copyPurchaseForScriptObject:(id)scriptObject;
-(void)addExternalDownloads:(id)downloads withOptions:(id)options inContext:(OpaqueJSContext*)context;
-(void)addExternalDownloads:(id)downloads inContext:(OpaqueJSContext*)context;
@end

