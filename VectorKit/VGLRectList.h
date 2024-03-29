/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "VectorKit-Structs.h"


__attribute__((visibility("hidden")))
@interface VGLRectList : XXUnknownSuperclass {
@private
	UIEdgeInsets* _list;
	unsigned _cursor;
	unsigned _capacity;
	unsigned _count;
}
@property(readonly, assign, nonatomic) unsigned count;	// @synthesize=_count
// declared property getter: -(unsigned)count;
-(void)resizeCapacity:(unsigned)capacity;
-(BOOL)intersectsWith:(UIEdgeInsets)with;
-(void)removeAllRects;
-(void)removeRect:(UIEdgeInsets)rect;
-(void)addRect:(UIEdgeInsets)rect;
-(UIEdgeInsets)rectAtIndex:(unsigned)index;
-(void)dealloc;
-(id)init;
@end

