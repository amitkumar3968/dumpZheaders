/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import "IUiPadVideosDataSource.h"

@class NSMutableDictionary;

@interface IUiPadTVShowsDataSource : IUiPadVideosDataSource {
	NSMutableDictionary* _tvShowNameSeasonCountMap;
}
+(int)mediaEntityType;
+(id)tabBarItemTitleKey;
-(unsigned)_seasonCountForShowOfSeasonAtIndex:(unsigned)index;
-(id)_tvShowNameForTallyingFromItem:(id)item;
-(void)reloadData;
-(BOOL)shouldLoadLocalImagesSynchronously;
-(BOOL)gridTitleVisibleAtIndex:(unsigned)index;
-(int)gridTitleStyle;
-(id)detailMediaQueryForMediaItem:(id)mediaItem baseQuery:(id)query;
-(SEL)libraryHasDisplayableEntitiesSelector;
-(BOOL)deleteRemovesEntireGroup;
-(void)setQuery:(id)query;
-(void)dealloc;
@end

