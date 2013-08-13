/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import "PhotoLibrary-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableData, NSArray;
@protocol PLDataArrayInputStreamProgressDelegate;

@interface PLDataArrayInputStream : XXUnknownSuperclass {
	NSArray* _dataArray;
	NSMutableData* _bodyData;
	unsigned _dataCount;
	unsigned _dataLength;
	unsigned _dataOffset;
	unsigned _currentIndex;
	unsigned _currentOffset;
	unsigned _currentLength;
	BOOL _openEventSent;
	unsigned _streamStatus;
	id _delegate;
	id<PLDataArrayInputStreamProgressDelegate> _progressDelegate;
	CFRunLoopSourceRef _rls;
	/*function-pointer*/ void* _clientCallback;
	XXStruct_4pnlqD _clientContext;
}
@property(assign, nonatomic) id<PLDataArrayInputStreamProgressDelegate> progressDelegate;	// @synthesize=_progressDelegate
@property(assign) id delegate;	// converted property
@property(readonly, assign) unsigned streamStatus;	// converted property
// declared property setter: -(void)setProgressDelegate:(id)delegate;
// declared property getter: -(id)progressDelegate;
-(BOOL)getBuffer:(char**)buffer length:(unsigned*)length;
-(BOOL)hasBytesAvailable;
-(unsigned)bytesRead;
-(unsigned)totalBytes;
-(int)read:(char*)read maxLength:(unsigned)length;
-(void)_scheduleProgressUpdate;
-(void)_updateProgress;
// converted property getter: -(unsigned)streamStatus;
-(id)streamError;
-(void)close;
-(void)open;
-(void)removeFromRunLoop:(id)runLoop forMode:(id)mode;
-(void)scheduleInRunLoop:(id)runLoop forMode:(id)mode;
-(BOOL)_setCFClientFlags:(unsigned long)flags callback:(/*function-pointer*/ void*)callback context:(XXStruct_4pnlqD*)context;
-(void)_unscheduleFromCFRunLoop:(CFRunLoopRef)cfrunLoop forMode:(CFStringRef)mode;
-(void)_scheduleInCFRunLoop:(CFRunLoopRef)cfrunLoop forMode:(CFStringRef)mode;
-(void)_scheduleCallback;
-(void)_streamEventTrigger;
-(void)dealloc;
// converted property setter: -(void)setDelegate:(id)delegate;
// converted property getter: -(id)delegate;
-(id)initWithDataArray:(id)dataArray;
@end
