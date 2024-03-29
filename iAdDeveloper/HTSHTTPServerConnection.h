/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iAdDeveloper.framework/iAdDeveloper
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "NSStreamDelegate.h"
#import "iAdDeveloper-Structs.h"

@class HTSHTTPServer, NSTimer, NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface HTSHTTPServerConnection : XXUnknownSuperclass <NSStreamDelegate> {
@private
	HTSHTTPServer* _server;
	NSObject<OS_dispatch_queue>* _connectionQueue;
	NSObject<OS_dispatch_source>* _readSource;
	BOOL _readActive;
	NSObject<OS_dispatch_source>* _writeSource;
	BOOL _writeActive;
	int _socket;
	int _socketRefCount;
	CFHTTPMessageRef _incomingMessage;
	NSMutableArray* _incomingQueue;
	NSMutableArray* _outputQueue;
	BOOL _outputStalled;
	BOOL _closeOnEmptyQueue;
	NSString* _identifier;
	double _lastActivity;
	NSTimer* _idleTimer;
}
@property(retain, nonatomic) NSTimer* idleTimer;	// @synthesize=_idleTimer
@property(assign, nonatomic) double lastActivity;	// @synthesize=_lastActivity
@property(readonly, assign, nonatomic) NSString* identifier;	// @synthesize=_identifier
// declared property getter: -(id)idleTimer;
// declared property getter: -(double)lastActivity;
// declared property getter: -(id)identifier;
-(void)printData:(id)data withMessage:(id)message;
// declared property setter: -(void)setLastActivity:(double)activity;
-(void)_shutdownIdleConnection:(id)connection;
// declared property setter: -(void)setIdleTimer:(id)timer;
-(void)_closeInputStream;
-(void)_closeOutputStream;
-(void)_processStreamOutput;
-(void)_processStreamInput;
-(void)_processIncomingBytes:(const char*)bytes length:(long)length;
-(void)sendResponse:(id)response withLatency:(double)latency closeAfterSending:(BOOL)sending;
-(id)initWithServer:(id)server socket:(int)socket;
-(void)dealloc;
@end

