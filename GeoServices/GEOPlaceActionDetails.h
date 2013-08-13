/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <ProtocolBuffer/PBCodable.h>


@interface GEOPlaceActionDetails : PBCodable {
@private
	unsigned long long _businessID;
	long long _placeID;
	double _searchResponseRelativeTimestamp;
	int _localSearchProviderID;
	int _resultIndex;
	int _sequenceNumber;
	struct {
		unsigned uID : 1;
		unsigned totalNumberOfPhotos : 1;
		unsigned version : 1;
		unsigned canBeCorrectedByBusinessOwner : 1;
		unsigned isClosed : 1;
		unsigned isUnverified : 1;
	} _has;
}
@property(assign, nonatomic) int resultIndex;	// @synthesize=_resultIndex
@property(assign, nonatomic) BOOL hasResultIndex;
@property(assign, nonatomic) double searchResponseRelativeTimestamp;	// @synthesize=_searchResponseRelativeTimestamp
@property(assign, nonatomic) BOOL hasSearchResponseRelativeTimestamp;
@property(assign, nonatomic) int sequenceNumber;	// @synthesize=_sequenceNumber
@property(assign, nonatomic) BOOL hasSequenceNumber;
@property(assign, nonatomic) int localSearchProviderID;	// @synthesize=_localSearchProviderID
@property(assign, nonatomic) BOOL hasLocalSearchProviderID;
@property(assign, nonatomic) long long placeID;	// @synthesize=_placeID
@property(assign, nonatomic) BOOL hasPlaceID;
@property(assign, nonatomic) unsigned long long businessID;	// @synthesize=_businessID
@property(assign, nonatomic) BOOL hasBusinessID;
// declared property getter: -(int)resultIndex;
// declared property getter: -(double)searchResponseRelativeTimestamp;
// declared property getter: -(int)sequenceNumber;
// declared property getter: -(int)localSearchProviderID;
// declared property getter: -(long long)placeID;
// declared property getter: -(unsigned long long)businessID;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(void)copyTo:(id)to;
-(void)writeTo:(id)to;
-(BOOL)readFrom:(id)from;
-(id)dictionaryRepresentation;
-(id)description;
// declared property getter: -(BOOL)hasResultIndex;
// declared property setter: -(void)setHasResultIndex:(BOOL)index;
// declared property setter: -(void)setResultIndex:(int)index;
// declared property getter: -(BOOL)hasSearchResponseRelativeTimestamp;
// declared property setter: -(void)setHasSearchResponseRelativeTimestamp:(BOOL)timestamp;
// declared property setter: -(void)setSearchResponseRelativeTimestamp:(double)timestamp;
// declared property getter: -(BOOL)hasSequenceNumber;
// declared property setter: -(void)setHasSequenceNumber:(BOOL)number;
// declared property setter: -(void)setSequenceNumber:(int)number;
// declared property getter: -(BOOL)hasLocalSearchProviderID;
// declared property setter: -(void)setHasLocalSearchProviderID:(BOOL)anId;
// declared property setter: -(void)setLocalSearchProviderID:(int)anId;
// declared property getter: -(BOOL)hasPlaceID;
// declared property setter: -(void)setHasPlaceID:(BOOL)anId;
// declared property setter: -(void)setPlaceID:(long long)anId;
// declared property getter: -(BOOL)hasBusinessID;
// declared property setter: -(void)setHasBusinessID:(BOOL)anId;
// declared property setter: -(void)setBusinessID:(unsigned long long)anId;
-(void)dealloc;
@end

