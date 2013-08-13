/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import "iPodUI-Structs.h"
#import "IUMediaQueriesDataSource.h"


@interface IUVideosDataSource : IUMediaQueriesDataSource {
	BOOL _showMoreFromiTunesActionRow;
}
@property(assign, nonatomic) BOOL showMoreFromiTunesActionRow;
+(id)queryItemPropertiesToFetch;
+(int)mediaEntityType;
+(Class)cellConfigurationClassForSongs;
-(void)_rentalInfoChangedNotification:(id)notification;
// declared property getter: -(BOOL)showMoreFromiTunesActionRow;
// declared property setter: -(void)setShowMoreFromiTunesActionRow:(BOOL)row;
-(SEL)libraryHasDisplayableEntitiesSelector;
-(id)viewControllerContextForIndex:(unsigned)index;
-(void)reloadActionRows;
-(void)createGlobalContexts;
-(id)copyGetMoreFromITunesStoreActionRow;
-(BOOL)shouldDisplayWhenEmpty;
-(BOOL)allowsDeletion;
-(void)dealloc;
-(id)init;
@end
