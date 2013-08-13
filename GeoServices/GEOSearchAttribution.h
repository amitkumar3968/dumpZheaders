/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

@interface GEOSearchAttribution : PBCodable {
@private
	NSMutableArray* _attributionURLs;
	NSString* _sourceIdentifier;
	unsigned _sourceVersion;
}
@property(retain, nonatomic) NSMutableArray* attributionURLs;	// @synthesize=_attributionURLs
@property(assign, nonatomic) unsigned sourceVersion;	// @synthesize=_sourceVersion
@property(retain, nonatomic) NSString* sourceIdentifier;	// @synthesize=_sourceIdentifier
// declared property setter: -(void)setAttributionURLs:(id)urls;
// declared property getter: -(id)attributionURLs;
// declared property setter: -(void)setSourceVersion:(unsigned)version;
// declared property getter: -(unsigned)sourceVersion;
// declared property setter: -(void)setSourceIdentifier:(id)identifier;
// declared property getter: -(id)sourceIdentifier;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(void)copyTo:(id)to;
-(void)writeTo:(id)to;
-(BOOL)readFrom:(id)from;
-(id)dictionaryRepresentation;
-(id)description;
-(id)attributionURLsAtIndex:(unsigned)index;
-(unsigned)attributionURLsCount;
-(void)addAttributionURLs:(id)urls;
-(void)clearAttributionURLs;
-(void)dealloc;
@end

