/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "ML3Entity.h"
#import "MusicLibrary-Structs.h"

@class NSArray, ML3Predicate, NSString;

@interface ML3Container : ML3Entity {
}
@property(readonly, assign) NSArray* displayOrderingTerms;
@property(readonly, assign) NSArray* cloudDisplayOrderingTerms;
@property(readonly, assign) long long limitValue;
@property(readonly, assign) NSArray* limitOrderingTerms;
@property(readonly, assign) NSString* limitingProperty;
@property(readonly, assign, getter=isLimitOrderingDescending) BOOL limitOrderingDescending;
@property(readonly, assign, getter=isLimitedByCount) BOOL limitedByCount;
@property(readonly, assign) ML3Predicate* dynamicPredicate;
@property(readonly, assign) ML3Predicate* staticPredicate;
+(void)populateDynamicContainersWithTrackPersistentID:(id)trackPersistentID inLibrary:(id)library createBuiltinSmartPlaylists:(BOOL)playlists;
+(void)populateDynamicContainersWithTrackPersistentID:(id)trackPersistentID inLibrary:(id)library;
+(void)populateDynamicContainersInLibrary:(id)library createBuiltinSmartPlaylists:(BOOL)playlists;
+(void)populateDynamicContainersInLibrary:(id)library;
+(void)populateStaticItemsOfDynamicContainersInLibrary:(id)library;
+(void)deleteAutoCreatedBuiltInSmartPlaylistsPIDs:(id)smartPlaylistsPIDs inLibrary:(id)library;
+(id)autoCreatedBuiltInSmartPlaylistsPIDs:(id)smartPlaylistsPIDs;
+(BOOL)createMissingBuiltInSmartPlaylists:(id)smartPlaylists;
+(void)_insertNewSmartPlaylist:(id)playlist criteriaBlob:(id)blob evaluationOrder:(unsigned long)order limited:(BOOL)limited trackOrder:(unsigned long)order5 distinguishedKind:(int)kind inLibrary:(id)library cachedNameOrders:(id)orders;
+(id)predicateForCriteriaList:(SearchCriteriaList*)criteriaList dynamicCriteria:(BOOL)criteria;
+(BOOL)hasCriterionInCriteriaList:(SearchCriteriaList*)criteriaList forITDBTrackField:(int)itdbtrackField;
+(void)populateSortOrdersOfPropertyValues:(id)propertyValues inLibrary:(id)library cachedNameOrders:(id)orders;
+(BOOL)smartCriteriaCanBeEvaluated:(id)evaluated;
+(id)nextFilepathForPlaylistType:(int)playlistType withPersistentID:(unsigned long long)persistentID inLibrary:(id)library;
+(id)persistentIDColumnForTable:(id)table;
+(id)extraTablesToDelete;
+(id)foreignColumnForProperty:(id)property;
+(id)foreignDatabaseTableForProperty:(id)property;
+(id)sectionPropertyForProperty:(id)property;
+(id)joinClausesForProperty:(id)property;
+(id)defaultOrderingProperties;
+(int)revisionTrackingCode;
+(id)databaseTable;
+(void)initialize;
-(BOOL)setTracksWithSwappedPersistentIDData:(id)swappedPersistentIDData;
-(BOOL)setTracksWithPersistentIDs:(const long long*)persistentIDs count:(unsigned)count notify:(BOOL)notify;
-(BOOL)setTracksWithPersistentIDs:(const long long*)persistentIDs count:(unsigned)count;
-(BOOL)moveTrackFromIndex:(unsigned)index toIndex:(unsigned)index2;
-(BOOL)addTracksWithPersistentIDs:(long long*)persistentIDs count:(unsigned)count notify:(BOOL)notify;
-(BOOL)addTracksWithPersistentIDs:(long long*)persistentIDs count:(unsigned)count;
-(BOOL)addTrackWithPersistentID:(long long)persistentID;
-(BOOL)removeTracksWithPersistentIDs:(const long long*)persistentIDs atFilteredIndexes:(id)filteredIndexes;
-(BOOL)removeTracksAtIndexes:(id)indexes;
-(BOOL)removeTracksAtIndexes:(id)indexes notify:(BOOL)notify;
-(BOOL)setContainsTrack:(BOOL)track forPersistentID:(long long)persistentID notify:(BOOL)notify;
-(BOOL)removeTracksAtIndexes:(id)indexes notify:(BOOL)notify indexesTransformBlock:(id)block;
-(void)_accessCurrentSwappedPersisentIDsUsingBlock:(id)block;
-(BOOL)removeAllTracks;
-(BOOL)_setSwappedItemPersistentIDs:(const long long*)ids size:(int)size;
-(BOOL)_setSwappedItemPersistentIDs:(const long long*)ids size:(int)size notify:(BOOL)notify;
-(void)bindPopulateStatement:(id)statement withStaticTrackPersistentID:(id)staticTrackPersistentID;
-(id)populateSQLWithStaticTrackPersistentID:(id)staticTrackPersistentID;
// declared property getter: -(id)displayOrderingTerms;
// declared property getter: -(id)cloudDisplayOrderingTerms;
// declared property getter: -(long long)limitValue;
// declared property getter: -(id)limitOrderingTerms;
-(id)evaluationOrderingTerms;
// declared property getter: -(id)limitingProperty;
-(BOOL)isCustomContainerOrderingDescending;
// declared property getter: -(BOOL)isLimitOrderingDescending;
// declared property getter: -(BOOL)isLimitedByCount;
-(BOOL)isEvaluationOrderingDescending;
// declared property getter: -(id)dynamicPredicate;
// declared property getter: -(id)staticPredicate;
-(SearchCriteriaList*)importedCriteriaList;
-(void)didChangeValueForProperties:(const id*)properties count:(unsigned)count;
-(BOOL)setValue:(id)value forProperty:(id)property;
-(id)initWithDictionary:(id)dictionary inLibrary:(id)library cachedNameOrders:(id)orders;
@end

