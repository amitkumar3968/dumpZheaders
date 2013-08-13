/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface IUiPodAVController : XXUnknownSuperclass {
@private
	unsigned _scheduledTrackExpirationCallback : 1;
}
+(id)sharedIPCAppInstance;
+(id)sharedInstance;
-(void)_setRentalIsPlaying:(BOOL)playing forItem:(id)item;
-(void)_scheduleExpirationTimerIfNecessary;
-(void)_endPlaybackIfNeededForCurrentNetwork;
-(void)_movieExpirationCheckCallback;
-(void)_itemWillChange:(id)_item;
-(void)_itemReadyToPlay:(id)play;
-(void)_networkTypeDidChangeNotification:(id)_networkType;
-(void)_matchCellularRestrictedDidChangeNotification:(id)_matchCellularRestricted;
-(void)_downloadCancelledNotification:(id)notification;
-(void)_availableMediaLibrariesDidChangeNotification:(id)_availableMediaLibraries;
-(void)_appDefaultsChangedNotification:(id)notification;
-(void)play;
-(void)airPlayVideoEnded;
-(BOOL)showPlaybackStateOverlaysOnTVOut;
-(BOOL)currentItemIsRental;
-(void)dealloc;
-(id)init;
@end
