/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

#import <XXUnknownSuperclass.h> // Unknown library

@protocol AirPortAssistantControllerDelegate;

@interface AirPortAssistantController : XXUnknownSuperclass {
	id _delegate;
	id _viewController;
}
@property(retain) id viewController;	// @synthesize=_viewController
@property(assign, nonatomic) id<AirPortAssistantControllerDelegate> delegate;	// @synthesize=_delegate
+(BOOL)launchAUForNetwork:(id)network withMacAddress:(id)macAddress getAUFromAppStore:(BOOL)appStore;
+(BOOL)launchAUForDevice:(id)device getAUFromAppStore:(BOOL)appStore;
+(id)uniqueBaseStationName:(id)name withBssid:(id)bssid;
+(id)unconfiguredDeviceName:(id)name;
+(BOOL)isUnconfiguredDevice:(id)device;
+(BOOL)isAirPlayDevice:(id)device;
+(id)unconfiguredBaseStationName:(unsigned char)name;
+(BOOL)isUnconfiguredBaseStation:(id)station productID:(char*)anId productFamily:(unsigned*)family;
+(void)cancelAirPortAssistantController;
+(id)assistantUIViewControllerWithParameters:(id)parameters;
+(id)sharedInstance;
+(void)downloadAssetsIfNeeded;
+(void)downloadAssetsCancel;
// declared property setter: -(void)setViewController:(id)controller;
// declared property getter: -(id)viewController;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property getter: -(id)delegate;
-(void)dealloc;
-(void)assistantComplete;
@end
