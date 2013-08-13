/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import "ImageCapture-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSMutableArray, NSDictionary;

@interface ICPTPIPBonjourServiceProperties : XXUnknownSuperclass {
	CFSocketRef _hostSocket;
	NSString* _hostName;
	unsigned short _hostPort;
	NSString* _hostGUID;
	unsigned long _hostMaxConnections;
	int _hostSecuritylevel;
	NSString* _serviceType;
	NSDictionary* _txtRecordsDict;
	CFNetServiceRef _publishedService;
	NSMutableArray* _clients;
	int _clientSpinLock;
	id _delegate;
@private
	int _clientsSpinLock;
}
@property(assign) id delegate;	// @synthesize=_delegate
@property(assign) int clientsSpinLock;	// @synthesize=_clientsSpinLock
@property(retain) NSMutableArray* clients;	// @synthesize=_clients
@property(assign) CFNetServiceRef publishedService;	// @synthesize=_publishedService
@property(retain) NSDictionary* txtRecordsDict;	// @synthesize=_txtRecordsDict
@property(retain) NSString* serviceType;	// @synthesize=_serviceType
@property(assign) int hostSecurityLevel;	// @synthesize=_hostSecuritylevel
@property(assign) unsigned long hostMaxConnections;	// @synthesize=_hostMaxConnections
@property(retain) NSString* hostGUID;	// @synthesize=_hostGUID
@property(assign) unsigned short hostPort;	// @synthesize=_hostPort
@property(retain) NSString* hostName;	// @synthesize=_hostName
@property(assign) CFSocketRef hostSocket;	// @synthesize=_hostSocket
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property getter: -(id)delegate;
// declared property setter: -(void)setClientsSpinLock:(int)lock;
// declared property getter: -(int)clientsSpinLock;
// declared property setter: -(void)setClients:(id)clients;
// declared property getter: -(id)clients;
// declared property setter: -(void)setPublishedService:(CFNetServiceRef)service;
// declared property getter: -(CFNetServiceRef)publishedService;
// declared property setter: -(void)setTxtRecordsDict:(id)dict;
// declared property getter: -(id)txtRecordsDict;
// declared property setter: -(void)setServiceType:(id)type;
// declared property getter: -(id)serviceType;
// declared property setter: -(void)setHostSecurityLevel:(int)level;
// declared property getter: -(int)hostSecurityLevel;
// declared property setter: -(void)setHostMaxConnections:(unsigned long)connections;
// declared property getter: -(unsigned long)hostMaxConnections;
// declared property setter: -(void)setHostGUID:(id)guid;
// declared property getter: -(id)hostGUID;
// declared property setter: -(void)setHostPort:(unsigned short)port;
// declared property getter: -(unsigned short)hostPort;
// declared property setter: -(void)setHostName:(id)name;
// declared property getter: -(id)hostName;
// declared property setter: -(void)setHostSocket:(CFSocketRef)socket;
// declared property getter: -(CFSocketRef)hostSocket;
-(void)finalize;
-(void)dealloc;
@end

