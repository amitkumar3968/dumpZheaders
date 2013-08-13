/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <ProtocolBuffer/PBCodable.h>
#import "GeoServices-Structs.h"

@class GEOStructuredAddress, NSMutableArray;

@interface GEOAddress : PBCodable {
@private
	NSMutableArray* _formattedAddressLines;
	int _formattedAddressType;
	GEOStructuredAddress* _structuredAddress;
	XXStruct_ec15KC _has;
}
@property(assign, nonatomic) int formattedAddressType;	// @synthesize=_formattedAddressType
@property(assign, nonatomic) BOOL hasFormattedAddressType;
@property(retain, nonatomic) GEOStructuredAddress* structuredAddress;	// @synthesize=_structuredAddress
@property(readonly, assign, nonatomic) BOOL hasStructuredAddress;
@property(retain, nonatomic) NSMutableArray* formattedAddressLines;	// @synthesize=_formattedAddressLines
// declared property setter: -(void)setStructuredAddress:(id)address;
// declared property getter: -(id)structuredAddress;
// declared property setter: -(void)setFormattedAddressLines:(id)lines;
// declared property getter: -(id)formattedAddressLines;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(void)copyTo:(id)to;
-(void)writeTo:(id)to;
-(BOOL)readFrom:(id)from;
-(id)dictionaryRepresentation;
-(id)description;
// declared property getter: -(BOOL)hasFormattedAddressType;
// declared property setter: -(void)setHasFormattedAddressType:(BOOL)type;
// declared property setter: -(void)setFormattedAddressType:(int)type;
// declared property getter: -(int)formattedAddressType;
// declared property getter: -(BOOL)hasStructuredAddress;
-(id)formattedAddressLineAtIndex:(unsigned)index;
-(unsigned)formattedAddressLinesCount;
-(void)addFormattedAddressLine:(id)line;
-(void)clearFormattedAddressLines;
-(void)dealloc;
-(id)addressDictionary;
-(id)initWithAddressString:(id)addressString;
@end
