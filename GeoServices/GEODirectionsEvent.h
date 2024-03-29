/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString, GEOLatLng;

@interface GEODirectionsEvent : PBCodable {
@private
	long long _errorCode;
	NSString* _errorDomain;
	GEOLatLng* _occurrenceLatLng;
	unsigned _occurrenceResponseIndex;
	NSData* _occurrenceRouteID;
	unsigned _occurrenceStepIndex;
	unsigned _switchedToResponseIndex;
	NSData* _switchedToRouteID;
	NSString* _synthesizedStepInstructions;
	int _synthesizedStepManeuverType;
	int _type;
	struct {
		unsigned uID : 1;
		unsigned totalNumberOfPhotos : 1;
		unsigned version : 1;
		unsigned canBeCorrectedByBusinessOwner : 1;
		unsigned isClosed : 1;
		unsigned isUnverified : 1;
	} _has;
}
@property(assign, nonatomic) long long errorCode;	// @synthesize=_errorCode
@property(assign, nonatomic) BOOL hasErrorCode;
@property(retain, nonatomic) NSString* errorDomain;	// @synthesize=_errorDomain
@property(readonly, assign, nonatomic) BOOL hasErrorDomain;
@property(retain, nonatomic) NSString* synthesizedStepInstructions;	// @synthesize=_synthesizedStepInstructions
@property(readonly, assign, nonatomic) BOOL hasSynthesizedStepInstructions;
@property(assign, nonatomic) int synthesizedStepManeuverType;	// @synthesize=_synthesizedStepManeuverType
@property(assign, nonatomic) BOOL hasSynthesizedStepManeuverType;
@property(retain, nonatomic) NSData* switchedToRouteID;	// @synthesize=_switchedToRouteID
@property(readonly, assign, nonatomic) BOOL hasSwitchedToRouteID;
@property(assign, nonatomic) unsigned switchedToResponseIndex;	// @synthesize=_switchedToResponseIndex
@property(assign, nonatomic) BOOL hasSwitchedToResponseIndex;
@property(retain, nonatomic) GEOLatLng* occurrenceLatLng;	// @synthesize=_occurrenceLatLng
@property(readonly, assign, nonatomic) BOOL hasOccurrenceLatLng;
@property(assign, nonatomic) unsigned occurrenceStepIndex;	// @synthesize=_occurrenceStepIndex
@property(assign, nonatomic) BOOL hasOccurrenceStepIndex;
@property(retain, nonatomic) NSData* occurrenceRouteID;	// @synthesize=_occurrenceRouteID
@property(readonly, assign, nonatomic) BOOL hasOccurrenceRouteID;
@property(assign, nonatomic) unsigned occurrenceResponseIndex;	// @synthesize=_occurrenceResponseIndex
@property(assign, nonatomic) BOOL hasOccurrenceResponseIndex;
@property(assign, nonatomic) int type;	// @synthesize=_type
@property(assign, nonatomic) BOOL hasType;
// declared property getter: -(long long)errorCode;
// declared property setter: -(void)setErrorDomain:(id)domain;
// declared property getter: -(id)errorDomain;
// declared property setter: -(void)setSynthesizedStepInstructions:(id)instructions;
// declared property getter: -(id)synthesizedStepInstructions;
// declared property getter: -(int)synthesizedStepManeuverType;
// declared property setter: -(void)setSwitchedToRouteID:(id)routeID;
// declared property getter: -(id)switchedToRouteID;
// declared property getter: -(unsigned)switchedToResponseIndex;
// declared property setter: -(void)setOccurrenceLatLng:(id)lng;
// declared property getter: -(id)occurrenceLatLng;
// declared property getter: -(unsigned)occurrenceStepIndex;
// declared property setter: -(void)setOccurrenceRouteID:(id)anId;
// declared property getter: -(id)occurrenceRouteID;
// declared property getter: -(unsigned)occurrenceResponseIndex;
// declared property getter: -(int)type;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(void)copyTo:(id)to;
-(void)writeTo:(id)to;
-(BOOL)readFrom:(id)from;
-(id)dictionaryRepresentation;
-(id)description;
// declared property getter: -(BOOL)hasErrorCode;
// declared property setter: -(void)setHasErrorCode:(BOOL)code;
// declared property setter: -(void)setErrorCode:(long long)code;
// declared property getter: -(BOOL)hasErrorDomain;
// declared property getter: -(BOOL)hasSynthesizedStepInstructions;
// declared property getter: -(BOOL)hasSynthesizedStepManeuverType;
// declared property setter: -(void)setHasSynthesizedStepManeuverType:(BOOL)type;
// declared property setter: -(void)setSynthesizedStepManeuverType:(int)type;
// declared property getter: -(BOOL)hasSwitchedToRouteID;
// declared property getter: -(BOOL)hasSwitchedToResponseIndex;
// declared property setter: -(void)setHasSwitchedToResponseIndex:(BOOL)responseIndex;
// declared property setter: -(void)setSwitchedToResponseIndex:(unsigned)responseIndex;
// declared property getter: -(BOOL)hasOccurrenceLatLng;
// declared property getter: -(BOOL)hasOccurrenceStepIndex;
// declared property setter: -(void)setHasOccurrenceStepIndex:(BOOL)index;
// declared property setter: -(void)setOccurrenceStepIndex:(unsigned)index;
// declared property getter: -(BOOL)hasOccurrenceRouteID;
// declared property getter: -(BOOL)hasOccurrenceResponseIndex;
// declared property setter: -(void)setHasOccurrenceResponseIndex:(BOOL)index;
// declared property setter: -(void)setOccurrenceResponseIndex:(unsigned)index;
// declared property getter: -(BOOL)hasType;
// declared property setter: -(void)setHasType:(BOOL)type;
// declared property setter: -(void)setType:(int)type;
-(void)dealloc;
@end

