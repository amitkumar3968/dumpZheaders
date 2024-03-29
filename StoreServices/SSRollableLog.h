/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSObject, SSLogFileOptions, NSFileHandle;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SSRollableLog : XXUnknownSuperclass {
	NSObject<OS_dispatch_queue>* _dispatchQueue;
	double _lastFileStatTime;
	NSFileHandle* _fileHandle;
	NSObject<OS_dispatch_source>* _fileObserverSource;
	SSLogFileOptions* _options;
}
@property(readonly, assign) SSLogFileOptions* logOptions;
-(void)_rollLogFiles;
-(void)_openLogFile;
-(id)_logFilePathWithIndex:(int)index;
-(void)_closeLogFile;
-(void)_checkLogFileSize;
-(id)_activeLogFilePath;
-(void)writeString:(id)string;
// declared property getter: -(id)logOptions;
-(void)dealloc;
-(id)initWithLogOptions:(id)logOptions;
@end

