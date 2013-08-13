/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import "IUMediaEntityCellConfiguration.h"
#import "iPodUI-Structs.h"


@interface IUPlaylistCellConfiguration : IUMediaEntityCellConfiguration {
@private
	int _groupingType;
}
+(id)backgroundColorWithModifiers:(unsigned)modifiers;
+(float)rowHeightForGlobalContext:(id)globalContext;
-(void)reloadStringsWithProperties:(id)properties;
-(void)reloadImages;
-(void)reloadLayoutInformation;
-(void)configureForEntity:(id)entity query:(id)query entityIndex:(unsigned)index entityCount:(unsigned)count;
-(BOOL)getShadowColor:(id*)color offset:(CGSize*)offset forLabelAtIndex:(unsigned)index withModifiers:(unsigned)modifiers;
-(id)fontForLabelAtIndex:(unsigned)index;
-(id)colorForLabelAtIndex:(unsigned)index withModifiers:(unsigned)modifiers;
-(id)init;
@end
