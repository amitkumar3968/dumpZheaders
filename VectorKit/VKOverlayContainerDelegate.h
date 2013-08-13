/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import "NSObject.h"


@protocol VKOverlayContainerDelegate <NSObject>
-(BOOL)overlayContainerIsInRealisticMode:(id)realisticMode;
-(id)overlayContainer:(id)container roadTileForTile:(id)tile;
-(id)overlayContainer:(id)container painterForOverlay:(id)overlay;
@end
