/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "GameKitServices-Structs.h"

@class NSString, NSObject, NSMutableDictionary, GKDiscoveryBonjour;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface GKDiscoveryManager : XXUnknownSuperclass {
@private
	id _playerFoundHandler;
	id _playerLostHandler;
	id _receiveDataHandler;
	NSString* _playerID;
	NSString* _deviceID;
	NSMutableDictionary* _peers;
	GKDiscoveryBonjour* _bonjour;
	NSObject<OS_dispatch_queue>* _peersQueue;
}
@property(retain, nonatomic) GKDiscoveryBonjour* bonjour;	// @synthesize=_bonjour
@property(retain, nonatomic) NSMutableDictionary* peers;	// @synthesize=_peers
@property(copy, nonatomic) NSString* deviceID;	// @synthesize=_deviceID
@property(copy, nonatomic) NSString* playerID;	// @synthesize=_playerID
@property(copy, nonatomic) id receiveDataHandler;	// @synthesize=_receiveDataHandler
@property(copy, nonatomic) id playerLostHandler;	// @synthesize=_playerLostHandler
@property(copy, nonatomic) id playerFoundHandler;	// @synthesize=_playerFoundHandler
+(id)parseDeviceIDFromServiceName:(id)serviceName;
// declared property setter: -(void)setDeviceID:(id)anId;
// declared property getter: -(id)deviceID;
// declared property setter: -(void)setPlayerID:(id)anId;
// declared property getter: -(id)playerID;
// declared property setter: -(void)setBonjour:(id)bonjour;
// declared property getter: -(id)bonjour;
// declared property setter: -(void)setReceiveDataHandler:(id)handler;
// declared property getter: -(id)receiveDataHandler;
// declared property setter: -(void)setPlayerLostHandler:(id)handler;
// declared property getter: -(id)playerLostHandler;
// declared property setter: -(void)setPlayerFoundHandler:(id)handler;
// declared property getter: -(id)playerFoundHandler;
// declared property setter: -(void)setPeers:(id)peers;
// declared property getter: -(id)peers;
-(void)removeInterface:(unsigned)interface forPeerWithServiceName:(id)serviceName;
-(void)didLosePeer:(id)peer;
-(id)peersList;
-(void)addInterface:(unsigned)interface withDiscoveryInfo:(id)discoveryInfo forPeerWithServiceName:(id)serviceName;
-(void)forgetParticipant:(id)participant deviceID:(id)anId;
-(void)sendDataToParticipant:(id)participant deviceID:(id)anId data:(id)data withCompletionHandler:(id)completionHandler;
-(void)stopBrowsing;
-(void)startBrowsingLocalPlayer:(id)player;
-(void)cleanUpPeersForBrowse;
-(void)stopAdvertising;
-(id)localServiceName;
-(id)serviceNameforDeviceID:(id)anId playerID:(id)anId2;
-(id)startAdvertisingLocalPlayer:(id)player discoveryInfo:(id)info;
-(void)passDataToGKLayer:(id)gklayer fromPeer:(id)peer;
-(void)processEvent:(int)event forPeer:(id)peer withUserInfo:(id)userInfo;
-(void)connectToSockAddr:(sockaddr*)sockAddr port:(unsigned short)port forPeer:(id)peer;
-(void)resolveForPeer:(id)peer;
-(id)generateDeviceID;
-(void)dealloc;
-(id)init;
@end

