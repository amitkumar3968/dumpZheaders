/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <ProtocolBuffer/PBCodable.h>
#import "GeoServices-Structs.h"

@class NSMutableArray;

@interface GEOHours : PBCodable {
@private
	XXStruct_WmZAAA _days;
	NSMutableArray* _timeRanges;
}
@property(retain, nonatomic) NSMutableArray* timeRanges;	// @synthesize=_timeRanges
@property(readonly, assign, nonatomic) int* days;
@property(readonly, assign, nonatomic) unsigned daysCount;
// declared property setter: -(void)setTimeRanges:(id)ranges;
// declared property getter: -(id)timeRanges;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(void)copyTo:(id)to;
-(void)writeTo:(id)to;
-(BOOL)readFrom:(id)from;
-(id)dictionaryRepresentation;
-(id)description;
-(id)timeRangeAtIndex:(unsigned)index;
-(unsigned)timeRangesCount;
-(void)addTimeRange:(id)range;
-(void)clearTimeRanges;
-(void)setDays:(int*)days count:(unsigned)count;
-(int)dayAtIndex:(unsigned)index;
-(void)addDay:(int)day;
-(void)clearDays;
// declared property getter: -(int*)days;
// declared property getter: -(unsigned)daysCount;
-(void)dealloc;
@end

