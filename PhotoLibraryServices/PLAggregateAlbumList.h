/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import "PhotoLibraryServices-Structs.h"
#import "PLAlbumContainer.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "PLAlbumListChangeObserver.h"

@class NSMutableOrderedSet, NSString;

@interface PLAggregateAlbumList : XXUnknownSuperclass <PLAlbumListChangeObserver, PLAlbumContainer> {
@private
	NSMutableOrderedSet* _allAlbums;
	NSMutableOrderedSet* _childAlbumLists;
	int _filter;
}
@property(readonly, assign, nonatomic) NSString* _typeDescription;
@property(readonly, assign, nonatomic) NSString* _prettyDescription;
@property(readonly, assign, nonatomic) unsigned unreadAlbumsCount;
@property(readonly, assign, nonatomic) id albumsSortingComparator;
@property(assign, nonatomic) int filter;	// @synthesize=_filter
+(NSObject*)albumListWithFilter:(int)filter inPhotoLibrary:(id)photoLibrary;
// declared property setter: -(void)setFilter:(int)filter;
// declared property getter: -(int)filter;
// declared property getter: -(id)_typeDescription;
// declared property getter: -(id)_prettyDescription;
-(id)photoLibrary;
-(void)updateAlbumsOrderIfNeeded;
-(BOOL)needsReordering;
-(void)setNeedsReordering;
// declared property getter: -(id)albumsSortingComparator;
-(BOOL)albumHasFixedOrder:(NSObject*)order;
-(BOOL)canEditAlbums;
-(int)albumListType;
-(id)managedObjectContext;
// declared property getter: -(unsigned)unreadAlbumsCount;
-(BOOL)hasAtLeastOneAlbum;
-(id)albums;
-(id)identifier;
-(void)albumListDidChange:(id)albumList;
-(void)_invalidateAllAlbums;
-(void)dealloc;
-(id)initWithFilter:(int)filter inPhotoLibrary:(id)photoLibrary;
@end

