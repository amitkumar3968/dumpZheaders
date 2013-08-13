/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicStoreUI.framework/MusicStoreUI
 */

#import "SSDownloadManagerObserver.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class SSDownloadManager;

@interface MSClientApplicationController : XXUnknownSuperclass <SSDownloadManagerObserver> {
@private
	SSDownloadManager* _downloadManager;
	BOOL _registersForPingNotifications;
}
@property(assign, nonatomic) BOOL registersForPingNotifications;	// @synthesize=_registersForPingNotifications
+(id)sharedController;
// declared property setter: -(void)setRegistersForPingNotifications:(BOOL)pingNotifications;
// declared property getter: -(BOOL)registersForPingNotifications;
-(void)_updateRemoteNotificationSettings;
-(void)_handleLibraryLinkURL:(id)url;
-(void)_handleStoreSearchURL:(id)url;
-(void)_handleGeniusLookupURL:(id)url;
-(id)tabBarController:(id)controller viewControllerForContext:(id)context;
-(BOOL)tabBarController:(id)controller shouldShowSection:(id)section;
-(id)tabBarController:(id)controller rootViewControllerForSection:(id)section;
-(void)purchaseManagerWillBeginUpdates:(id)purchaseManager;
-(void)purchaseManagerDidEndUpdates:(id)purchaseManager;
-(id)purchaseManager:(id)manager purchaseBatchForPurchases:(id)purchases;
-(id)purchaseManager:(id)manager purchaseBatchForItems:(id)items;
-(void)downloadManagerDownloadsDidChange:(id)downloadManagerDownloads;
-(void)_accountStoreChangedNotification:(id)notification;
-(BOOL)displayClientURL:(id)url;
-(void)becomeActive;
-(void)dealloc;
-(id)initWithClientInterface:(id)clientInterface;
-(id)initWithClientIdentifier:(id)clientIdentifier;
-(id)init;
@end

