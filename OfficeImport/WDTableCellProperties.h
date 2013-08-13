/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class WDDocument;

__attribute__((visibility("hidden")))
@interface WDTableCellProperties : XXUnknownSuperclass {
@private
	short mWidth;
	short mPosition;
	unsigned mOriginal : 1;
	unsigned mTracked : 1;
	unsigned mResolved : 1;
	XXStruct_a$$qTB mOriginalProperties;
	XXStruct_a$$qTB mTrackedProperties;
	WDDocument* mDocument;
}
@property(retain) id formattingChangeDate;	// converted property
@property(retain) id editDate;	// converted property
@property(retain) id deletionDate;	// converted property
@property(assign) unsigned short indexToAuthorIDOfFormattingChange;	// converted property
@property(assign) unsigned short indexToAuthorIDOfEdit;	// converted property
@property(assign) unsigned short indexToAuthorIDOfDeletion;	// converted property
@property(assign) int formattingChanged;	// converted property
@property(assign) int edited;	// converted property
@property(assign) int deleted;	// converted property
@property(assign) BOOL noWrap;	// converted property
@property(assign) BOOL firstInSetOfVerticallyMergedCells;	// converted property
@property(assign) BOOL verticallyMergedCell;	// converted property
@property(assign) int textDirection;	// converted property
@property(assign) int verticalAlignment;	// converted property
@property(assign) int rightMarginType;	// converted property
@property(assign) short rightMargin;	// converted property
@property(assign) int leftMarginType;	// converted property
@property(assign) short leftMargin;	// converted property
@property(assign) int bottomMarginType;	// converted property
@property(assign) short bottomMargin;	// converted property
@property(assign) int topMarginType;	// converted property
@property(assign) short topMargin;	// converted property
@property(assign) int widthType;	// converted property
@property(assign) int resolveMode;	// converted property
@property(assign) short position;	// converted property
@property(assign) short width;	// converted property
-(id).cxx_construct;
-(id)copyWithZone:(NSZone*)zone;
-(BOOL)isFormattingChangeDateOverridden;
// converted property setter: -(void)setFormattingChangeDate:(id)date;
// converted property getter: -(id)formattingChangeDate;
-(BOOL)isEditDateOverridden;
// converted property setter: -(void)setEditDate:(id)date;
// converted property getter: -(id)editDate;
-(BOOL)isDeletionDateOverridden;
// converted property setter: -(void)setDeletionDate:(id)date;
// converted property getter: -(id)deletionDate;
-(BOOL)isIndexToAuthorIDOfFormattingChangeOverridden;
// converted property setter: -(void)setIndexToAuthorIDOfFormattingChange:(unsigned short)formattingChange;
// converted property getter: -(unsigned short)indexToAuthorIDOfFormattingChange;
-(BOOL)isIndexToAuthorIDOfEditOverridden;
// converted property setter: -(void)setIndexToAuthorIDOfEdit:(unsigned short)edit;
// converted property getter: -(unsigned short)indexToAuthorIDOfEdit;
-(BOOL)isIndexToAuthorIDOfDeletionOverridden;
// converted property setter: -(void)setIndexToAuthorIDOfDeletion:(unsigned short)deletion;
// converted property getter: -(unsigned short)indexToAuthorIDOfDeletion;
-(BOOL)isFormattingChangedOverridden;
// converted property setter: -(void)setFormattingChanged:(int)changed;
// converted property getter: -(int)formattingChanged;
-(BOOL)isEditedOverridden;
// converted property setter: -(void)setEdited:(int)edited;
// converted property getter: -(int)edited;
-(BOOL)isDeletedOverridden;
// converted property setter: -(void)setDeleted:(int)deleted;
// converted property getter: -(int)deleted;
-(BOOL)isNoWrapOverridden;
// converted property setter: -(void)setNoWrap:(BOOL)wrap;
// converted property getter: -(BOOL)noWrap;
-(BOOL)isFirstInSetOfVerticallyMergedCellsOverridden;
// converted property setter: -(void)setFirstInSetOfVerticallyMergedCells:(BOOL)verticallyMergedCells;
// converted property getter: -(BOOL)firstInSetOfVerticallyMergedCells;
-(BOOL)isVerticallyMergedCellOverridden;
// converted property setter: -(void)setVerticallyMergedCell:(BOOL)cell;
// converted property getter: -(BOOL)verticallyMergedCell;
-(BOOL)isTextDirectionOverridden;
// converted property setter: -(void)setTextDirection:(int)direction;
// converted property getter: -(int)textDirection;
-(BOOL)isVerticalAlignmentOverridden;
// converted property setter: -(void)setVerticalAlignment:(int)alignment;
// converted property getter: -(int)verticalAlignment;
-(BOOL)isRightMarginTypeOverridden;
// converted property setter: -(void)setRightMarginType:(int)type;
// converted property getter: -(int)rightMarginType;
-(BOOL)isRightMarginOverridden;
// converted property setter: -(void)setRightMargin:(short)margin;
// converted property getter: -(short)rightMargin;
-(BOOL)isLeftMarginTypeOverridden;
// converted property setter: -(void)setLeftMarginType:(int)type;
// converted property getter: -(int)leftMarginType;
-(BOOL)isLeftMarginOverridden;
// converted property setter: -(void)setLeftMargin:(short)margin;
// converted property getter: -(short)leftMargin;
-(BOOL)isBottomMarginTypeOverridden;
// converted property setter: -(void)setBottomMarginType:(int)type;
// converted property getter: -(int)bottomMarginType;
-(BOOL)isBottomMarginOverridden;
// converted property setter: -(void)setBottomMargin:(short)margin;
// converted property getter: -(short)bottomMargin;
-(BOOL)isTopMarginTypeOverridden;
// converted property setter: -(void)setTopMarginType:(int)type;
// converted property getter: -(int)topMarginType;
-(BOOL)isTopMarginOverridden;
// converted property setter: -(void)setTopMargin:(short)margin;
// converted property getter: -(short)topMargin;
-(BOOL)isWidthTypeOverridden;
// converted property setter: -(void)setWidthType:(int)type;
// converted property getter: -(int)widthType;
-(BOOL)isInsideVerticalBorderOverridden;
-(id)mutableInsideVerticalBorder;
-(id)insideVerticalBorder;
-(BOOL)isInsideHorizontalBorderOverridden;
-(id)mutableInsideHorizontalBorder;
-(id)insideHorizontalBorder;
-(BOOL)isDiagonalDownBorderOverridden;
-(id)mutableDiagonalDownBorder;
-(id)diagonalDownBorder;
-(BOOL)isDiagonalUpBorderOverridden;
-(id)mutableDiagonalUpBorder;
-(id)diagonalUpBorder;
-(BOOL)isRightBorderOverridden;
-(id)mutableRightBorder;
-(id)rightBorder;
-(BOOL)isBottomBorderOverridden;
-(id)mutableBottomBorder;
-(id)bottomBorder;
-(BOOL)isLeftBorderOverridden;
-(id)mutableLeftBorder;
-(id)leftBorder;
-(BOOL)isTopBorderOverridden;
-(id)mutableTopBorder;
-(id)topBorder;
-(void)clearShading;
-(BOOL)isShadingOverridden;
-(id)mutableShading;
-(id)shading;
-(void)originalToTracked;
-(void)addProperties:(id)properties;
// converted property setter: -(void)setResolveMode:(int)mode;
// converted property getter: -(int)resolveMode;
// converted property setter: -(void)setPosition:(short)position;
// converted property getter: -(short)position;
// converted property setter: -(void)setWidth:(short)width;
// converted property getter: -(short)width;
-(id)document;
-(id)initWithDocument:(id)document;
-(void)dealloc;
-(id)init;
-(void)addPropertiesValues:(XXStruct_PkO1_D*)values to:(XXStruct_PkO1_D*)to;
@end

