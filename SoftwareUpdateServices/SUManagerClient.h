/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "XPCProxyTarget.h"
#import "SUManagerClientInterface.h"

@class SUDescriptor;
@protocol SUManagerClientDelegate;

@interface SUManagerClient : XXUnknownSuperclass <XPCProxyTarget, SUManagerClientInterface> {
@private
	id _serverProxy;
	id<SUManagerClientDelegate> _delegate;
	BOOL _connected;
	BOOL _serverIsExiting;
	int _clientType;
	BOOL _installing;
	SUDescriptor* _installDescriptor;
}
@property(retain, nonatomic) SUDescriptor* installDescriptor;	// @synthesize=_installDescriptor
@property(assign, nonatomic) int clientType;	// @synthesize=_clientType
@property(assign, nonatomic) id<SUManagerClientDelegate> delegate;	// @synthesize=_delegate
// declared property setter: -(void)setInstallDescriptor:(id)descriptor;
// declared property getter: -(id)installDescriptor;
// declared property getter: -(int)clientType;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property getter: -(id)delegate;
-(void)installDidFinish:(id)install;
-(void)installDidFail:(id)install withError:(id)error;
-(void)installDidStart:(id)install;
-(void)downloadWasInvalidatedForNewUpdateAvailable:(id)newUpdateAvailable;
-(void)downloadDidFinish:(id)download;
-(void)downloadDidFail:(id)download withError:(id)error;
-(void)downloadProgressDidChange:(id)downloadProgress;
-(void)downloadDidStart:(id)download;
-(void)automaticDownloadDidFailToStartForNewUpdateAvailable:(id)automaticDownload withError:(id)error;
-(void)scanDidCompleteWithNewUpdateAvailable:(id)scan error:(id)error;
-(void)scanRequestDidFinishForOptions:(id)scanRequest update:(id)update error:(id)error;
-(void)scanRequestDidStartForOptions:(id)scanRequest;
-(id)proxy:(id)proxy detailedSignatureForSelector:(SEL)selector;
-(void)noteServerExiting;
-(void)noteConnectionDropped;
-(void)connectToServerIfNecessary;
-(void)_invalidateProxy;
-(void)installUpdate:(id)update;
-(void)isUpdateReadyForInstallation:(id)installation;
-(void)download:(id)download;
-(void)updateDownloadMetadata:(id)metadata withResult:(id)result;
-(void)resumeDownload:(id)download;
-(void)pauseDownload:(id)download;
-(void)cancelDownload:(id)download;
-(void)startDownloadWithMetadata:(id)metadata withResult:(id)result;
-(void)startDownload:(id)download;
-(void)isDownloading:(id)downloading;
-(void)scanForUpdates:(id)updates withResult:(id)result;
-(void)isScanning:(id)scanning;
// declared property setter: -(void)setClientType:(int)type;
-(void)_setClientType;
-(void)dealloc;
-(void)invalidate;
-(id)initWithDelegate:(id)delegate clientType:(int)type;
-(id)initWithDelegate:(id)delegate;
-(id)init;
@end
