/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "iTunesStoreUI-Structs.h"
#import "SUItemCellContext.h"


@interface SUMediaItemCellContext : SUItemCellContext {
	float _artworkWidth;
	int _hiddenMediaIconTypes;
	BOOL _itemsHaveArtwork;
}
@property(assign, nonatomic) BOOL itemsHaveArtwork;	// @synthesize=_itemsHaveArtwork
@property(assign, nonatomic) int hiddenMediaIconTypes;	// @synthesize=_hiddenMediaIconTypes
@property(assign, nonatomic) float artworkWidth;	// @synthesize=_artworkWidth
// declared property setter: -(void)setItemsHaveArtwork:(BOOL)artwork;
// declared property getter: -(BOOL)itemsHaveArtwork;
// declared property setter: -(void)setHiddenMediaIconTypes:(int)types;
// declared property getter: -(int)hiddenMediaIconTypes;
// declared property setter: -(void)setArtworkWidth:(float)width;
// declared property getter: -(float)artworkWidth;
-(id)init;
@end

