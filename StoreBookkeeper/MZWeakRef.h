/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface MZWeakRef : XXUnknownSuperclass {
@private
	id _object;
	unsigned _objectAddress;
}
@property(readonly, retain) id object;	// converted property
+(id)weakRefWithObject:(id)object;
// converted property getter: -(id)object;
-(BOOL)isEqual:(id)equal;
-(unsigned)hash;
-(void)dealloc;
@end
