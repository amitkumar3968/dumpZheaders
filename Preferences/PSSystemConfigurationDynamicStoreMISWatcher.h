/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import "Preferences-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface PSSystemConfigurationDynamicStoreMISWatcher : XXUnknownSuperclass {
	CFRunLoopSourceRef _scRunLoopSource;
	SCDynamicStoreRef _scDynamicStore;
	int _misState;
	int _misReason;
}
+(id)sharedManager;
-(void)sendStateUpdate;
-(void)readMISState:(int*)state andReason:(int*)reason;
-(void)getMISState:(int*)state andReason:(int*)reason;
-(void)dealloc;
-(id)init;
@end

