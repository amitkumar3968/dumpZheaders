/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import "NSObject.h"


@protocol NSNetServiceBrowserDelegate <NSObject>
@optional
-(void)netServiceBrowser:(id)browser didRemoveService:(id)service moreComing:(BOOL)coming;
-(void)netServiceBrowser:(id)browser didRemoveDomain:(id)domain moreComing:(BOOL)coming;
-(void)netServiceBrowser:(id)browser didFindService:(id)service moreComing:(BOOL)coming;
-(void)netServiceBrowser:(id)browser didFindDomain:(id)domain moreComing:(BOOL)coming;
-(void)netServiceBrowser:(id)browser didNotSearch:(id)search;
-(void)netServiceBrowserDidStopSearch:(id)netServiceBrowser;
-(void)netServiceBrowserWillSearch:(id)netServiceBrowser;
@end

