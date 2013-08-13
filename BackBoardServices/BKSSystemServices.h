/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BackBoardServices-Structs.h"

@class NSObject;
@protocol OS_dispatch_queue;

@interface BKSSystemServices : XXUnknownSuperclass {
@private
	XPCProxy* _server;
	NSObject<OS_dispatch_queue>* _queue;
}
-(id)proxy:(id)proxy detailedSignatureForSelector:(SEL)selector;
-(void)terminateApplicationGroup:(int)group forReason:(int)reason andReport:(BOOL)report withDescription:(id)description;
-(void)terminateApplication:(id)application forReason:(int)reason andReport:(BOOL)report withDescription:(id)description;
-(void)dealloc;
-(id)init;
@end
