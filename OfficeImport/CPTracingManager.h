/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "OfficeImport-Structs.h"

@class TSMTraceBuffer;

__attribute__((visibility("hidden")))
@interface CPTracingManager : XXUnknownSuperclass {
@private
	TSMTraceBuffer* mBuffer;
	unsigned mCount;
}
+(id)allocWithZone:(NSZone*)zone;
+(id)sharedManager;
+(id)_singletonAlloc;
-(void)teardown;
-(void)setup;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)zone;
-(id)autorelease;
-(oneway void)release;
-(unsigned)retainCount;
-(id)retain;
@end
