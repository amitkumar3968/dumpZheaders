/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

#import "AirTraffic-Structs.h"
#import <Foundation/NSString.h>

@class NSDictionary;

@interface ATClientController : NSString {
	NSDictionary* _clientMap;
	CFDictionaryRef _queueMap;
}
+(id)sharedInstance;
+(id)controllerForDataclasses:(id)dataclasses;
-(void)dealloc;
-(BOOL)_loadClientsForDataclasses:(id)dataclasses;
-(dispatch_queue_s*)queueForClient:(id)client;
-(void)waitToDrain;
-(void)resetQueues;
-(id)allClients;
-(id)clientForDataclass:(id)dataclass;
@end
