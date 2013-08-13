/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import "iPodUI-Structs.h"
#import "IUMediaQueriesDataSource.h"


@interface IUPodcastsDataSource : IUMediaQueriesDataSource {
}
+(id)queryCollectionPropertiesToFetch;
+(id)tabBarItemTitleKey;
+(id)tabBarItemIconName;
+(int)mediaEntityType;
-(BOOL)shouldDisplayWhenEmpty;
-(id)viewControllerContextForMediaQuery:(id)mediaQuery;
-(id)viewControllerContextForIndex:(unsigned)index;
-(void)setQueries:(id)queries;
-(id)createNoContentDataSource;
-(SEL)libraryHasDisplayableEntitiesSelector;
-(void)createGlobalContexts;
-(Class)cellConfigurationClassForEntity:(id)entity;
-(BOOL)canDeleteIndex:(unsigned)index;
-(BOOL)allowsDeletion;
@end
