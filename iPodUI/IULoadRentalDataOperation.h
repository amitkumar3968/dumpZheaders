/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SSRequestDelegate.h"

@class IURentalData, NSLock, NSDictionary, NSRunLoop;

@interface IULoadRentalDataOperation : XXUnknownSuperclass <SSRequestDelegate> {
	BOOL _didCheckOutKeys;
	NSLock* _lock;
	int _reason;
	IURentalData* _rentalData;
	NSDictionary* _rentalInformation;
	NSRunLoop* _runLoop;
}
@property(readonly, assign) NSDictionary* rentalInformation;
@property(readonly, assign) IURentalData* rentalData;
@property(readonly, assign) int loadReason;
-(void)_stopRunLoop;
-(void)_startCheckoutRequest:(id)request;
-(void)_setRunLoop:(id)loop;
-(void)_setRentalInformation:(id)information;
-(void)_setDidCheckOutKeys:(BOOL)_set;
-(id)_runLoop;
-(void)_runCheckoutRequest:(id)request;
-(id)_rentalInformationFromMedia;
-(id)_newRentalCheckoutRequest;
-(BOOL)_didCheckOutKeys;
-(BOOL)_checkOutRentalKeys;
-(void)_timer:(id)timer;
-(void)_delayedStopRunLoop:(id)loop;
-(void)requestDidFinish:(id)request;
-(void)request:(id)request didFailWithError:(id)error;
-(void)main;
-(void)cancel;
// declared property getter: -(id)rentalInformation;
// declared property getter: -(id)rentalData;
// declared property getter: -(int)loadReason;
-(void)dealloc;
-(id)initWithRentalData:(id)rentalData reason:(int)reason;
-(id)initWithRentalData:(id)rentalData;
-(id)init;
@end

