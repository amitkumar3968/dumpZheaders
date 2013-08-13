/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FTClientServices.framework/FTClientServices
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface FTCServiceMonitor : XXUnknownSuperclass {
	int _availability;
	int _type;
	int _token;
}
@property(readonly, assign, nonatomic) int serviceType;
// declared property getter: -(int)serviceType;
-(int)serviceAvailability;
-(void)handleActiveAccountsChanged:(id)changed;
-(void)updateAvailability;
-(void)_updateAvailability;
-(void)_postAvailability:(int)availability;
-(void)dealloc;
-(id)initWithServiceType:(int)serviceType;
@end

