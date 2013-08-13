/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, NSString;

@interface GEOSearchAttributionInfo : XXUnknownSuperclass {
@private
	NSString* _identifier;
	unsigned _version;
	NSString* _logoPath;
	NSString* _snippetLogoPath;
	NSString* _displayName;
	NSArray* _attributionApps;
	unsigned _attributionRequirementsMask;
}
@property(retain, nonatomic) NSArray* attributionApps;	// @synthesize=_attributionApps
@property(retain, nonatomic) NSString* displayName;	// @synthesize=_displayName
@property(retain, nonatomic) NSString* snippetLogoPath;	// @synthesize=_snippetLogoPath
@property(retain, nonatomic) NSString* logoPath;	// @synthesize=_logoPath
@property(assign, nonatomic) unsigned requirementsMask;	// @synthesize=_attributionRequirementsMask
@property(assign, nonatomic) unsigned version;	// @synthesize=_version
@property(retain, nonatomic) NSString* identifier;	// @synthesize=_identifier
// declared property setter: -(void)setRequirementsMask:(unsigned)mask;
// declared property getter: -(unsigned)requirementsMask;
// declared property setter: -(void)setAttributionApps:(id)apps;
// declared property getter: -(id)attributionApps;
// declared property setter: -(void)setDisplayName:(id)name;
// declared property getter: -(id)displayName;
// declared property setter: -(void)setSnippetLogoPath:(id)path;
// declared property getter: -(id)snippetLogoPath;
// declared property setter: -(void)setLogoPath:(id)path;
// declared property getter: -(id)logoPath;
// declared property setter: -(void)setVersion:(unsigned)version;
// declared property getter: -(unsigned)version;
// declared property setter: -(void)setIdentifier:(id)identifier;
// declared property getter: -(id)identifier;
-(void)dealloc;
-(BOOL)hasAttributionRequirement:(int)requirement;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)dictionaryRepresentation;
-(id)initWithSource:(id)source localizedAttribution:(id)attribution logoPath:(id)path snippetLogoPath:(id)path4;
@end

