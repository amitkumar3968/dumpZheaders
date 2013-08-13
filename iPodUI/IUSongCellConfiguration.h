/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import "iPodUI-Structs.h"
#import "IUSongCellConfigurationAbstract.h"

@class NSString;

@interface IUSongCellConfiguration : IUSongCellConfigurationAbstract {
@private
	NSString* _title;
	NSString* _album;
	NSString* _artist;
	int _mediaType;
}
@property(assign, nonatomic) int mediaType;	// @synthesize=_mediaType
@property(retain, nonatomic) NSString* artist;	// @synthesize=_artist
@property(retain, nonatomic) NSString* album;	// @synthesize=_album
@property(retain, nonatomic) NSString* title;	// @synthesize=_title
+(void)getRequiredStringProperties:(id)properties optionalStringProperties:(id)properties2 forDataSource:(id)dataSource;
+(float)rowHeightForGlobalContext:(id)globalContext;
+(id)backgroundColorWithModifiers:(unsigned)modifiers;
// declared property setter: -(void)setTitle:(id)title;
// declared property getter: -(id)title;
// declared property setter: -(void)setMediaType:(int)type;
// declared property getter: -(int)mediaType;
// declared property setter: -(void)setArtist:(id)artist;
// declared property getter: -(id)artist;
// declared property setter: -(void)setAlbum:(id)album;
// declared property getter: -(id)album;
-(void)reloadStringsWithProperties:(id)properties;
-(id)displayProperties;
-(void)reloadImages;
-(void)reloadLayoutInformation;
-(BOOL)getShadowColor:(id*)color offset:(CGSize*)offset forLabelAtIndex:(unsigned)index withModifiers:(unsigned)modifiers;
-(id)fontForLabelAtIndex:(unsigned)index;
-(CGPoint)downloadProgressIndicatorOrigin;
-(CGPoint)downloadButtonOrigin;
-(BOOL)canShowPurchasableMediaViews;
-(id)description;
-(id)colorForLabelAtIndex:(unsigned)index withModifiers:(unsigned)modifiers;
-(void)dealloc;
-(id)init;
@end

