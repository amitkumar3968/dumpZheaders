/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import "iPodUI-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface IUPropertyLayoutStorage : XXUnknownSuperclass {
@private
	unsigned _count;
	id* _values;
	id* _selectedValues;
	CGRect* _frames;
}
@property(readonly, assign) unsigned count;	// converted property
-(CGRect)frameAtIndex:(unsigned)index;
-(void)setFrame:(CGRect)frame atIndex:(unsigned)index;
-(id)selectedValueAtIndex:(unsigned)index;
-(id)valueAtIndex:(unsigned)index;
-(void)setSelectedValue:(id)value atIndex:(unsigned)index;
-(void)setValue:(id)value atIndex:(unsigned)index;
// converted property getter: -(unsigned)count;
-(void)dealloc;
-(id)initWithCount:(unsigned)count;
@end
