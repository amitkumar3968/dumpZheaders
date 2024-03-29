/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import "TelephonyUtilities-Structs.h"
#import "TUAppender.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSFileHandle, NSTimer, NSString, NSMutableString;

@interface TURollingFileAppender : XXUnknownSuperclass <TUAppender> {
	int _lock;
	NSString* _directory;
	NSString* _prefix;
	NSMutableString* _buffer;
	NSFileHandle* _fileHandle;
	NSTimer* _scheduledFlushTimer;
	dispatch_queue_s* _backgroundQueue;
}
+(BOOL)sendDirectoryToCrashReporter:(id)crashReporter error:(id*)error;
-(void)_reloadFileHandles;
-(void)logWithIdentifier:(id)identifier pid:(int)pid date:(id)date level:(int)level topic:(id)topic text:(id)text backtrace:(id)backtrace;
-(void)flush;
-(void)_scheduleFlush;
-(void)_flush;
-(void)_rollAndZipIfNecessary;
-(void)_rollAndZip;
-(id)_logFileHandle;
-(id)_logFilePath;
-(void)dealloc;
-(id)initWithDirectory:(id)directory prefix:(id)prefix;
@end

