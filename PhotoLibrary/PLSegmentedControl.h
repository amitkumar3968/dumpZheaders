/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary;

@interface PLSegmentedControl : XXUnknownSuperclass {
	NSMutableDictionary* _tagMap;
}
@property(assign, nonatomic) int selectedTag;
-(void)removeSegmentAtIndex:(unsigned)index animated:(BOOL)animated;
-(void)removeAllSegments;
-(void)insertSegmentWithImage:(id)image atIndex:(unsigned)index animated:(BOOL)animated;
-(void)insertSegmentWithTitle:(id)title atIndex:(unsigned)index animated:(BOOL)animated;
-(void)_incrementIndexesForTagsStartingAtIndex:(unsigned)index;
// declared property getter: -(int)selectedTag;
// declared property setter: -(void)setSelectedTag:(int)tag;
-(unsigned)segmentIndexForTag:(unsigned)tag;
-(int)tagForSegmentAtIndex:(unsigned)index;
-(void)setTag:(int)tag forSegmentAtIndex:(unsigned)index;
-(void)dealloc;
@end

