/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface GEOAttributeKeyValue : PBCodable {
@private
	NSString* _attributeKey;
	NSString* _attributeValue;
}
@property(retain, nonatomic) NSString* attributeValue;	// @synthesize=_attributeValue
@property(retain, nonatomic) NSString* attributeKey;	// @synthesize=_attributeKey
// declared property setter: -(void)setAttributeValue:(id)value;
// declared property getter: -(id)attributeValue;
// declared property setter: -(void)setAttributeKey:(id)key;
// declared property getter: -(id)attributeKey;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(void)copyTo:(id)to;
-(void)writeTo:(id)to;
-(BOOL)readFrom:(id)from;
-(id)dictionaryRepresentation;
-(id)description;
-(void)dealloc;
@end
