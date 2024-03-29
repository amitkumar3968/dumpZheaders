/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class VKPShieldIndex, VKShieldAtlas, NSMapTable, NSCache;

__attribute__((visibility("hidden")))
@interface VKShieldManager : XXUnknownSuperclass {
@private
	NSMapTable* _regionalAtlases;
	NSMapTable* _regionalIndexes;
	VKPShieldIndex* _defaultIndex;
	BOOL _hasLoadedDefaultIndex;
	VKShieldAtlas* _defaultAtlas;
	BOOL _hasLoadedDefaultAtlas;
	VKPShieldIndex* _defaultIndexMedium;
	BOOL _hasLoadedDefaultIndexMedium;
	VKShieldAtlas* _defaultAtlasMedium;
	BOOL _hasLoadedDefaultAtlasMedium;
	VKPShieldIndex* _defaultIndexLarge;
	BOOL _hasLoadedDefaultIndexLarge;
	VKShieldAtlas* _defaultAtlasLarge;
	BOOL _hasLoadedDefaultAtlasLarge;
	VKPShieldIndex* _defaultIndexExtraLarge;
	BOOL _hasLoadedDefaultIndexExtraLarge;
	VKShieldAtlas* _defaultAtlasExtraLarge;
	BOOL _hasLoadedDefaultAtlasExtraLarge;
	NSCache* _genericArtworks;
}
+(id)sharedManager;
-(id)artworkForShieldType:(int)shieldType textLength:(unsigned)length contentScale:(float)scale mode:(int)mode;
-(id)artworkForShieldType:(int)shieldType textLength:(unsigned)length contentScale:(float)scale resourceNames:(id)names style:(id)style mode:(int)mode;
-(id)_defaultAtlasForMode:(int)mode;
-(id)_defaultIndexForMode:(int)mode;
-(id)_indexForName:(id)name;
-(id)_atlasForName:(id)name;
-(void)_didReceiveMemoryWarning:(id)warning;
-(void)_activeTileGroupChanged:(id)changed;
-(void)purge;
-(void)dealloc;
-(id)init;
@end

