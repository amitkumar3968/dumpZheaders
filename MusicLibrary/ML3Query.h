/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "NSCoding.h"
#import </libobjc.A.h>

@class ML3AggregateQuery, NSArray, ML3MusicLibrary, NSString, ML3Predicate;

@interface ML3Query : NSObject <NSCoding> {
@private
	ML3MusicLibrary* _library;
	Class _entityClass;
	ML3Predicate* _predicate;
	NSArray* _orderingTerms;
	NSString* _propertyToCount;
	ML3AggregateQuery* _nonDirectAggregateQuery;
	BOOL _usingSections;
	BOOL _filtersOnDynamicProperties;
}
@property(readonly, assign) BOOL filtersOnDynamicProperties;	// @synthesize=_filtersOnDynamicProperties
@property(readonly, assign) BOOL distinctPersistentIDProperty;
@property(readonly, assign) NSString* persistentIDProperty;
@property(readonly, assign) NSString* selectCountSQL;
@property(readonly, assign) NSString* selectPersistentIDsSQL;
@property(readonly, assign) BOOL usingSections;	// @synthesize=_usingSections
@property(readonly, assign) NSString* sectionProperty;
@property(readonly, assign) ML3AggregateQuery* nonDirectAggregateQuery;	// @synthesize=_nonDirectAggregateQuery
@property(readonly, assign) unsigned countOfEntities;
@property(readonly, assign) BOOL hasEntities;
@property(readonly, assign) NSString* propertyToCount;	// @synthesize=_propertyToCount
@property(readonly, assign) NSArray* orderingTerms;	// @synthesize=_orderingTerms
@property(readonly, assign) ML3Predicate* predicate;	// @synthesize=_predicate
@property(readonly, assign) Class entityClass;	// @synthesize=_entityClass
@property(readonly, assign) ML3MusicLibrary* library;	// @synthesize=_library
// declared property getter: -(BOOL)filtersOnDynamicProperties;
// declared property getter: -(id)nonDirectAggregateQuery;
// declared property getter: -(BOOL)usingSections;
// declared property getter: -(id)library;
// declared property getter: -(id)propertyToCount;
// declared property getter: -(id)orderingTerms;
// declared property getter: -(id)predicate;
// declared property getter: -(Class)entityClass;
-(void).cxx_destruct;
// declared property getter: -(id)sectionProperty;
-(void)bindToCountStatement:(id)countStatement bindingIndex:(inout int*)index;
// declared property getter: -(id)selectCountSQL;
-(void)bindToPersistentIDsStatement:(id)persistentIDsStatement bindingIndex:(inout int*)index;
-(id)selectPersistentIDsSQLAndProperties:(id)properties ordered:(BOOL)ordered distinct:(BOOL)distinct;
-(id)selectPersistentIDsSQLAndProperties:(id)properties ordered:(BOOL)ordered;
// declared property getter: -(id)selectPersistentIDsSQL;
-(id)selectUnorderedPersistentIDsSQL;
-(void)bindToSectionsStatement:(id)sectionsStatement bindingIndex:(inout int*)index;
-(id)selectSectionsSQLWithDistinctPersistentIDProperty:(BOOL)distinctPersistentIDProperty;
-(id)selectSQLWithColumns:(id)columns groupBy:(id)by orderingTerms:(id)terms directionality:(id)directionality usingLowerBound:(BOOL)bound distinct:(BOOL)distinct limit:(unsigned)limit;
-(void)bindToLowerBoundStatement:(id)lowerBoundStatement bindingIndex:(inout int*)index orderingTerms:(id)terms lowerBoundPersistentID:(long long)anId;
-(id)selectSQLWithColumns:(id)columns groupBy:(id)by orderingTerms:(id)terms directionality:(id)directionality usingLowerBound:(BOOL)bound;
-(id)selectSQLWithColumns:(id)columns groupBy:(id)by orderingTerms:(id)terms;
-(id)selectSQLWithColumns:(id)columns orderingTerms:(id)terms distinct:(BOOL)distinct;
-(id)selectSQLWithColumns:(id)columns orderingTerms:(id)terms limit:(unsigned)limit;
-(id)selectSQLWithColumns:(id)columns orderingTerms:(id)terms;
-(id)selectSQLWithColumns:(id)columns orderingTerms:(id)terms directionality:(id)directionality;
-(id)selectSQLWithColumns:(id)columns groupBy:(id)by distinct:(BOOL)distinct;
-(id)selectSQLWithColumns:(id)columns groupBy:(id)by;
-(id)valueForAggregateFunction:(id)aggregateFunction onEntitiesForProperty:(id)property;
-(void)enumeratePersistentIDsAndProperties:(id)properties countedProperties:(id)properties2 ordered:(BOOL)ordered cancelBlock:(id)block usingBlock:(id)block5;
-(void)enumeratePersistentIDsAndProperties:(id)properties countedProperties:(id)properties2 ordered:(BOOL)ordered usingBlock:(id)block;
-(void)enumeratePersistentIDsAndProperties:(id)properties countedProperties:(id)properties2 usingBlock:(id)block;
-(void)enumeratePersistentIDsAndProperties:(id)properties usingBlock:(id)block;
-(void)enumeratePersistentIDsUsingBlock:(id)block;
-(void)enumerateSectionsUsingBlock:(id)block;
// declared property getter: -(BOOL)distinctPersistentIDProperty;
-(BOOL)deleteAllEntitiesFromLibraryWithDeletionType:(int)deletionType;
-(BOOL)deleteAllEntitiesFromLibrary;
// declared property getter: -(id)persistentIDProperty;
-(id)sections;
// declared property getter: -(unsigned)countOfEntities;
-(unsigned)countOfDistinctRowsForColumn:(id)column;
// declared property getter: -(BOOL)hasEntities;
-(BOOL)hasRowForColumn:(id)column;
-(id)description;
-(BOOL)isEqual:(id)equal;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
-(id)initWithLibrary:(id)library entityClass:(Class)aClass predicate:(id)predicate orderingTerms:(id)terms usingSections:(BOOL)sections nonDirectAggregateQuery:(id)query propertyToCount:(id)count;
@end
