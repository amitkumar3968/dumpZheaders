/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class OADFill, OADTableCell3DProperties, OADStroke;

__attribute__((visibility("hidden")))
@interface OADTableCellProperties : XXUnknownSuperclass {
@private
	OADStroke* mLeftStroke;
	BOOL mIsLeftStrokeOverridden;
	OADStroke* mRightStroke;
	BOOL mIsRightStrokeOverridden;
	OADStroke* mTopStroke;
	BOOL mIsTopStrokeOverridden;
	OADStroke* mBottomStroke;
	BOOL mIsBottomStrokeOverridden;
	OADStroke* mTopLeftToBottomRightStroke;
	BOOL mIsTopLeftToBottomRightStrokeOverridden;
	OADStroke* mBottomLeftToTopRightStroke;
	BOOL mIsBottomLeftToTopRightStrokeOverridden;
	OADTableCell3DProperties* mThreeDProperties;
	BOOL mIsThreeDPropertiesOverridden;
	OADFill* mFill;
	BOOL mIsFillOverridden;
	float mLeftMargin;
	BOOL mIsLeftMarginOverridden;
	float mRightMargin;
	BOOL mIsRightMarginOverridden;
	float mTopMargin;
	BOOL mIsTopMarginOverridden;
	float mBottomMargin;
	BOOL mIsBottomMarginOverridden;
	int mTextFlow;
	BOOL mIsTextFlowOverridden;
	int mTextAnchor;
	BOOL mIsTextAnchorOverridden;
	BOOL mTextAnchorCenter;
	BOOL mIsTextAnchorCenterOverridden;
	int mTextHorizontalOverflow;
	BOOL mIsTextHorizontalOverflowOverridden;
}
@property(assign) int textHorizontalOverflow;	// converted property
@property(assign) BOOL textAnchorCenter;	// converted property
@property(assign) int textAnchor;	// converted property
@property(assign) int textFlow;	// converted property
@property(assign) float bottomMargin;	// converted property
@property(assign) float topMargin;	// converted property
@property(assign) float rightMargin;	// converted property
@property(assign) float leftMargin;	// converted property
@property(retain) id fill;	// converted property
@property(retain) id threeDProperties;	// converted property
@property(retain) id bottomLeftToTopRightStroke;	// converted property
@property(retain) id topLeftToBottomRightStroke;	// converted property
@property(retain) id bottomStroke;	// converted property
@property(retain) id topStroke;	// converted property
@property(retain) id rightStroke;	// converted property
@property(retain) id leftStroke;	// converted property
-(BOOL)isTextHorizontalOverflowOverridden;
// converted property setter: -(void)setTextHorizontalOverflow:(int)overflow;
// converted property getter: -(int)textHorizontalOverflow;
-(BOOL)isTextAnchorCenterOverridden;
// converted property setter: -(void)setTextAnchorCenter:(BOOL)center;
// converted property getter: -(BOOL)textAnchorCenter;
-(BOOL)isTextAnchorOverridden;
// converted property setter: -(void)setTextAnchor:(int)anchor;
// converted property getter: -(int)textAnchor;
-(BOOL)isTextFlowOverridden;
// converted property setter: -(void)setTextFlow:(int)flow;
// converted property getter: -(int)textFlow;
-(BOOL)isBottomMarginOverridden;
// converted property setter: -(void)setBottomMargin:(float)margin;
// converted property getter: -(float)bottomMargin;
-(BOOL)isTopMarginOverridden;
// converted property setter: -(void)setTopMargin:(float)margin;
// converted property getter: -(float)topMargin;
-(BOOL)isRightMarginOverridden;
// converted property setter: -(void)setRightMargin:(float)margin;
// converted property getter: -(float)rightMargin;
-(BOOL)isLeftMarginOverridden;
// converted property setter: -(void)setLeftMargin:(float)margin;
// converted property getter: -(float)leftMargin;
-(BOOL)isFillOverridden;
// converted property setter: -(void)setFill:(id)fill;
// converted property getter: -(id)fill;
-(BOOL)isThreeDPropertiesOverridden;
// converted property setter: -(void)setThreeDProperties:(id)properties;
// converted property getter: -(id)threeDProperties;
-(id)strokeNormalToDir:(int)dir bound:(int)bound;
-(BOOL)isBottomLeftToTopRightStrokeOverridden;
// converted property setter: -(void)setBottomLeftToTopRightStroke:(id)topRightStroke;
// converted property getter: -(id)bottomLeftToTopRightStroke;
-(BOOL)isTopLeftToBottomRightStrokeOverridden;
// converted property setter: -(void)setTopLeftToBottomRightStroke:(id)bottomRightStroke;
// converted property getter: -(id)topLeftToBottomRightStroke;
-(BOOL)isBottomStrokeOverridden;
// converted property setter: -(void)setBottomStroke:(id)stroke;
// converted property getter: -(id)bottomStroke;
-(BOOL)isTopStrokeOverridden;
// converted property setter: -(void)setTopStroke:(id)stroke;
// converted property getter: -(id)topStroke;
-(BOOL)isRightStrokeOverridden;
// converted property setter: -(void)setRightStroke:(id)stroke;
// converted property getter: -(id)rightStroke;
-(BOOL)isLeftStrokeOverridden;
// converted property setter: -(void)setLeftStroke:(id)stroke;
// converted property getter: -(id)leftStroke;
-(id)stroke:(int)stroke;
-(void)dealloc;
@end

