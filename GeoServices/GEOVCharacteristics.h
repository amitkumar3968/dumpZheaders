/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOVCharacteristics : PBCodable {
@private
	NSMutableArray* _pointCharacteristics;
}
@property(retain, nonatomic) NSMutableArray* pointCharacteristics;	// @synthesize=_pointCharacteristics
// declared property setter: -(void)setPointCharacteristics:(id)characteristics;
// declared property getter: -(id)pointCharacteristics;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(void)copyTo:(id)to;
-(void)writeTo:(id)to;
-(BOOL)readFrom:(id)from;
-(id)dictionaryRepresentation;
-(id)description;
-(id)pointCharacteristicAtIndex:(unsigned)index;
-(unsigned)pointCharacteristicsCount;
-(void)addPointCharacteristic:(id)characteristic;
-(void)clearPointCharacteristics;
-(void)dealloc;
@end
