/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface SUQueueSessionManager : XXUnknownSuperclass {
@private
	NSObject<OS_dispatch_queue>* _dispatchQueue;
	NSMutableArray* _downloadManagers;
	NSMutableArray* _preorderManagers;
}
-(id)_queueSessionWithQueue:(id)queue fromArray:(id)array;
-(id)_queueSessionWithManagerOptions:(id)managerOptions fromArray:(id)array;
-(id)_queueSessionWithDownloadKinds:(id)downloadKinds fromArray:(id)array;
-(void)_endQueueSession:(id)session fromArray:(id)array;
-(void)endPreorderManagerSessionWithManager:(id)manager;
-(void)endDownloadManagerSessionForManager:(id)manager;
-(id)beginPreorderManagerSessionWithItemKinds:(id)itemKinds;
-(id)beginDownloadManagerSessionWithManagerOptions:(id)managerOptions;
-(id)beginDownloadManagerSessionWithDownloadKinds:(id)downloadKinds;
-(id)beginDownloadManagerSessionForDownloadKind:(id)downloadKind;
-(void)dealloc;
-(id)init;
@end
