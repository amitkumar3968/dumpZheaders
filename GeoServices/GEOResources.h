/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface GEOResources : PBCodable {
@private
	NSMutableArray* _attributionBadges;
	NSMutableArray* _attributions;
	NSString* _authToken;
	NSMutableArray* _fonts;
	NSMutableArray* _icons;
	NSMutableArray* _regionalResources;
	NSString* _resourcesURL;
	NSMutableArray* _styleSheets;
	NSMutableArray* _textures;
	NSMutableArray* _tileGroups;
	NSMutableArray* _tileSets;
	NSMutableArray* _xmls;
}
@property(retain, nonatomic) NSString* resourcesURL;	// @synthesize=_resourcesURL
@property(readonly, assign, nonatomic) BOOL hasResourcesURL;
@property(retain, nonatomic) NSString* authToken;	// @synthesize=_authToken
@property(readonly, assign, nonatomic) BOOL hasAuthToken;
@property(retain, nonatomic) NSMutableArray* attributions;	// @synthesize=_attributions
@property(retain, nonatomic) NSMutableArray* attributionBadges;	// @synthesize=_attributionBadges
@property(retain, nonatomic) NSMutableArray* xmls;	// @synthesize=_xmls
@property(retain, nonatomic) NSMutableArray* regionalResources;	// @synthesize=_regionalResources
@property(retain, nonatomic) NSMutableArray* icons;	// @synthesize=_icons
@property(retain, nonatomic) NSMutableArray* fonts;	// @synthesize=_fonts
@property(retain, nonatomic) NSMutableArray* textures;	// @synthesize=_textures
@property(retain, nonatomic) NSMutableArray* styleSheets;	// @synthesize=_styleSheets
@property(retain, nonatomic) NSMutableArray* tileSets;	// @synthesize=_tileSets
@property(retain, nonatomic) NSMutableArray* tileGroups;	// @synthesize=_tileGroups
// declared property setter: -(void)setResourcesURL:(id)url;
// declared property getter: -(id)resourcesURL;
// declared property setter: -(void)setAuthToken:(id)token;
// declared property getter: -(id)authToken;
// declared property setter: -(void)setAttributions:(id)attributions;
// declared property getter: -(id)attributions;
// declared property setter: -(void)setAttributionBadges:(id)badges;
// declared property getter: -(id)attributionBadges;
// declared property setter: -(void)setXmls:(id)xmls;
// declared property getter: -(id)xmls;
// declared property setter: -(void)setRegionalResources:(id)resources;
// declared property getter: -(id)regionalResources;
// declared property setter: -(void)setIcons:(id)icons;
// declared property getter: -(id)icons;
// declared property setter: -(void)setFonts:(id)fonts;
// declared property getter: -(id)fonts;
// declared property setter: -(void)setTextures:(id)textures;
// declared property getter: -(id)textures;
// declared property setter: -(void)setStyleSheets:(id)sheets;
// declared property getter: -(id)styleSheets;
// declared property setter: -(void)setTileSets:(id)sets;
// declared property getter: -(id)tileSets;
// declared property setter: -(void)setTileGroups:(id)groups;
// declared property getter: -(id)tileGroups;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(void)copyTo:(id)to;
-(void)writeTo:(id)to;
-(BOOL)readFrom:(id)from;
-(id)dictionaryRepresentation;
-(id)description;
// declared property getter: -(BOOL)hasResourcesURL;
// declared property getter: -(BOOL)hasAuthToken;
-(id)attributionAtIndex:(unsigned)index;
-(unsigned)attributionsCount;
-(void)addAttribution:(id)attribution;
-(void)clearAttributions;
-(id)attributionBadgeAtIndex:(unsigned)index;
-(unsigned)attributionBadgesCount;
-(void)addAttributionBadge:(id)badge;
-(void)clearAttributionBadges;
-(id)xmlAtIndex:(unsigned)index;
-(unsigned)xmlsCount;
-(void)addXml:(id)xml;
-(void)clearXmls;
-(id)regionalResourceAtIndex:(unsigned)index;
-(unsigned)regionalResourcesCount;
-(void)addRegionalResource:(id)resource;
-(void)clearRegionalResources;
-(id)iconAtIndex:(unsigned)index;
-(unsigned)iconsCount;
-(void)addIcon:(id)icon;
-(void)clearIcons;
-(id)fontAtIndex:(unsigned)index;
-(unsigned)fontsCount;
-(void)addFont:(id)font;
-(void)clearFonts;
-(id)textureAtIndex:(unsigned)index;
-(unsigned)texturesCount;
-(void)addTexture:(id)texture;
-(void)clearTextures;
-(id)styleSheetAtIndex:(unsigned)index;
-(unsigned)styleSheetsCount;
-(void)addStyleSheet:(id)sheet;
-(void)clearStyleSheets;
-(id)tileSetAtIndex:(unsigned)index;
-(unsigned)tileSetsCount;
-(void)addTileSet:(id)set;
-(void)clearTileSets;
-(id)tileGroupAtIndex:(unsigned)index;
-(unsigned)tileGroupsCount;
-(void)addTileGroup:(id)group;
-(void)clearTileGroups;
-(void)dealloc;
@end

