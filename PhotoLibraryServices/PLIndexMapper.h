/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <XXUnknownSuperclass.h> // Unknown library

@protocol PLIndexMapperDataSource;

@interface PLIndexMapper : XXUnknownSuperclass {
@private
	id<PLIndexMapperDataSource> _dataSource;
}
-(BOOL)applyContainerChangeNotification:(id)notification changeTypes:(int)types toFilteredIndexes:(id)filteredIndexes;
-(unsigned)backingIndexForIndex:(unsigned)index;
-(id)backingIndexesForIndexes:(id)indexes;
-(unsigned)indexForBackingIndex:(unsigned)backingIndex;
-(id)indexesForBackingIndexes:(id)backingIndexes;
-(id)initWithDataSource:(id)dataSource;
@end

