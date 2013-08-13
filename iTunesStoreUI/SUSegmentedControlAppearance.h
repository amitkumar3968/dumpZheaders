/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "NSCopying.h"
#import "iTunesStoreUI-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIImage, NSMutableDictionary, SUControlAppearance;

@interface SUSegmentedControlAppearance : XXUnknownSuperclass <NSCopying> {
@private
	SUControlAppearance* _backgroundImages;
	NSMutableDictionary* _dividerImages;
	UIImage* _optionsBackgroundImage;
	NSMutableDictionary* _titleTextAttributes;
}
@property(retain, nonatomic) UIImage* optionsBackgroundImage;	// @synthesize=_optionsBackgroundImage
+(id)defaultOptionsAppearanceForTintStyle:(int)tintStyle;
+(id)defaultBarAppearance;
// declared property setter: -(void)setOptionsBackgroundImage:(id)image;
// declared property getter: -(id)optionsBackgroundImage;
-(id)copyWithZone:(NSZone*)zone;
-(id)_newDividerImageKeyWithLeftState:(unsigned)leftState rightState:(unsigned)state barMetrics:(int)metrics;
-(id)titleTextAttributesForState:(unsigned)state;
-(void)setTitleTextAttributes:(id)attributes forState:(unsigned)state;
-(void)styleSegmentedControl:(id)control;
-(void)setDividerImage:(id)image forLeftSegmentState:(unsigned)leftSegmentState rightSegmentState:(unsigned)state barMetrics:(int)metrics;
-(void)setBackgroundImage:(id)image forState:(unsigned)state barMetrics:(int)metrics;
-(id)dividerImageForLeftSegmentState:(unsigned)leftSegmentState rightSegmentState:(unsigned)state barMetrics:(int)metrics;
-(id)backgroundImageForState:(unsigned)state barMetrics:(int)metrics;
-(void)dealloc;
@end

