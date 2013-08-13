/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADGraphic.h"
#import "OfficeImport-Structs.h"
#import "OADDrawableContainer.h"

@class CHDPlotArea, EDWorkbook, CHDLegend, EDSheet, OADGraphicProperties, CHDTitle, NSMutableArray, CHDDefaultTextProperties, CHDView3D;

__attribute__((visibility("hidden")))
@interface CHDChart : OADGraphic <OADDrawableContainer> {
@private
	EDSheet* mSheet;
	int mStyleId;
	bool mAutoTitleDeleted;
	bool mPlotVisibleCellsOnly;
	bool mMSGraph;
	bool mDirectionChanged;
	int mDisplayBlankCellsAs;
	CHDPlotArea* mPlotArea;
	CHDView3D* mView3D;
	CHDTitle* mTitle;
	CHDLegend* mLegend;
	EDWorkbook* mExternalData;
	OADGraphicProperties* mChartAreaGraphicProperties;
	OADGraphicProperties* mBackWallGraphicProperties;
	OADGraphicProperties* mSideWallGraphicProperties;
	OADGraphicProperties* mFloorGraphicProperties;
	CHDDefaultTextProperties* mDefaultTextProperties;
	int mChartDirection;
	CGRect mLogicalBounds;
	NSMutableArray* mDrawables;
}
@property(assign, getter=isDirectionChanged) bool directionChanged;	// converted property
@property(assign, getter=isMSGraph) bool mSGraph;	// converted property
@property(assign) CGRect logicalBounds;	// converted property
@property(assign) int direction;	// converted property
@property(retain) id defaultTextProperties;	// converted property
@property(retain) id floorGraphicProperties;	// converted property
@property(retain) id sideWallGraphicProperties;	// converted property
@property(retain) id backWallGraphicProperties;	// converted property
@property(retain) id chartAreaGraphicProperties;	// converted property
@property(retain) id externalData;	// converted property
@property(retain) id legend;	// converted property
@property(retain) id title;	// converted property
@property(retain) id view3D;	// converted property
@property(retain) id plotArea;	// converted property
@property(assign) int displayBlankAs;	// converted property
@property(assign, getter=isPlotVisibleCellsOnly) bool plotVisibleCellsOnly;	// converted property
@property(assign, getter=isAutoTitleDeleted) bool autoTitleDeleted;	// converted property
@property(assign) int styleId;	// converted property
@property(retain) id sheet;	// converted property
+(id)binaryEffects:(BOOL)effects;
-(id).cxx_construct;
// converted property setter: -(void)setDirectionChanged:(bool)changed;
// converted property getter: -(bool)isDirectionChanged;
// converted property setter: -(void)setMSGraph:(bool)graph;
// converted property getter: -(bool)isMSGraph;
-(unsigned)categoryCount;
-(unsigned)seriesCount;
-(bool)isBinary;
-(bool)isPie;
-(bool)is3D;
-(id)mainType;
-(id)styleMatrix;
-(int)defaultLabelPosition;
-(id)defaultFontWithResources:(id)resources;
-(id)defaultContentFormat;
-(unsigned)defaultFontIndex;
-(id)defaultSeriesTitleFont;
-(id)defaultDataLabelFont;
-(id)defaultTextFont;
-(id)defaultThemeFont;
-(void)setParentTextListStyle:(id)style;
-(void)replaceChild:(id)child with:(id)with;
-(id)children;
-(id)childAtIndex:(unsigned)index;
-(void)addChildren:(id)children;
-(void)addChild:(id)child;
-(unsigned)childCount;
// converted property setter: -(void)setLogicalBounds:(CGRect)bounds;
// converted property getter: -(CGRect)logicalBounds;
// converted property setter: -(void)setDirection:(int)direction;
// converted property getter: -(int)direction;
// converted property setter: -(void)setDefaultTextProperties:(id)properties;
// converted property getter: -(id)defaultTextProperties;
// converted property setter: -(void)setFloorGraphicProperties:(id)properties;
// converted property getter: -(id)floorGraphicProperties;
// converted property setter: -(void)setSideWallGraphicProperties:(id)properties;
// converted property getter: -(id)sideWallGraphicProperties;
// converted property setter: -(void)setBackWallGraphicProperties:(id)properties;
// converted property getter: -(id)backWallGraphicProperties;
// converted property setter: -(void)setChartAreaGraphicProperties:(id)properties;
// converted property getter: -(id)chartAreaGraphicProperties;
// converted property setter: -(void)setExternalData:(id)data;
// converted property getter: -(id)externalData;
// converted property setter: -(void)setLegend:(id)legend;
// converted property getter: -(id)legend;
// converted property setter: -(void)setTitle:(id)title;
// converted property getter: -(id)title;
// converted property setter: -(void)setView3D:(id)d;
// converted property getter: -(id)view3D;
// converted property setter: -(void)setPlotArea:(id)area;
// converted property getter: -(id)plotArea;
// converted property setter: -(void)setDisplayBlankAs:(int)as;
// converted property getter: -(int)displayBlankAs;
// converted property setter: -(void)setPlotVisibleCellsOnly:(bool)only;
// converted property getter: -(bool)isPlotVisibleCellsOnly;
// converted property setter: -(void)setAutoTitleDeleted:(bool)deleted;
// converted property getter: -(bool)isAutoTitleDeleted;
// converted property setter: -(void)setStyleId:(int)anId;
// converted property getter: -(int)styleId;
-(id)processors;
-(id)workbook;
// converted property setter: -(void)setSheet:(id)sheet;
// converted property getter: -(id)sheet;
-(void)dealloc;
-(id)init;
@end
