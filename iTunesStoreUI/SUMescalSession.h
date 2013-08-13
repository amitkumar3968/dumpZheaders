/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "iTunesStoreUI-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSObject;
@protocol OS_dispatch_queue;

@interface SUMescalSession : XXUnknownSuperclass {
@private
	NSObject<OS_dispatch_queue>* _dispatchQueue;
	BOOL _complete;
	FairPlayHWInfo_ _hardwareInfo;
	FPSAPContextOpaque_Ref _session;
}
@property(readonly, assign, getter=isComplete) BOOL complete;
-(id)_newDataWithBytes:(char*)bytes length:(unsigned long)length;
-(BOOL)verifyPrimeSignature:(id)signature error:(id*)error;
-(id)signData:(id)data error:(id*)error;
-(id)primeForAccountCreationWithData:(id)data error:(id*)error;
// declared property getter: -(BOOL)isComplete;
-(id)exchangeData:(id)data error:(id*)error;
-(void)dealloc;
-(id)init;
@end

