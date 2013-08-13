/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "SUTableDataSource.h"

@class NSArray;

@interface SUSimpleTableDataSource : SUTableDataSource {
	Class _cellConfigurationClass;
	NSArray* _objects;
}
@property(retain, nonatomic) NSArray* objects;	// @synthesize=_objects
@property(retain, nonatomic) Class cellConfigurationClass;	// @synthesize=_cellConfigurationClass
// declared property setter: -(void)setObjects:(id)objects;
// declared property getter: -(id)objects;
// declared property setter: -(void)setCellConfigurationClass:(Class)aClass;
// declared property getter: -(Class)cellConfigurationClass;
-(void)reloadCellContexts;
-(int)numberOfRowsInSection:(int)section;
-(int)numberOfSections;
-(void)configureCell:(id)cell forIndexPath:(id)indexPath;
-(float)cellHeightForIndexPath:(id)indexPath;
-(id)cellForIndexPath:(id)indexPath;
-(id)objectForIndexPath:(id)indexPath;
-(void)dealloc;
@end

