/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <ProtocolBuffer/PBCodable.h>
#import "GeoServices-Structs.h"

@class NSString;

@interface GEOUsageCollection : PBCodable {
@private
	XXStruct_t9EeIA _probeID;
	XXStruct_t9EeIA _sessionID;
	XXStruct_2ta5gB* _tileUsages;
	unsigned _tileUsagesCount;
	unsigned _tileUsagesSpace;
	double _timestamp;
	int _cellWifi;
	NSString* _countryCode;
	int _geoService;
	NSString* _hwMachine;
	int _requestDataSize;
	int _responseDataSize;
	int _responseTime;
	struct {
		unsigned course : 1;
		unsigned heading : 1;
		unsigned horizontalAccuracy : 1;
		unsigned speed : 1;
		unsigned timestamp : 1;
		unsigned verticalAccuracy : 1;
		unsigned altitude : 1;
		unsigned type : 1;
	} _has;
}
@property(retain, nonatomic) NSString* hwMachine;	// @synthesize=_hwMachine
@property(readonly, assign, nonatomic) BOOL hasHwMachine;
@property(readonly, assign, nonatomic) XXStruct_2ta5gB* tileUsages;
@property(readonly, assign, nonatomic) unsigned tileUsagesCount;
@property(assign, nonatomic) double timestamp;	// @synthesize=_timestamp
@property(assign, nonatomic) BOOL hasTimestamp;
@property(assign, nonatomic) XXStruct_t9EeIA probeID;	// @synthesize=_probeID
@property(assign, nonatomic) BOOL hasProbeID;
@property(assign, nonatomic) XXStruct_t9EeIA sessionID;	// @synthesize=_sessionID
@property(assign, nonatomic) BOOL hasSessionID;
@property(retain, nonatomic) NSString* countryCode;	// @synthesize=_countryCode
@property(readonly, assign, nonatomic) BOOL hasCountryCode;
@property(assign, nonatomic) int cellWifi;	// @synthesize=_cellWifi
@property(assign, nonatomic) BOOL hasCellWifi;
@property(assign, nonatomic) int responseTime;	// @synthesize=_responseTime
@property(assign, nonatomic) BOOL hasResponseTime;
@property(assign, nonatomic) int responseDataSize;	// @synthesize=_responseDataSize
@property(assign, nonatomic) BOOL hasResponseDataSize;
@property(assign, nonatomic) int requestDataSize;	// @synthesize=_requestDataSize
@property(assign, nonatomic) BOOL hasRequestDataSize;
@property(assign, nonatomic) int geoService;	// @synthesize=_geoService
@property(assign, nonatomic) BOOL hasGeoService;
// declared property setter: -(void)setHwMachine:(id)machine;
// declared property getter: -(id)hwMachine;
// declared property getter: -(double)timestamp;
// declared property getter: -(XXStruct_t9EeIA)probeID;
// declared property getter: -(XXStruct_t9EeIA)sessionID;
// declared property setter: -(void)setCountryCode:(id)code;
// declared property getter: -(id)countryCode;
// declared property getter: -(int)cellWifi;
// declared property getter: -(int)responseTime;
// declared property getter: -(int)responseDataSize;
// declared property getter: -(int)requestDataSize;
// declared property getter: -(int)geoService;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(void)copyTo:(id)to;
-(void)writeTo:(id)to;
-(BOOL)readFrom:(id)from;
-(id)dictionaryRepresentation;
-(id)description;
// declared property getter: -(BOOL)hasHwMachine;
-(void)setTileUsages:(XXStruct_2ta5gB*)usages count:(unsigned)count;
-(XXStruct_2ta5gB)tileUsageAtIndex:(unsigned)index;
-(void)addTileUsage:(XXStruct_2ta5gB)usage;
-(void)clearTileUsages;
// declared property getter: -(XXStruct_2ta5gB*)tileUsages;
// declared property getter: -(unsigned)tileUsagesCount;
// declared property getter: -(BOOL)hasTimestamp;
// declared property setter: -(void)setHasTimestamp:(BOOL)timestamp;
// declared property setter: -(void)setTimestamp:(double)timestamp;
// declared property getter: -(BOOL)hasProbeID;
// declared property setter: -(void)setHasProbeID:(BOOL)anId;
// declared property setter: -(void)setProbeID:(XXStruct_t9EeIA)anId;
// declared property getter: -(BOOL)hasSessionID;
// declared property setter: -(void)setHasSessionID:(BOOL)anId;
// declared property setter: -(void)setSessionID:(XXStruct_t9EeIA)anId;
// declared property getter: -(BOOL)hasCountryCode;
// declared property getter: -(BOOL)hasCellWifi;
// declared property setter: -(void)setHasCellWifi:(BOOL)wifi;
// declared property setter: -(void)setCellWifi:(int)wifi;
// declared property getter: -(BOOL)hasResponseTime;
// declared property setter: -(void)setHasResponseTime:(BOOL)time;
// declared property setter: -(void)setResponseTime:(int)time;
// declared property getter: -(BOOL)hasResponseDataSize;
// declared property setter: -(void)setHasResponseDataSize:(BOOL)size;
// declared property setter: -(void)setResponseDataSize:(int)size;
// declared property getter: -(BOOL)hasRequestDataSize;
// declared property setter: -(void)setHasRequestDataSize:(BOOL)size;
// declared property setter: -(void)setRequestDataSize:(int)size;
// declared property getter: -(BOOL)hasGeoService;
// declared property setter: -(void)setHasGeoService:(BOOL)service;
// declared property setter: -(void)setGeoService:(int)service;
-(void)dealloc;
@end

