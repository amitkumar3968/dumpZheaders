/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import "UIFoundation-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface NSStorage : XXUnknownSuperclass {
@private
	id _storage;
	long _hintCapacity;
	unsigned _reserved[4];
}
@property(assign) unsigned hintCapacity;	// converted property
+(void)initialize;
-(void)enumerateElementsUsingBlock:(id)block;
-(id)description;
-(void)addElement:(void*)element;
-(void)insertElement:(void*)element atIndex:(unsigned)index;
-(void*)pointerToElement:(unsigned)element directlyAccessibleElements:(NSRange*)elements;
-(void)removeElementsInRange:(NSRange)range;
-(void)replaceElementAtIndex:(unsigned)index withElement:(void*)element;
-(void)removeElementAtIndex:(unsigned)index;
-(void)insertElements:(void*)elements count:(unsigned)count atIndex:(unsigned)index;
-(void*)elementAtIndex:(unsigned)index;
-(unsigned)elementSize;
// converted property getter: -(unsigned)hintCapacity;
// converted property setter: -(void)setHintCapacity:(unsigned)capacity;
-(unsigned)capacity;
-(unsigned)count;
-(void)dealloc;
-(id)init;
-(id)initWithElementSize:(unsigned)elementSize capacity:(unsigned)capacity;
@end

