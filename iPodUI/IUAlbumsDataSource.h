/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import "IUMediaQueriesDataSource.h"


@interface IUAlbumsDataSource : IUMediaQueriesDataSource {
}
+(id)queryCollectionPropertiesToFetch;
+(int)mediaEntityType;
+(id)tabBarItemTitleKey;
+(id)tabBarItemIconName;
-(unsigned)requiredEntityCountForSections;
-(Class)cellConfigurationClassForEntity:(id)entity;
-(id)viewControllerContextForIndex:(unsigned)index;
-(BOOL)hideActionRowsOnAppear;
-(BOOL)canShowDownloadAllEntities;
-(void)reloadActionRows;
-(BOOL)deleteRemovesEntireGroup;
-(BOOL)allowsDeletion;
-(id)viewControllerContextForMediaQuery:(id)mediaQuery;
-(SEL)libraryHasDisplayableEntitiesSelector;
@end

