/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class TSUFlushingManager;

__attribute__((visibility("hidden")))
@interface TSUMemoryWatcher : XXUnknownSuperclass {
@private
	TSUFlushingManager* _flushingManager;
	BOOL _going;
	BOOL _stop;
}
-(void)_simulateMemoryWarning:(id)warning;
-(void)_periodicallySimulateMemoryWarning:(id)warning;
-(void)stopObserving;
-(void)beginObserving;
-(void)dealloc;
-(id)initWithFlushingManager:(id)flushingManager;
@end

