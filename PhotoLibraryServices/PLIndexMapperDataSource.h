/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import "NSObject.h"

@class NSIndexSet;

@protocol PLIndexMapperDataSource <NSObject>
@property(readonly, assign, nonatomic) NSIndexSet* filteredIndexes;
// declared property getter: -(id)filteredIndexes;
-(BOOL)shouldIncludeObjectAtIndex:(unsigned)index;
@end

