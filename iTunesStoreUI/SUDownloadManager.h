/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, SUClientInterface, SSDownloadManager, NSObject, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface SUDownloadManager : XXUnknownSuperclass {
@private
	NSArray* _cachedDownloads;
	SUClientInterface* _clientInterface;
	NSObject<OS_dispatch_queue>* _dispatchQueue;
	SSDownloadManager* _downloadManager;
	NSMutableDictionary* _downloadsByID;
}
@property(readonly, assign, nonatomic) NSArray* downloads;
@property(readonly, assign, nonatomic) SSDownloadManager* downloadManager;
-(void)_removeObject:(id)object fromArray:(id*)array;
-(void)_reloadDownloadManager;
-(void)_finishPreflightWithCompletionBlock:(id)completionBlock;
-(void)reloadDownloadManager;
-(void)preflightWithCompletionBlock:(id)completionBlock;
// declared property getter: -(id)downloads;
// declared property getter: -(id)downloadManager;
-(id)downloadForDownloadIdentifier:(long long)downloadIdentifier;
-(BOOL)deleteDownload:(id)download;
-(void)dealloc;
-(id)initWithDownloadManager:(id)downloadManager clientInterface:(id)interface;
-(id)initWithDownloadManager:(id)downloadManager;
@end

