/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "AssistantServices-Structs.h"

@class CPDistributedMessagingCenter;

@interface AFContextManager : XXUnknownSuperclass {
@private
	CFArrayRef _contextProviders;
	CPDistributedMessagingCenter* _center;
}
+(id)defaultContextManager;
-(void).cxx_destruct;
-(void)dealloc;
-(void)removeContextProvider:(id)provider;
-(BOOL)addContextProvider:(id)provider;
-(void)_shutdownServer;
-(id)_collateContexts;
-(void)_collateContextsIntoArray:(id)array;
-(void)startCenter:(id)center;
-(void)nothing;
-(id)init;
@end

