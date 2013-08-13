/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import "iPodUI-Structs.h"
#import "IUPodcastCellConfiguration.h"


@interface IUMusicPodcastCellConfiguration : IUPodcastCellConfiguration {
}
+(id)backgroundColorWithModifiers:(unsigned)modifiers;
+(float)rowHeightForGlobalContext:(id)globalContext;
-(UIEdgeInsets)selectionEdgeInsets;
-(BOOL)getShadowColor:(id*)color offset:(CGSize*)offset forLabelAtIndex:(unsigned)index withModifiers:(unsigned)modifiers;
-(id)colorForLabelAtIndex:(unsigned)index withModifiers:(unsigned)modifiers;
@end

