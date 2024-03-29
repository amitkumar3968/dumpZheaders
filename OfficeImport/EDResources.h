/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class EDStylesCollection, EDContentFormatsCollection, EDLinksCollection, EDCollection, EDColorsCollection, EDFontsCollection, EDTableStylesCollection;

__attribute__((visibility("hidden")))
@interface EDResources : XXUnknownSuperclass {
@private
	EDCollection* mStrings;
	EDContentFormatsCollection* mContentFormats;
	EDFontsCollection* mFonts;
	EDCollection* mAlignmentInfos;
	EDStylesCollection* mStyles;
	EDColorsCollection* mColors;
	EDColorsCollection* mThemes;
	EDCollection* mNames;
	EDLinksCollection* mLinks;
	EDCollection* mBorders;
	EDCollection* mBorder;
	EDCollection* mFills;
	EDCollection* mDifferentialStyles;
	EDTableStylesCollection* mTableStyles;
}
@property(retain) id themes;	// converted property
@property(retain) id colors;	// converted property
-(id)tableStyles;
-(id)differentialStyles;
-(id)fills;
-(id)border;
-(id)borders;
-(id)links;
-(id)names;
// converted property getter: -(id)themes;
// converted property getter: -(id)colors;
-(id)styles;
-(id)alignmentInfos;
-(id)fonts;
-(id)contentFormats;
-(id)strings;
-(void)dealloc;
-(id)initWithStringOptimization:(bool)stringOptimization;
// converted property setter: -(void)setThemes:(id)themes;
// converted property setter: -(void)setColors:(id)colors;
@end

