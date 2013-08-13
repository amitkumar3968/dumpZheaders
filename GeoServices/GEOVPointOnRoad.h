/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <ProtocolBuffer/PBCodable.h>
#import "GeoServices-Structs.h"


__attribute__((visibility("hidden")))
@interface GEOVPointOnRoad : PBCodable {
@private
	int _featureIndex;
	int _vertexIndex;
	XXStruct_ec15KC _has;
}
@property(assign, nonatomic) int vertexIndex;	// @synthesize=_vertexIndex
@property(assign, nonatomic) BOOL hasVertexIndex;
@property(assign, nonatomic) int featureIndex;	// @synthesize=_featureIndex
// declared property getter: -(int)vertexIndex;
// declared property setter: -(void)setFeatureIndex:(int)index;
// declared property getter: -(int)featureIndex;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(void)copyTo:(id)to;
-(void)writeTo:(id)to;
-(BOOL)readFrom:(id)from;
-(id)dictionaryRepresentation;
-(id)description;
// declared property getter: -(BOOL)hasVertexIndex;
// declared property setter: -(void)setHasVertexIndex:(BOOL)index;
// declared property setter: -(void)setVertexIndex:(int)index;
-(void)dealloc;
@end
