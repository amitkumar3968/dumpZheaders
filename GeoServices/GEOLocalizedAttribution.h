/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

@interface GEOLocalizedAttribution : PBCodable {
@private
	NSString* _displayName;
	NSString* _language;
	NSMutableArray* _logoURLs;
	NSMutableArray* _snippetLogoURLs;
}
@property(retain, nonatomic) NSMutableArray* snippetLogoURLs;	// @synthesize=_snippetLogoURLs
@property(retain, nonatomic) NSMutableArray* logoURLs;	// @synthesize=_logoURLs
@property(retain, nonatomic) NSString* displayName;	// @synthesize=_displayName
@property(readonly, assign, nonatomic) BOOL hasDisplayName;
@property(retain, nonatomic) NSString* language;	// @synthesize=_language
@property(readonly, assign, nonatomic) BOOL hasLanguage;
// declared property setter: -(void)setSnippetLogoURLs:(id)urls;
// declared property getter: -(id)snippetLogoURLs;
// declared property setter: -(void)setLogoURLs:(id)urls;
// declared property getter: -(id)logoURLs;
// declared property setter: -(void)setDisplayName:(id)name;
// declared property getter: -(id)displayName;
// declared property setter: -(void)setLanguage:(id)language;
// declared property getter: -(id)language;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(void)copyTo:(id)to;
-(void)writeTo:(id)to;
-(BOOL)readFrom:(id)from;
-(id)dictionaryRepresentation;
-(id)description;
-(id)snippetLogoURLsAtIndex:(unsigned)index;
-(unsigned)snippetLogoURLsCount;
-(void)addSnippetLogoURLs:(id)urls;
-(void)clearSnippetLogoURLs;
-(id)logoURLsAtIndex:(unsigned)index;
-(unsigned)logoURLsCount;
-(void)addLogoURLs:(id)urls;
-(void)clearLogoURLs;
// declared property getter: -(BOOL)hasDisplayName;
// declared property getter: -(BOOL)hasLanguage;
-(void)dealloc;
-(id)bestURLForLogos:(id)logos;
@end

