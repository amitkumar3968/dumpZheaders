/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ScreenReaderBrailleDriver.framework/ScreenReaderBrailleDriver
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSThread, NSFileHandle;
@protocol SCRDFileReaderDelegate;

@interface SCRDFileReader : XXUnknownSuperclass {
	id<SCRDFileReaderDelegate> _delegate;
	NSThread* _readerThread;
	NSFileHandle* _fileHandle;
	int _threadStartCount;
}
-(void)_readHandler:(id)handler;
-(BOOL)isValid;
-(void)invalidate;
-(BOOL)hasStarted;
-(void)start;
-(void)dealloc;
-(id)initWithDelegate:(id)delegate fileHandle:(id)handle;
@end

