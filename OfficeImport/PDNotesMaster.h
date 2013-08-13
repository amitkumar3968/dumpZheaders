/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "PDSlideBase.h"

@class OADTheme, OADTextListStyle, OADColorMap;

__attribute__((visibility("hidden")))
@interface PDNotesMaster : PDSlideBase {
@private
	OADTheme* mTheme;
	OADColorMap* mColorMap;
	OADTextListStyle* mNotesTextStyle;
}
-(id)drawingTheme;
-(void)doneWithContent;
-(id)masterGraphicForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index overrideIndex:(BOOL)index3;
-(id)parentShapePropertiesForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index overrideIndex:(BOOL)index3;
-(id)parentTextStyleForTables;
-(id)parentTextStyleForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index defaultTextListStyle:(id)style overrideIndex:(BOOL)index4;
-(id)parentTextBodyPropertiesForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index overrideIndex:(BOOL)index3;
-(id)placeholderWithType:(int)type placeholderTypeIndex:(int)index;
-(id)notesTextStyle;
-(id)styleMatrix;
-(id)colorMap;
-(id)fontScheme;
-(id)colorScheme;
-(id)theme;
-(id)parentSlideBase;
-(void)dealloc;
-(id)init;
@end
