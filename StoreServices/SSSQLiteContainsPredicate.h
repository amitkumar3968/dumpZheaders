/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "StoreServices-Structs.h"
#import "SSSQLitePropertyPredicate.h"
#import "NSCopying.h"

@class SSSQLiteQuery, NSArray, NSString;

@interface SSSQLiteContainsPredicate : SSSQLitePropertyPredicate <NSCopying> {
	BOOL _negative;
	SSSQLiteQuery* _query;
	NSString* _queryProperty;
	id _values;
}
@property(readonly, assign, nonatomic) NSArray* values;	// @synthesize=_values
@property(readonly, assign, nonatomic) NSString* queryProperty;	// @synthesize=_queryProperty
@property(readonly, assign, nonatomic) SSSQLiteQuery* query;	// @synthesize=_query
@property(readonly, assign, nonatomic, getter=isNegative) BOOL negative;	// @synthesize=_negative
+(id)doesNotContainPredicateWithProperty:(id)property values:(id)values;
+(id)containsPredicateWithProperty:(id)property query:(id)query queryProperty:(id)property3;
+(id)containsPredicateWithProperty:(id)property values:(id)values;
// declared property getter: -(id)values;
// declared property getter: -(id)queryProperty;
// declared property getter: -(id)query;
// declared property getter: -(BOOL)isNegative;
-(id)SQLForEntityClass:(Class)entityClass;
-(BOOL)isEqual:(id)equal;
-(void)bindToStatement:(sqlite3_stmt*)statement bindingIndex:(inout int*)index;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
@end
