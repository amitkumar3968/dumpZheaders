/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, VKPStyleProperties;

__attribute__((visibility("hidden")))
@interface VKPStyleContents : XXUnknownSuperclass {
@private
	VKPStyleProperties* _properties;
	NSMutableArray* _zooms;
}
@property(retain, nonatomic) NSMutableArray* zooms;	// @synthesize=_zooms
@property(retain, nonatomic) VKPStyleProperties* properties;	// @synthesize=_properties
@property(readonly, assign, nonatomic) BOOL hasProperties;
// declared property setter: -(void)setZooms:(id)zooms;
// declared property getter: -(id)zooms;
// declared property setter: -(void)setProperties:(id)properties;
// declared property getter: -(id)properties;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(void)copyTo:(id)to;
-(void)writeTo:(id)to;
-(BOOL)readFrom:(id)from;
-(id)dictionaryRepresentation;
-(id)description;
-(id)zoomsAtIndex:(unsigned)index;
-(unsigned)zoomsCount;
-(void)addZooms:(id)zooms;
-(void)clearZooms;
// declared property getter: -(BOOL)hasProperties;
-(void)dealloc;
@end

