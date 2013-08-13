/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import "AppSupport-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray;

@interface CPMemoryPool : XXUnknownSuperclass {
@private
	opaque_pthread_mutex_t _lock;
	NSMutableArray* _files;
	char* _label;
	unsigned long _slotLength;
}
@property(readonly, assign, nonatomic) unsigned long slotLength;	// @synthesize=_slotLength
// declared property getter: -(unsigned long)slotLength;
-(void)dealloc;
-(id)nextSlotWithBytes:(const void*)bytes length:(unsigned long)length;
-(id)initWithLabel:(const char*)label slotLength:(unsigned long)length;
@end
