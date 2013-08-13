/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, IUSearchDataSource;

@interface SearchPerformOperation : XXUnknownSuperclass {
	IUSearchDataSource* _searchDataSource;
	NSString* _searchString;
	int _searchScope;
	unsigned _countOfFoundResults;
	NSString* _searchIdentifier;
}
-(void)main;
-(void)enumerateEntitiesForQuery:(id)query;
-(void)_reportResultsWithQuery:(id)query searchIdentifier:(id)identifier;
-(void)dealloc;
-(id)initWithSearchDataSource:(id)searchDataSource searchString:(id)string searchScope:(int)scope searchIdentifier:(id)identifier;
@end

