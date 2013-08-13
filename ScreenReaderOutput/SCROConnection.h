/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

#import "ScreenReaderOutput-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SCROConnection : XXUnknownSuperclass {
@private
	BOOL _isConnectionStarted;
	unsigned _pingPort;
	CFRunLoopSourceRef _pingSource;
	CFRunLoopSourceRef _invalidationSource;
	unsigned _identifier;
	int _handlerType;
	id _delegate;
}
+(void)_addConnectionToRunLoop:(id)runLoop;
+(void)_unconfigServerAndRetry:(BOOL)retry;
+(void)_configServer;
+(void)_createConnectionRunLoop;
+(void)initialize;
-(void)_ping;
-(int)performHandlerActionForKey:(int)key;
-(id)handlerValueForKey:(int)key withObject:(id)object;
-(id)handlerValueForKey:(int)key;
-(int)setHandlerValue:(id)value forKey:(int)key;
-(int)registerHandlerCallbackForKey:(int)key;
-(int)sendEvent:(id)event;
-(void)_stopConnection;
-(void)_startConnection;
-(void)invalidate;
-(void)dealloc;
-(id)initWithHandlerType:(int)handlerType delegate:(id)delegate;
@end

