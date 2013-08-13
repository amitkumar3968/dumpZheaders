/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "ML3Query.h"

@class NSString;

@interface ML3AggregateQuery : ML3Query {
@private
	Class _aggregateEntityClass;
	NSString* _foreignPersistentIDProperty;
}
@property(readonly, assign) NSString* foreignPersistentIDProperty;	// @synthesize=_foreignPersistentIDProperty
@property(readonly, assign) Class aggregateEntityClass;	// @synthesize=_aggregateEntityClass
// declared property getter: -(id)foreignPersistentIDProperty;
// declared property getter: -(Class)aggregateEntityClass;
-(void).cxx_destruct;
-(id)selectPersistentIDsSQLAndProperties:(id)properties ordered:(BOOL)ordered;
-(unsigned)countOfEntities;
-(BOOL)hasEntities;
-(BOOL)distinctPersistentIDProperty;
-(id)persistentIDProperty;
-(Class)entityClass;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
-(void)dealloc;
-(id)initWithUnitQuery:(id)unitQuery aggregateEntityClass:(Class)aClass foreignPersistentIDProperty:(id)property;
@end
