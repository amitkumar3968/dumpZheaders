/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "FTServices-Structs.h"


@interface FTEmbeddedReachability : XXUnknownSuperclass {
	BOOL localWiFiRef;
	SCNetworkReachabilityRef reachabilityRef;
}
+(id)reachabilityForLocalWiFi;
+(id)reachabilityForInternetConnection;
+(id)reachabilityWithAddress:(const sockaddr_in*)address;
+(id)reachabilityWithHostName:(id)hostName;
-(int)currentReachabilityStatus;
-(BOOL)connectionRequired;
-(int)networkStatusForFlags:(unsigned)flags;
-(int)localWiFiStatusForFlags:(unsigned)flags;
-(void)dealloc;
-(void)stopNotifer;
-(BOOL)startNotifer;
@end

