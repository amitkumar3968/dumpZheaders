/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

#import "DataAccessExpress-Structs.h"
#import "DASearchQuery.h"

@class NSString;

@interface DAContactsSearchQuery : DASearchQuery {
	NSString* _searchBase;
	NSString* _searchScope;
	BOOL _includePhotos;
}
@property(assign) BOOL includePhotos;	// @synthesize=_includePhotos
@property(retain) NSString* searchScope;	// @synthesize=_searchScope
@property(retain) NSString* searchBase;	// @synthesize=_searchBase
+(id)contactsSearchQueryWithSearchString:(id)searchString searchBase:(id)base searchScope:(id)scope consumer:(id)consumer;
// declared property setter: -(void)setIncludePhotos:(BOOL)photos;
// declared property getter: -(BOOL)includePhotos;
// declared property setter: -(void)setSearchScope:(id)scope;
// declared property getter: -(id)searchScope;
// declared property setter: -(void)setSearchBase:(id)base;
// declared property getter: -(id)searchBase;
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)dictionaryRepresentation consumer:(id)consumer;
-(void)dealloc;
-(id)initWithSearchString:(id)searchString searchBase:(id)base searchScope:(id)scope consumer:(id)consumer;
@end

