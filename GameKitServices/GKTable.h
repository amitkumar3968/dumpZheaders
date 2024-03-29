/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

#import "GameKitServices-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface GKTable : XXUnknownSuperclass {
@private
	gktableitem* _items;
	unsigned long _count;
	unsigned long _size;
	opaque_pthread_mutex_t _lock;
}
@property(readonly, assign) unsigned long count;	// @synthesize=_count
// declared property getter: -(unsigned long)count;
-(void)print;
-(void)unlock;
-(void)lock;
-(void)makeObjectsPerformSelector:(SEL)selector withObject:(id)object;
-(void)makeObjectsPerformSelector:(SEL)selector;
-(void)removeAllObjects;
-(void)removeObjectForKey:(unsigned)key;
-(void)touchObjectForKey:(unsigned)key;
-(void)touchObject:(id)object;
-(void)setObject:(id)object forKey:(unsigned)key;
-(id)allObjects;
-(id)objectForKey:(unsigned)key;
-(void)dealloc;
-(id)initWithSize:(unsigned long)size;
-(id)init;
@end

