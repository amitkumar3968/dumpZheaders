/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import "iPodUI-Structs.h"
#import "IUMediaQueriesDataSource.h"

@class NSMutableIndexSet;

@interface IUiPadVideosDataSource : IUMediaQueriesDataSource {
	NSMutableIndexSet* _artStillFrameMap;
}
+(BOOL)usesNowPlayingIndicator;
-(BOOL)selectionPossibleForIndex:(unsigned)index;
-(BOOL)isArtAStillFrameAtIndex:(unsigned)index;
-(void)setArtAStillFrame:(BOOL)frame atIndex:(unsigned)index;
-(id)newGridImageView;
-(BOOL)gridUseUnmodifiedThumbnails;
-(BOOL)allowsDeletion;
-(BOOL)alwaysGroupedInGridView;
-(BOOL)shouldDisplayWhenEmpty;
-(id)viewControllerContextForMediaQuery:(id)mediaQuery;
-(id)detailMediaQueryForMediaItem:(id)mediaItem baseQuery:(id)query;
-(id)viewControllerContextForIndex:(unsigned)index;
-(int)gridTitleStyle;
-(BOOL)gridDimTouchedAlbum;
-(float)gridTopPadding;
-(int)gridImageContentMode;
-(Class)gridImageModifierClass;
-(id)gridSubtitleColor;
-(id)gridTitleColor;
-(id)gridBackgroundColor;
-(void)reloadActionRows;
-(id)copyGetMoreFromITunesStoreActionRow;
-(CGPoint)actualImageOrigin;
-(CGSize)thumbnailSize;
-(void)setQuery:(id)query;
-(void)dealloc;
@end
