/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray;

@interface GEOUsageCollectionRequest : XXUnknownSuperclass {
@private
	NSMutableArray* _directionsFeedbackCollections;
	NSMutableArray* _mapsUsageFeedbackCollections;
	NSMutableArray* _placeSearchFeedbackCollections;
	NSMutableArray* _transitAppLaunchFeedbackCollections;
	NSMutableArray* _usageCollections;
}
@property(retain, nonatomic) NSMutableArray* mapsUsageFeedbackCollections;	// @synthesize=_mapsUsageFeedbackCollections
@property(retain, nonatomic) NSMutableArray* transitAppLaunchFeedbackCollections;	// @synthesize=_transitAppLaunchFeedbackCollections
@property(retain, nonatomic) NSMutableArray* placeSearchFeedbackCollections;	// @synthesize=_placeSearchFeedbackCollections
@property(retain, nonatomic) NSMutableArray* directionsFeedbackCollections;	// @synthesize=_directionsFeedbackCollections
@property(retain, nonatomic) NSMutableArray* usageCollections;	// @synthesize=_usageCollections
// declared property setter: -(void)setMapsUsageFeedbackCollections:(id)collections;
// declared property getter: -(id)mapsUsageFeedbackCollections;
// declared property setter: -(void)setTransitAppLaunchFeedbackCollections:(id)collections;
// declared property getter: -(id)transitAppLaunchFeedbackCollections;
// declared property setter: -(void)setPlaceSearchFeedbackCollections:(id)collections;
// declared property getter: -(id)placeSearchFeedbackCollections;
// declared property setter: -(void)setDirectionsFeedbackCollections:(id)collections;
// declared property getter: -(id)directionsFeedbackCollections;
// declared property setter: -(void)setUsageCollections:(id)collections;
// declared property getter: -(id)usageCollections;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(void)copyTo:(id)to;
-(Class)responseClass;
-(unsigned)requestTypeCode;
-(void)writeTo:(id)to;
-(BOOL)readFrom:(id)from;
-(id)dictionaryRepresentation;
-(id)description;
-(id)mapsUsageFeedbackCollectionAtIndex:(unsigned)index;
-(unsigned)mapsUsageFeedbackCollectionsCount;
-(void)addMapsUsageFeedbackCollection:(id)collection;
-(void)clearMapsUsageFeedbackCollections;
-(id)transitAppLaunchFeedbackCollectionAtIndex:(unsigned)index;
-(unsigned)transitAppLaunchFeedbackCollectionsCount;
-(void)addTransitAppLaunchFeedbackCollection:(id)collection;
-(void)clearTransitAppLaunchFeedbackCollections;
-(id)placeSearchFeedbackCollectionAtIndex:(unsigned)index;
-(unsigned)placeSearchFeedbackCollectionsCount;
-(void)addPlaceSearchFeedbackCollection:(id)collection;
-(void)clearPlaceSearchFeedbackCollections;
-(id)directionsFeedbackCollectionAtIndex:(unsigned)index;
-(unsigned)directionsFeedbackCollectionsCount;
-(void)addDirectionsFeedbackCollection:(id)collection;
-(void)clearDirectionsFeedbackCollections;
-(id)usageCollectionAtIndex:(unsigned)index;
-(unsigned)usageCollectionsCount;
-(void)addUsageCollection:(id)collection;
-(void)clearUsageCollections;
-(void)dealloc;
@end
