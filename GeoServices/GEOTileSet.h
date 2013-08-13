/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <ProtocolBuffer/PBCodable.h>
#import "GeoServices-Structs.h"

@class NSMutableArray, NSString;

@interface GEOTileSet : PBCodable {
@private
	NSString* _baseURL;
	NSString* _localizationURL;
	NSString* _multiTileURL;
	int _scale;
	int _size;
	int _style;
	NSMutableArray* _supportedLanguages;
	NSMutableArray* _validVersions;
	BOOL _multiTileURLUsesStatusCodes;
	XXStruct_ec15KC _has;
}
@property(assign, nonatomic) BOOL multiTileURLUsesStatusCodes;	// @synthesize=_multiTileURLUsesStatusCodes
@property(assign, nonatomic) BOOL hasMultiTileURLUsesStatusCodes;
@property(retain, nonatomic) NSMutableArray* supportedLanguages;	// @synthesize=_supportedLanguages
@property(retain, nonatomic) NSString* localizationURL;	// @synthesize=_localizationURL
@property(readonly, assign, nonatomic) BOOL hasLocalizationURL;
@property(assign, nonatomic) int size;	// @synthesize=_size
@property(assign, nonatomic) int scale;	// @synthesize=_scale
@property(retain, nonatomic) NSMutableArray* validVersions;	// @synthesize=_validVersions
@property(assign, nonatomic) int style;	// @synthesize=_style
@property(retain, nonatomic) NSString* multiTileURL;	// @synthesize=_multiTileURL
@property(readonly, assign, nonatomic) BOOL hasMultiTileURL;
@property(retain, nonatomic) NSString* baseURL;	// @synthesize=_baseURL
@property(readonly, assign, nonatomic) BOOL hasBaseURL;
// declared property getter: -(BOOL)multiTileURLUsesStatusCodes;
// declared property setter: -(void)setSupportedLanguages:(id)languages;
// declared property getter: -(id)supportedLanguages;
// declared property setter: -(void)setLocalizationURL:(id)url;
// declared property getter: -(id)localizationURL;
// declared property setter: -(void)setSize:(int)size;
// declared property getter: -(int)size;
// declared property setter: -(void)setScale:(int)scale;
// declared property getter: -(int)scale;
// declared property setter: -(void)setValidVersions:(id)versions;
// declared property getter: -(id)validVersions;
// declared property setter: -(void)setStyle:(int)style;
// declared property getter: -(int)style;
// declared property setter: -(void)setMultiTileURL:(id)url;
// declared property getter: -(id)multiTileURL;
// declared property setter: -(void)setBaseURL:(id)url;
// declared property getter: -(id)baseURL;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(void)copyTo:(id)to;
-(void)writeTo:(id)to;
-(BOOL)readFrom:(id)from;
-(id)dictionaryRepresentation;
-(id)description;
// declared property getter: -(BOOL)hasMultiTileURLUsesStatusCodes;
// declared property setter: -(void)setHasMultiTileURLUsesStatusCodes:(BOOL)codes;
// declared property setter: -(void)setMultiTileURLUsesStatusCodes:(BOOL)codes;
-(id)supportedLanguageAtIndex:(unsigned)index;
-(unsigned)supportedLanguagesCount;
-(void)addSupportedLanguage:(id)language;
-(void)clearSupportedLanguages;
// declared property getter: -(BOOL)hasLocalizationURL;
-(id)validVersionAtIndex:(unsigned)index;
-(unsigned)validVersionsCount;
-(void)addValidVersion:(id)version;
-(void)clearValidVersions;
// declared property getter: -(BOOL)hasMultiTileURL;
// declared property getter: -(BOOL)hasBaseURL;
-(void)dealloc;
@end

