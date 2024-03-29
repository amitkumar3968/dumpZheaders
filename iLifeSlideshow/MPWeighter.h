/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableIndexSet, NSMutableArray;

@interface MPWeighter : XXUnknownSuperclass {
	int _totalWeight;
	NSMutableArray* _weights;
	NSMutableArray* _items;
	NSMutableArray* _constraints;
	NSMutableArray* _usageCount;
	NSMutableIndexSet* _ignoreIndices;
	BOOL _evenlyPickByID;
	BOOL _ignoreBreaks;
}
-(void)clearAllItems;
-(int)count;
-(id)constraintsForItem:(id)item;
-(id)allUsageCounts;
-(id)allConstraints;
-(id)allItems;
-(void)addIndexToIgnore:(int)ignore;
-(void)clearIgnoreIndices;
-(void)ignoreIndices:(id)indices;
-(void)ignoreIndex:(int)index;
-(id)ignoredIndices;
-(void)setIgnoreBreaks:(BOOL)breaks;
-(id)imageCounts;
-(int)numberOfItemsWithImageCount:(int)imageCount;
-(void)setEvenlyPickByID:(BOOL)anId;
-(id)indicesEqualingConstraints:(id)constraints;
-(id)indicesMeetingConstraints:(id)constraints;
-(void)increaseUsageCountOfObjectAtIndex:(int)index;
-(BOOL)itemAtIndex:(int)index meetsContraints:(id)contraints oneMatch:(BOOL)match;
-(BOOL)itemAtIndex:(int)index meetsContraints:(id)contraints;
-(int)getRandomIndex;
-(int)getRandomIndexInSubset:(id)subset withPreviousTags:(id)previousTags;
-(int)getRandomIndexInSubset:(id)subset;
-(id)getRandomItemMeetingNumberOfFaceLandscapes:(int)faceLandscapes facePortraits:(int)portraits imageLandscapes:(int)landscapes imagePortraits:(int)portraits4 vBreaks:(int)breaks hBreaks:(int)breaks6 movies:(int)movies fitsInExtraWide:(int)extraWide aspectRatios:(id)ratios previousTags:(id)tags;
-(int)getRandomIndexWithNoBreaksForImageCount:(int)imageCount;
-(int)getRandomIndexMeetingContraints:(id)contraints oneMatch:(BOOL)match;
-(int)getRandomIndexMeetingContraints:(id)contraints;
-(void)addItem:(id)item withWeight:(int)weight andContraints:(id)contraints;
-(void)dealloc;
-(id)init;
@end

