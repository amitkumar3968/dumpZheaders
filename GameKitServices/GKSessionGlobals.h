/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "GameKitServices-Structs.h"


__attribute__((visibility("hidden")))
@interface GKSessionGlobals : XXUnknownSuperclass {
@private
	unsigned* _activePIDList;
	unsigned long _activePIDListSize;
	unsigned long _activePIDListCount;
	opaque_pthread_mutex_t _lock;
}
-(void)unlock;
-(void)lock;
-(BOOL)hasActivePID:(unsigned)pid;
-(void)unregisterPID:(unsigned)pid;
-(void)registerPID:(unsigned)pid;
-(id)init;
@end
