/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import "iPodUI-Structs.h"
#import "IUTableCellConfiguration.h"


@interface IUArrayCellConfiguration : IUTableCellConfiguration {
	unsigned _numberOfStrings;
	CGRect* _stringFrames;
	id* _strings;
	unsigned _numberOfImages;
	CGRect* _imageFrames;
	id* _images;
	id* _selectedImages;
}
@property(readonly, assign) unsigned numberOfImages;	// converted property
-(id)_accessibilityStringsArrayPointer;
-(id)stringForLabelAtIndex:(unsigned)index;
-(void)setLayoutSize:(CGSize)size;
-(unsigned)numberOfLabels;
// converted property getter: -(unsigned)numberOfImages;
-(id)imageAtIndex:(unsigned)index withModifiers:(unsigned)modifiers;
-(CGRect)frameForLabelAtIndex:(unsigned)index;
-(CGRect)frameForImageAtIndex:(unsigned)index;
-(void)reloadLayoutInformation;
-(void)dealloc;
-(id)initWithStringCount:(unsigned)stringCount imageCount:(unsigned)count;
@end

