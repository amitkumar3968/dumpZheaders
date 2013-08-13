/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "PDSlideChild.h"

@class PDSlideMaster;

__attribute__((visibility("hidden")))
@interface PDSlideLayout : PDSlideChild {
@private
	int mSlideLayoutType;
	PDSlideMaster* mSlideMaster;
}
@property(retain) id slideMaster;	// converted property
@property(assign) int slideLayoutType;	// converted property
-(void)doneWithContent;
-(id)parentSlideBase;
-(id)masterGraphicForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index overrideIndex:(BOOL)index3;
-(id)parentShapePropertiesForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index overrideIndex:(BOOL)index3;
-(id)parentTextStyleForTables;
-(id)parentTextStyleForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index defaultTextListStyle:(id)style overrideIndex:(BOOL)index4;
-(id)parentTextBodyPropertiesForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index overrideIndex:(BOOL)index3;
-(id)defaultTheme;
// converted property setter: -(void)setSlideMaster:(id)master;
// converted property getter: -(id)slideMaster;
// converted property setter: -(void)setSlideLayoutType:(int)type;
// converted property getter: -(int)slideLayoutType;
-(void)dealloc;
-(id)initWithSlideMaster:(id)slideMaster;
@end

