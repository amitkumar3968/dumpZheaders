/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

@interface GEOIndexQueryNode : PBCodable {
@private
	NSString* _field;
	NSMutableArray* _operands;
	int _type;
	NSString* _value;
}
@property(retain, nonatomic) NSMutableArray* operands;	// @synthesize=_operands
@property(retain, nonatomic) NSString* value;	// @synthesize=_value
@property(readonly, assign, nonatomic) BOOL hasValue;
@property(retain, nonatomic) NSString* field;	// @synthesize=_field
@property(readonly, assign, nonatomic) BOOL hasField;
@property(assign, nonatomic) int type;	// @synthesize=_type
// declared property setter: -(void)setOperands:(id)operands;
// declared property getter: -(id)operands;
// declared property setter: -(void)setValue:(id)value;
// declared property getter: -(id)value;
// declared property setter: -(void)setField:(id)field;
// declared property getter: -(id)field;
// declared property setter: -(void)setType:(int)type;
// declared property getter: -(int)type;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(void)copyTo:(id)to;
-(void)writeTo:(id)to;
-(BOOL)readFrom:(id)from;
-(id)dictionaryRepresentation;
-(id)description;
-(id)operandsAtIndex:(unsigned)index;
-(unsigned)operandsCount;
-(void)addOperands:(id)operands;
-(void)clearOperands;
// declared property getter: -(BOOL)hasValue;
// declared property getter: -(BOOL)hasField;
-(void)dealloc;
@end

