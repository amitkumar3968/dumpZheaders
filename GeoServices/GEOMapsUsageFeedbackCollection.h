/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <ProtocolBuffer/PBCodable.h>
#import "GeoServices-Structs.h"

@class GEOPlaceActionDetails;

@interface GEOMapsUsageFeedbackCollection : PBCodable {
@private
	XXStruct_t9EeIA _sessionID;
	double _sessionRelativeTimestamp;
	int _actionType;
	GEOPlaceActionDetails* _placeActionDetails;
}
@property(retain, nonatomic) GEOPlaceActionDetails* placeActionDetails;	// @synthesize=_placeActionDetails
@property(readonly, assign, nonatomic) BOOL hasPlaceActionDetails;
@property(assign, nonatomic) double sessionRelativeTimestamp;	// @synthesize=_sessionRelativeTimestamp
@property(assign, nonatomic) int actionType;	// @synthesize=_actionType
@property(assign, nonatomic) XXStruct_t9EeIA sessionID;	// @synthesize=_sessionID
// declared property setter: -(void)setPlaceActionDetails:(id)details;
// declared property getter: -(id)placeActionDetails;
// declared property setter: -(void)setSessionRelativeTimestamp:(double)timestamp;
// declared property getter: -(double)sessionRelativeTimestamp;
// declared property setter: -(void)setActionType:(int)type;
// declared property getter: -(int)actionType;
// declared property setter: -(void)setSessionID:(XXStruct_t9EeIA)anId;
// declared property getter: -(XXStruct_t9EeIA)sessionID;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(void)copyTo:(id)to;
-(void)writeTo:(id)to;
-(BOOL)readFrom:(id)from;
-(id)dictionaryRepresentation;
-(id)description;
// declared property getter: -(BOOL)hasPlaceActionDetails;
-(void)dealloc;
@end

