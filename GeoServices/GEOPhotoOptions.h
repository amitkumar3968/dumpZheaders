/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <ProtocolBuffer/PBCodable.h>
#import "GeoServices-Structs.h"


@interface GEOPhotoOptions : PBCodable {
@private
	XXStruct_WmZAAA _photoSizes;
	int _maxPhotos;
	int _photoType;
	XXStruct_ec15KC _has;
}
@property(readonly, assign, nonatomic) int* photoSizes;
@property(readonly, assign, nonatomic) unsigned photoSizesCount;
@property(assign, nonatomic) int photoType;	// @synthesize=_photoType
@property(assign, nonatomic) BOOL hasPhotoType;
@property(assign, nonatomic) int maxPhotos;	// @synthesize=_maxPhotos
// declared property getter: -(int)photoType;
// declared property setter: -(void)setMaxPhotos:(int)photos;
// declared property getter: -(int)maxPhotos;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(void)copyTo:(id)to;
-(void)writeTo:(id)to;
-(BOOL)readFrom:(id)from;
-(id)dictionaryRepresentation;
-(id)description;
-(void)setPhotoSizes:(int*)sizes count:(unsigned)count;
-(int)photoSizeAtIndex:(unsigned)index;
-(void)addPhotoSize:(int)size;
-(void)clearPhotoSizes;
// declared property getter: -(int*)photoSizes;
// declared property getter: -(unsigned)photoSizesCount;
// declared property getter: -(BOOL)hasPhotoType;
// declared property setter: -(void)setHasPhotoType:(BOOL)type;
// declared property setter: -(void)setPhotoType:(int)type;
-(void)dealloc;
@end

