/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import "PhotoLibrary-Structs.h"
#import "NSObject.h"


@protocol PLStackViewDataSource <NSObject>
-(int)stackViewPosterItemIndex:(id)index;
-(id)stackView:(id)view itemViewAtIndex:(int)index loadImagesSynchronously:(BOOL)synchronously;
-(int)stackViewItemCount:(id)count;
@optional
-(BOOL)stackViewPrefersLazyPreheating:(id)preheating;
-(void)stackView:(id)view getUnreadStartMarkerCount:(unsigned*)count showsProgress:(BOOL*)progress;
-(void)stackView:(id)view preheatImagesInRange:(NSRange)range;
-(void)stackView:(id)view tappedItemAtIndex:(unsigned)index;
-(id)stackView:(id)view collapsedIndexesForCount:(unsigned)count;
-(void)stackView:(id)view saveStackedImage:(id)image options:(id)options;
-(id)stackedImageForStackView:(id)stackView options:(id*)options;
-(BOOL)stackView:(id)view showUnreadIndicatorForItemAtIndex:(int)index;
-(id)stackView:(id)view subtitleForItemAtIndex:(int)index;
-(id)stackView:(id)view titleForItemAtIndex:(int)index;
-(id)stackView:(id)view badgeImageForImageAtIndex:(int)index;
-(id)stackView:(id)view textBadgeStringForImageAtIndex:(int)index;
-(id)stackView:(id)view dataForImageAtIndex:(int)index imageData:(XXStruct_g6RH7D*)data;
-(BOOL)stackView:(id)view writeItemsWithIndexes:(id)indexes toPasteboard:(id)pasteboard;
-(void)stackViewItemMoveDidComplete:(id)stackViewItemMove;
-(void)stackView:(id)view moveItemAtIndex:(unsigned)index toIndex:(unsigned)index3;
-(void)stackView:(id)view renameItemAtIndex:(unsigned)index toName:(id)name;
-(void)stackView:(id)view removeItemAtIndex:(unsigned)index;
-(int)stackView:(id)view editingOptionsForItemAtIndex:(unsigned)index;
@end

