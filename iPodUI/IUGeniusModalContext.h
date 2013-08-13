/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import "IUModalContext.h"

@class MPMediaPlaylist;

@interface IUGeniusModalContext : IUModalContext {
	MPMediaPlaylist* _playlist;
	BOOL _shouldSwitchViewControllerContexts;
}
@property(assign, nonatomic) BOOL shouldSwitchViewControllerContexts;	// @synthesize=_shouldSwitchViewControllerContexts
// declared property setter: -(void)setShouldSwitchViewControllerContexts:(BOOL)switchViewControllerContexts;
// declared property getter: -(BOOL)shouldSwitchViewControllerContexts;
-(id)_itemAtIndex:(unsigned)index forDataSource:(id)dataSource;
-(void)_presentAlertForError:(id)error;
-(id)_geniusPlaylist;
-(void)_cancelAction:(id)action;
-(BOOL)shouldSetEditing:(BOOL)editing;
-(void)handleSelectionForIndex:(unsigned)index dataSource:(id)source;
-(id)newTabBarController;
-(id)copyQueryForQuery:(id)query;
-(int)allowedMediaTypesForMediaTypes:(int)mediaTypes;
-(void)configureNavigationItem:(id)item;
-(void)configureDataSource:(id)source;
-(BOOL)canHandleSelectionForIndex:(unsigned)index dataSource:(id)source;
-(BOOL)beginsPlaybackAfterDismiss;
-(void)dealloc;
-(id)init;
@end

