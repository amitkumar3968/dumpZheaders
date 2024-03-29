/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "StoreServices-Structs.h"
#import "SSDownloadManagerObserverPrivate.h"

@class SSDownloadManager, NSSet, NSArray;

@interface SSDownloadQueue : XXUnknownSuperclass <SSDownloadManagerObserverPrivate> {
@private
	BOOL _autoFinishDownloads;
	SSDownloadManager* _downloadManager;
	CFSetRef _observers;
}
@property(readonly, assign, nonatomic) NSArray* preorders;
@property(readonly, assign, nonatomic) NSArray* placeholderDownloads;
@property(readonly, assign, getter=isUsingNetwork) BOOL usingNetwork;
@property(assign, nonatomic) BOOL shouldAutomaticallyFinishDownloads;	// @synthesize=_autoFinishDownloads
@property(readonly, assign, nonatomic) NSArray* downloads;
@property(readonly, assign) SSDownloadManager* downloadManager;
@property(readonly, assign) NSSet* downloadKinds;
+(void)setCachedArtwork:(id)artwork forDownload:(id)download;
+(void)loadArtworkForDownload:(id)download;
+(void)cancelLoadArtworkForDownload:(id)download;
+(id)cachedArtworkForDownload:(id)download;
+(id)softwareApplicationDownloadKinds;
+(id)mediaDownloadKinds;
// declared property setter: -(void)setShouldAutomaticallyFinishDownloads:(BOOL)automaticallyFinishDownloads;
// declared property getter: -(BOOL)shouldAutomaticallyFinishDownloads;
-(void)_handleDownloadsRemoved:(id)removed;
-(void)_handleDownloadsDidChange:(id)_handleDownloads;
-(void)_sendQueuePreOrdersChanged;
-(void)_sendQueueNetworkUsageChanged;
-(void)_sendQueueChangedWithRemovals:(id)removals;
-(void)_sendDownloadStatusChangedAtIndex:(int)index;
-(void)_messageObserversWithFunction:(/*function-pointer*/ void*)function context:(void*)context;
-(void)downloadManagerNetworkUsageDidChange:(id)downloadManagerNetworkUsage;
-(void)downloadManagerDownloadsDidChange:(id)downloadManagerDownloads;
-(void)downloadManager:(id)manager downloadStatesDidChange:(id)downloadStates;
-(void)downloadManager:(id)manager downloadsDidChange:(id)downloads;
-(BOOL)startPreOrderDownload:(id)download;
-(void)removePlaceholderDownload:(id)download;
// declared property getter: -(id)preorders;
// declared property getter: -(id)placeholderDownloads;
-(id)downloadForItemIdentifier:(unsigned long long)itemIdentifier;
-(void)addPlaceholderDownloads:(id)downloads;
-(void)removeObserver:(id)observer;
-(BOOL)reloadFromServer;
// declared property getter: -(BOOL)isUsingNetwork;
-(void)getDownloadsUsingBlock:(id)block;
// declared property getter: -(id)downloads;
// declared property getter: -(id)downloadManager;
// declared property getter: -(id)downloadKinds;
-(BOOL)canCancelDownload:(id)download;
-(BOOL)cancelDownload:(id)download;
-(void)addObserver:(id)observer;
-(BOOL)addDownload:(id)download;
-(void)dealloc;
-(id)initWithDownloadManagerOptions:(id)downloadManagerOptions;
-(id)initWithDownloadKinds:(id)downloadKinds;
-(id)init;
-(id)_initWithDownloadManagerOptions:(id)downloadManagerOptions;
@end

