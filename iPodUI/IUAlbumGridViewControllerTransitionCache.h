/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class IUWildcatVideosViewController, IUFoldingTransitionView, IUWildcatVideoDetailViewController;

@interface IUAlbumGridViewControllerTransitionCache : XXUnknownSuperclass {
	unsigned _selectedAlbumIndex;
	IUWildcatVideosViewController* _wildcatViewController;
	IUWildcatVideoDetailViewController* _controllerToPush;
	IUFoldingTransitionView* _foldingTransitionView;
}
@property(retain, nonatomic) IUFoldingTransitionView* foldingTransitionView;	// @synthesize=_foldingTransitionView
@property(retain, nonatomic) IUWildcatVideoDetailViewController* controllerToPush;	// @synthesize=_controllerToPush
@property(retain, nonatomic) IUWildcatVideosViewController* wildcatViewController;	// @synthesize=_wildcatViewController
@property(assign, nonatomic) unsigned selectedAlbumIndex;	// @synthesize=_selectedAlbumIndex
// declared property setter: -(void)setFoldingTransitionView:(id)view;
// declared property getter: -(id)foldingTransitionView;
// declared property setter: -(void)setControllerToPush:(id)push;
// declared property getter: -(id)controllerToPush;
// declared property setter: -(void)setWildcatViewController:(id)controller;
// declared property getter: -(id)wildcatViewController;
// declared property setter: -(void)setSelectedAlbumIndex:(unsigned)index;
// declared property getter: -(unsigned)selectedAlbumIndex;
-(void)dealloc;
@end

