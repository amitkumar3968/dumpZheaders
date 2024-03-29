/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import "iPodUI-Structs.h"
#import "IUiPadVideosDataSource.h"


@interface IUiPadVideoITunesUDataSource : IUiPadVideosDataSource {
}
+(int)mediaEntityType;
+(id)tabBarItemTitleKey;
-(void)_setQuery:(id)query;
-(BOOL)shouldLoadLocalImagesSynchronously;
-(int)gridTitleStyle;
-(id)viewControllerContextForMediaQuery:(id)mediaQuery;
-(id)detailMediaQueryForMediaItem:(id)mediaItem baseQuery:(id)query;
-(int)filteredMediaTypes;
-(void)setQuery:(id)query;
-(SEL)libraryHasDisplayableEntitiesSelector;
-(BOOL)deleteRemovesEntireGroup;
@end

