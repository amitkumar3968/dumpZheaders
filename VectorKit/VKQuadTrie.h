/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "VectorKit-Structs.h"


@interface VKQuadTrie : XXUnknownSuperclass {
@private
	unsigned _maxItems;
	XXStruct_zYrK5D _minSize;
	XXStruct_HKaJvA _initialRegion;
	void* __root;
}
-(id).cxx_construct;
-(id)itemDescriptions;
-(id)description;
-(id)breadthFirstDescription;
-(id)depthFirstDescription;
-(void)clearAllItemsPerforming:(id)performing;
-(id)allItems;
-(unsigned)count;
-(void)foreach:(id)foreach;
-(id)itemsPassingRectTest:(id)test coordinateTest:(id)test2;
-(id)itemsInRect:(XXStruct_HKaJvA)rect;
-(BOOL)contains:(id)contains;
-(BOOL)remove:(id)remove;
-(void)insert:(id)insert;
-(void)dealloc;
-(id)initWithInitialRegion:(XXStruct_HKaJvA)initialRegion minimumSize:(XXStruct_zYrK5D)size maximumItems:(unsigned)items;
@end

