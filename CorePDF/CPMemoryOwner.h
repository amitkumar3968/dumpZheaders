/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CPDisposable.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface CPMemoryOwner : XXUnknownSuperclass <CPDisposable> {
	void* memory;
}
-(void)dealloc;
-(void)finalize;
-(void)dispose;
-(id)initWithAllocatedMemory:(void*)allocatedMemory;
@end

