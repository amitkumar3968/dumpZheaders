/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

#import "GameKitServices-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class GKConnection, GKList, GKTable, GKAutoPeerIDTable, NSString, GKVoiceChatSessionListener, GKSession;
@protocol GKSessionDOOBReceiveHandler, GKSessionDelegate, GKSessionPrivateDelegate, GKSessionDataReceiveHandler;

@interface GKSessionInternal : XXUnknownSuperclass {
@private
	GKSession* _session;
	NSString* domain;
	NSString* serviceType;
	unsigned _port;
	NSString* _displayName;
	unsigned _pid;
	unsigned maxPeers;
	OpaqueGCKSession* sessionRef;
	OpaqueAGPSession* agpSessionRef;
	GKConnection* _connection;
	id<GKSessionDelegate> _delegate;
	id<GKSessionPrivateDelegate> _privateDelegate;
	id<GKSessionDataReceiveHandler> _dataReceiveHandler;
	void* _dataReceiveHandlerContext;
	id<GKSessionDOOBReceiveHandler> _doobReceiveHandler[2];
	void* _doobReceiveHandlerContext[2];
	GKTable* _peerInfoTable;
	GKTable* _peerNameTable;
	GKAutoPeerIDTable* _peerIDTable;
	GKList* _peersAvailable;
	GKList* _peersConnected;
	GKList* _peersForCleanup;
	GKList* _peersPendingIncomingInvitation;
	GKList* _peersPendingOutgoingInvitation;
	opaque_pthread_mutex_t _lock;
	opaque_pthread_mutex_t _delegateLock;
	BOOL _isSearching;
	BOOL _isPublishing;
	BOOL _sessionStarted;
	int _mode;
	BOOL _isBusy;
	NSString* sessionID;
	NSString* displayName;
	double disconnectTimeout;
	DNSServiceRef_tRef _dnsServiceConnection;
	DNSServiceRef_tRef _dnsServiceResolveConnection;
	int _sReset;
	DNSServiceRef_tRef _serviceBrowser;
	DNSServiceRef_tRef _service;
	DNSServiceRef_tRef _oldService;
	BOOL _handleEventsRunning;
	BOOL _stopHandlingEvents;
	BOOL _wifiEnabled;
	BOOL _shutdown;
	GKVoiceChatSessionListener* _voiceChatListener;
}
@property(assign) BOOL wifiEnabled;
@property(assign, getter=isBusy) BOOL busy;
@property(assign) id<GKSessionPrivateDelegate> privateDelegate;
@property(assign, getter=isAvailable) BOOL available;
@property(assign) double disconnectTimeout;
@property(readonly, assign) NSString* peerID;
@property(readonly, assign) int sessionMode;	// @synthesize=_mode
@property(readonly, assign) NSString* displayName;
@property(readonly, assign) NSString* sessionID;	// @synthesize
@property(assign) id<GKSessionDelegate> delegate;
@property(assign, nonatomic) id dataReceiveHandler;	// @synthesize=_dataReceiveHandler
@property(readonly, assign) GKConnection* connection;	// @synthesize=_connection
@property(assign, nonatomic) unsigned port;	// @synthesize=_port
@property(assign, nonatomic) unsigned maxPeers;	// @synthesize
@property(copy, nonatomic) NSString* serviceType;	// @synthesize
@property(copy, nonatomic) NSString* domain;	// @synthesize
@property(assign, nonatomic) OpaqueAGPSession* agpSessionRef;	// @synthesize
@property(assign, nonatomic) OpaqueGCKSession* sessionRef;	// @synthesize
// declared property getter: -(id)connection;
// declared property getter: -(int)sessionMode;
// declared property getter: -(id)sessionID;
// declared property setter: -(void)setDataReceiveHandler:(id)handler;
// declared property getter: -(id)dataReceiveHandler;
// declared property setter: -(void)setPort:(unsigned)port;
// declared property getter: -(unsigned)port;
// declared property setter: -(void)setAgpSessionRef:(OpaqueAGPSession*)ref;
// declared property getter: -(OpaqueAGPSession*)agpSessionRef;
// declared property setter: -(void)setSessionRef:(OpaqueGCKSession*)ref;
// declared property getter: -(OpaqueGCKSession*)sessionRef;
// declared property setter: -(void)setMaxPeers:(unsigned)peers;
// declared property getter: -(unsigned)maxPeers;
// declared property setter: -(void)setServiceType:(id)type;
// declared property getter: -(id)serviceType;
// declared property setter: -(void)setDomain:(id)domain;
// declared property getter: -(id)domain;
-(id)voiceChatSessionListener;
-(id)stringForGCKID:(unsigned)gckid;
-(void)didResolveService:(DNSServiceRef_tRef)service forPeer:(id)peer hostName:(const char*)name port:(unsigned short)port interface:(unsigned)interface txtLen:(unsigned short)len txtRecord:(const void*)record withError:(int)error moreComing:(BOOL)coming;
-(void)didLookupHostname:(DNSServiceRef_tRef)hostname forPeer:(id)peer hostName:(const char*)name address:(const sockaddr_in*)address interface:(unsigned)interface withError:(int)error moreComing:(BOOL)coming;
-(BOOL)tryConnectToPeer:(id)peer;
-(void)browse;
-(void)didRemoveService:(const char*)service fromIF:(const char*)anIf withError:(int)error moreComing:(BOOL)coming;
-(void)didFindService:(const char*)service fromIF:(const char*)anIf withError:(int)error moreComing:(BOOL)coming;
-(void)didUpdateTXTRecordForPeer:(id)peer fromIF:(const char*)anIf txtLen:(unsigned short)len txtRecord:(const void*)record withError:(int)error moreComing:(BOOL)coming;
-(void)processTXTRecordForPeer:(id)peer txtLen:(unsigned short)len txtRecord:(const void*)record;
-(void)cleanupExAvailablePeers;
-(BOOL)filterService:(const char*)service withPID:(unsigned)pid;
-(void)publish;
-(BOOL)checkDNSConnection;
-(void)handleEvents;
// declared property getter: -(double)disconnectTimeout;
// declared property setter: -(void)setDisconnectTimeout:(double)timeout;
-(BOOL)isPeerBusy:(id)busy;
// declared property setter: -(void)setWifiEnabled:(BOOL)enabled;
// declared property getter: -(BOOL)wifiEnabled;
// declared property setter: -(void)setBusy:(BOOL)busy;
-(void)stopOldService;
// declared property getter: -(BOOL)isBusy;
// declared property getter: -(id)peerID;
-(id)peersWithConnectionState:(int)connectionState;
// declared property getter: -(BOOL)isAvailable;
// declared property setter: -(void)setAvailable:(BOOL)available;
-(void)disconnectFromAllPeers;
-(void)disconnectPeerFromAllPeers:(id)allPeers;
-(void)denyConnectionFromPeer:(id)peer;
-(BOOL)acceptConnectionFromPeer:(id)peer error:(id*)error;
-(void)cancelConnectToPeer:(id)peer;
-(void)connectToPeer:(id)peer withTimeout:(double)timeout;
-(void)timeoutConnectToPeer:(id)peer;
-(void)setDataReceiveHandler:(id)handler withContext:(void*)context;
-(void)setDOOBReceiveHandler:(id)handler withContext:(void*)context inBand:(unsigned)band;
-(void)receiveDOOB:(id)doob fromPeer:(id)peer inSession:(id)session context:(void*)context;
-(BOOL)sendDataToAllPeers:(id)allPeers withDataMode:(int)dataMode error:(id*)error;
-(BOOL)sendData:(id)data toPeers:(id)peers withDataMode:(int)dataMode isAudio:(BOOL)audio error:(id*)error;
-(BOOL)sendData:(id)data toPeers:(id)peers withDataMode:(int)dataMode error:(id*)error;
-(BOOL)passesSendDataSanityCheck:(id)check toPeers:(id)peers withDataMode:(int)dataMode error:(id*)error;
-(BOOL)sendAudioData:(id)data toPeers:(id)peers withDataMode:(int)dataMode error:(id*)error;
-(id)displayNameForPeer:(id)peer;
// declared property getter: -(id)displayName;
-(void)dealloc;
-(void)reset;
-(id)initWithSessionID:(id)sessionID displayName:(id)name session:(id)session sessionMode:(int)mode;
-(id)initWithConnection:(id)connection session:(id)session delegate:(id)delegate;
-(id)description;
// declared property getter: -(id)privateDelegate;
// declared property setter: -(void)setPrivateDelegate:(id)delegate;
// declared property getter: -(id)delegate;
// declared property setter: -(void)setDelegate:(id)delegate;
-(void)unlock;
-(void)lock;
-(void)didPublishWithError:(int)error;
-(void)stopResolvingAllPeers;
-(id)serviceName;
-(BOOL)parseServiceName:(const char*)name intoDisplayName:(id*)name2 pid:(unsigned*)pid state:(id*)state;
-(void)tellDelegate_networkStatisticsChanged:(id)changed;
-(void)tellDelegate_updateRelay:(id)relay;
-(void)tellDelegate_initiateRelay:(id)relay;
-(void)tellDelegate_peerDidBecomeBusy:(id)tellDelegate_peer;
-(void)tellDelegate_connectionRequestToPeerFailed:(id)peerFailed;
-(void)tellDelegate_gotInvited:(id)invited;
-(void)tellDelegate_didReceiveData:(id)data;
-(void)tellDelegate_didReceiveBand_RetryICE:(id)ice;
-(void)tellDelegate_peerDidBecomeUnavailable:(id)tellDelegate_peer;
-(void)tellDelegate_peerDidBecomeAvailable:(id)tellDelegate_peer;
-(void)tellDelegate_isConnectingPeer:(id)peer;
-(void)tellDelegate_didDisconnectPeer:(id)peer;
-(void)tellDelegate_didConnectPeer:(id)peer;
-(void)tellDelegate_sessionDidFailWithError:(id)tellDelegate_session;
-(void)setDisplayName:(id)name forPeer:(unsigned)peer;
-(void)printDictionaries;
-(id)createNSErrorFromGKSessionError:(int)gksessionError description:(id)description reason:(id)reason;
-(id)createNSErrorFromHRESULT:(long)hresult description:(id)description reason:(id)reason;
-(BOOL)isShuttingDown;
-(void)sendCallbacksToDelegate:(XXStruct_jB8chB*)delegate remotePeer:(unsigned)peer;
@end

