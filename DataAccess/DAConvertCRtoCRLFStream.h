/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import "DataAccess-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSData;

@interface DAConvertCRtoCRLFStream : XXUnknownSuperclass {
	NSData* _mimeData;
	NSData* _preflightData;
	NSData* _postflightData;
	unsigned _totalLength;
	unsigned _readOffset;
	BOOL _lastByteCopiedWasCR;
	BOOL _openEventSent;
	unsigned _streamStatus;
	BOOL _intendToStream;
	id _delegate;
	CFRunLoopSourceRef _rls;
	/*function-pointer*/ void* _clientCallback;
	XXStruct_4pnlqD _clientContext;
}
@property(assign) id delegate;	// converted property
@property(readonly, assign) unsigned streamStatus;	// converted property
-(void)dealloc;
-(id)initWithData:(id)data;
-(id)initWithMIMEData:(id)mimedata preflightData:(id)data postflightData:(id)data3 intendToStream:(BOOL)stream;
-(BOOL)getBuffer:(char**)buffer length:(unsigned*)length;
-(BOOL)hasBytesAvailable;
-(int)read:(char*)read maxLength:(unsigned)length;
-(id)streamError;
// converted property getter: -(unsigned)streamStatus;
// converted property setter: -(void)setDelegate:(id)delegate;
// converted property getter: -(id)delegate;
-(void)close;
-(void)open;
-(void)removeFromRunLoop:(id)runLoop forMode:(id)mode;
-(void)scheduleInRunLoop:(id)runLoop forMode:(id)mode;
-(BOOL)_setCFClientFlags:(unsigned long)flags callback:(/*function-pointer*/ void*)callback context:(XXStruct_4pnlqD*)context;
-(void)_unscheduleFromCFRunLoop:(CFRunLoopRef)cfrunLoop forMode:(CFStringRef)mode;
-(void)_scheduleInCFRunLoop:(CFRunLoopRef)cfrunLoop forMode:(CFStringRef)mode;
-(void)_scheduleCallback;
-(void)_streamEventTrigger;
@end
