/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import "VectorKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface VKMapTileList : XXUnknownSuperclass {
@private
	vector<VKMapTile *, vk_allocator<VKMapTile *> > _list;
	vector<VGLRect, vk_allocator<VGLRect> > _rectList[26];
	float _maximumStyleZ;
}
@property(readonly, assign, nonatomic) float maximumStyleZ;	// @synthesize=_maximumStyleZ
@property(readonly, assign, nonatomic) unsigned numTiles;
@property(readonly, assign, nonatomic) id* tileList;
// declared property getter: -(float)maximumStyleZ;
-(id).cxx_construct;
-(void).cxx_destruct;
-(void)consolidateList;
-(void)clearList;
-(void)addTileToList:(id)list;
// declared property getter: -(unsigned)numTiles;
-(unsigned)numRectForLayer:(unsigned)layer;
-(const UIEdgeInsets*)rectListForLayer:(unsigned)layer;
// declared property getter: -(id*)tileList;
-(id)init;
@end
