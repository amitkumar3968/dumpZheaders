/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import "MIME-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSLock;

@interface MFWeakSet : XXUnknownSuperclass {
@private
	NSLock* _lock;
	unsigned long _gen;
	CFDictionaryRef _objects;
}
+(id)setWithCapacity:(unsigned)capacity;
+(id)setWithArray:(id)array;
+(id)setWithSet:(id)set;
+(id)setWithObjects:(id)objects;
+(id)setWithObjects:(id*)objects count:(unsigned)count;
+(id)setWithObject:(id)object;
+(id)set;
-(void)setSet:(id)set;
-(void)unionSet:(id)set;
-(void)removeAllObjects;
-(void)minusSet:(id)set;
-(void)intersectSet:(id)set;
-(void)addObjectsFromArray:(id)array;
-(void)removeObject:(id)object;
-(void)addObject:(id)object;
-(void)dealloc;
-(id)init;
-(id)initWithCapacity:(unsigned)capacity;
-(id)initWithArray:(id)array;
-(id)initWithSet:(id)set copyItems:(BOOL)items;
-(id)initWithSet:(id)set;
-(id)initWithObjects:(id)objects;
-(id)initWithObjects:(id*)objects count:(unsigned)count;
-(id)objectsWithOptions:(unsigned)options passingTest:(id)test;
-(id)objectsPassingTest:(id)test;
-(void)enumerateObjectsWithOptions:(unsigned)options usingBlock:(id)block;
-(void)enumerateObjectsUsingBlock:(id)block;
-(id)setByAddingObjectsFromArray:(id)array;
-(id)setByAddingObjectsFromSet:(id)set;
-(id)setByAddingObject:(id)object;
-(void)makeObjectsPerformSelector:(SEL)selector withObject:(id)object;
-(void)makeObjectsPerformSelector:(SEL)selector;
-(BOOL)isSubsetOfSet:(id)set;
-(BOOL)isEqualToSet:(id)set;
-(BOOL)intersectsSet:(id)set;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(id)descriptionWithLocale:(id)locale;
-(id)description;
-(BOOL)containsObject:(id)object;
-(id)anyObject;
-(id)mutableCopyWithZone:(NSZone*)zone;
-(id)copyWithZone:(NSZone*)zone;
-(id)allObjects;
-(id)_copyAllItems;
-(unsigned)countByEnumeratingWithState:(XXStruct_t4MBZD*)state objects:(id*)objects count:(unsigned)count;
-(id)objectEnumerator;
-(id)member:(id)member;
-(unsigned)count;
@end

