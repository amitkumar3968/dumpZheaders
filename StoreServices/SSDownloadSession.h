/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class SSXPCConnection, SSDownload, SSDownloadAsset, NSObject;
@protocol OS_dispatch_queue;

@interface SSDownloadSession : XXUnknownSuperclass {
@private
	SSXPCConnection* _controlConnection;
	NSObject<OS_dispatch_queue>* _dispatchQueue;
	long long _sessionID;
}
@property(readonly, assign) SSDownloadAsset* downloadAsset;
@property(readonly, assign) SSDownload* download;
-(id)_copySessionPropertyWithKey:(const char*)key;
-(BOOL)isEqual:(id)equal;
-(unsigned)hash;
// declared property getter: -(id)downloadAsset;
// declared property getter: -(id)download;
-(void)dealloc;
-(id)_initWithSessionIdentifier:(long long)sessionIdentifier controlConnection:(id)connection;
-(id)init;
-(id)_initSSDownloadSession;
@end
