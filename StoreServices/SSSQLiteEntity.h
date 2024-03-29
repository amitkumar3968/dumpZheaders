/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SSSQLiteEntity.h"
#import "NSObject.h"

@class SSSQLiteDatabase;

@protocol SSSQLiteEntity <NSObject>
+(id)databasePropertyToSetClientProperty:(id)setClientProperty;
+(id)databasePropertyToGetClientProperty:(id)getClientProperty;
+(id)copyDatabaseDictionaryToSetClientDictionary:(id)setClientDictionary;
+(id)disambiguatedSQLForProperty:(id)property;
+(id)foreignDatabaseTablesToDelete;
+(id)foreignKeyColumnForTable:(id)table;
+(id)foreignDatabaseTableForProperty:(id)property;
+(id)foreignDatabaseColumnForProperty:(id)property;
+(id)joinClauseForProperty:(id)property;
+(id)databaseTable;
+(id)databaseValueForProperty:(id)property clientValue:(id)value;
-(BOOL)deleteFromDatabase;
-(id)copyXPCEncodedValuesForClientProperties:(id)clientProperties;
-(id)copyValuesForClientProperties:(id)clientProperties;
-(BOOL)setValuesWithDictionary:(id)dictionary;
-(BOOL)setValue:(id)value forProperty:(id)property;
-(void)getValues:(id*)values forProperties:(const id*)properties count:(unsigned)count;
-(id)valueForProperty:(id)property;
@end

@interface SSSQLiteEntity : XXUnknownSuperclass <SSSQLiteEntity> {
@private
	SSSQLiteDatabase* _database;
	long long _persistentID;
}
@property(readonly, assign, nonatomic) BOOL existsInDatabase;
@property(readonly, assign, nonatomic) long long persistentID;	// @synthesize=_persistentID
@property(readonly, assign, nonatomic) SSSQLiteDatabase* database;	// @synthesize=_database
+(BOOL)_insertValues:(id)values intoTable:(id)table withPersistentID:(long long)persistentID database:(id)database;
+(Class)memoryEntityClass;
+(id)joinClauseForProperty:(id)property;
+(id)foreignKeyColumnForTable:(id)table;
+(id)foreignDatabaseTablesToDelete;
+(id)foreignDatabaseTableForProperty:(id)property;
+(id)foreignDatabaseColumnForProperty:(id)property;
+(id)disambiguatedSQLForProperty:(id)property;
+(id)databaseTable;
+(id)databaseValueForProperty:(id)property clientValue:(id)value;
+(id)databasePropertyToSetClientProperty:(id)setClientProperty;
+(id)databasePropertyToGetClientProperty:(id)getClientProperty;
+(id)copyDatabaseDictionaryToSetClientDictionary:(id)setClientDictionary;
+(id)queryWithDatabase:(id)database predicate:(id)predicate orderingProperties:(id)properties;
+(id)queryWithDatabase:(id)database predicate:(id)predicate;
+(id)minValueForProperty:(id)property predicate:(id)predicate database:(id)database;
+(id)maxValueForProperty:(id)property predicate:(id)predicate database:(id)database;
+(id)_aggregateValueForProperty:(id)property function:(id)function predicate:(id)predicate database:(id)database;
+(id)anyInDatabase:(id)database predicate:(id)predicate;
// declared property getter: -(long long)persistentID;
// declared property getter: -(id)database;
-(BOOL)_deleteRowFromTable:(id)table usingColumn:(id)column;
-(id)_copyTableClusteredValuesWithValues:(id)values;
-(id)valueForProperty:(id)property;
-(BOOL)setValuesWithDictionary:(id)dictionary;
-(BOOL)setValue:(id)value forProperty:(id)property;
-(void)getValues:(id*)values forProperties:(const id*)properties count:(unsigned)count;
// declared property getter: -(BOOL)existsInDatabase;
-(BOOL)deleteFromDatabase;
-(id)copyXPCEncodedValuesForClientProperties:(id)clientProperties;
-(id)copyValuesForClientProperties:(id)clientProperties;
-(id)initWithPropertyValues:(id)propertyValues inDatabase:(id)database;
-(id)initWithPersistentID:(long long)persistentID inDatabase:(id)database;
@end

