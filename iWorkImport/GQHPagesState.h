/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "GQHState.h"
#import "GQWrapPointGenerator.h"

@class GQHStyle, GQDWPContainerHint, GQDSStyle, GQWrapPointSet;

__attribute__((visibility("hidden")))
@interface GQHPagesState : GQHState <GQWrapPointGenerator> {
@private
	CFDictionaryRef mFloatingDrawables;
	int mMode;
	CFDictionaryRef mHeaders;
	CFDictionaryRef mFooters;
	CFArrayRef mSectionStyles;
	CFDictionaryRef mPageWrapPointsMap;
	int mCurrentPageIndex;
	int mStartPageAt;
	int mStartPageAtValueChangedAtPageIndex;
	GQHStyle* mCurrentLayoutStyle;
	GQHStyle* mCurrentParagraphStyle;
	GQDSStyle* mCurrentBaseParagraphStyle;
	CFStringRef mCurrentCachedParagraphClass;
	GQHStyle* mCurrentSpanStyle;
	GQDSStyle* mCurrentBaseSpanStyle;
	CFStringRef mCurrentCachedSpanClass;
	GQWrapPointSet* mCurrentWrapPointSet;
	CGRect mLastFrame;
	BOOL mMappingFloatingDrawables;
	BOOL mStartedPage;
	BOOL mStartedSection;
	BOOL mDidInsertPageHeader;
	BOOL mDidFindContainerHint;
	GQDWPContainerHint* mLastInsertedContainerHint;
	CFArrayRef mAttachmentPositions;
	long mAttachmentIdCounter;
	long mFirstAttachmentId;
	BOOL mSplitNextAttachment;
	GQDSStyle* mCurrentSectionStyle;
	BOOL mHasLayoutDrawables;
	int mCurrentHintPageIndex;
	int mCurrentHintColumnIndex;
	BOOL mIsMappingHeadersFooters;
	int mHeaderFooterPageNumber;
	CFDictionaryRef mDrawablePagesOrderToCssZOrderClassMap;
	CGSize mPageSize;
	CFArrayRef mTocHrefStack;
	BOOL mCurrentFrameHasSandbagFloats;
	int mProgressiveIndex;
}
@property(assign) CGSize pageSize;	// converted property
@property(assign) BOOL isMappingHeadersFooters;	// converted property
@property(assign) BOOL hasLayoutDrawables;	// converted property
@property(assign) int currentPageIndex;	// converted property
@property(assign) int mode;	// converted property
-(id).cxx_construct;
-(BOOL)allowInlineWrap;
-(BOOL)needAbsolutelyPositionedTables;
-(void)endSection;
-(void)popTocHref;
-(void)pushTocHref:(CFStringRef)href;
-(unsigned)tocDepth;
// converted property setter: -(void)setPageSize:(CGSize)size;
// converted property getter: -(CGSize)pageSize;
-(CFDictionaryRef)pagesOrderToCssZOrderClassMapDictionary;
-(CFStringRef)cssZOrderClassForDrawablePagesOrder:(int)drawablePagesOrder;
-(CFStringRef)cssZOrderClassForDrawable:(id)drawable;
-(void)addStyle:(CFStringRef)style className:(CFStringRef)name srcStyle:(id)style3;
-(void)setOutlineStyleType:(int)type;
-(void)setOutlineLevel:(int)level;
-(BOOL)useOutline;
-(int)pageNumberForHeaderOrFooter;
// converted property getter: -(BOOL)isMappingHeadersFooters;
// converted property setter: -(void)setIsMappingHeadersFooters:(BOOL)footers;
// converted property getter: -(BOOL)hasLayoutDrawables;
// converted property setter: -(void)setHasLayoutDrawables:(BOOL)drawables;
-(void)inContent;
-(void)clearWrapPoints;
-(vector<GQUtility::ObjcSharedPtr<GQDWrapPoint>, std::allocator<GQUtility::ObjcSharedPtr<GQDWrapPoint>> >*)createListOfWrapPointsAlongY:(float)wrapPointsAlongY minX:(float)x maxX:(float)x3 zIndex:(int)index;
-(const set<GQUtility::ObjcSharedPtr<GQDWrapPoint>, GQUtility::NSObjectComparator<GQDWrapPoint>, std::allocator<GQUtility::ObjcSharedPtr<GQDWrapPoint>> >*)wrapPoints;
-(void)addWrapPoint:(id)point;
-(void)endWrapPointSet;
-(void)beginWrapPointSet;
-(void)resolveHeaderName:(const CFStringRef*)name footerName:(const CFStringRef*)name2;
-(void)handleContainerHint:(id)hint;
-(void)insertAttachmentPlaceholder;
-(long)firstAttachmentId;
-(long)nextAttachmentId;
-(long)currentAttachmentId;
-(double)moveToNextAttachmentPosition;
-(double)currentAttachmentPosition;
-(void)addAttachmentPosition:(double)position;
-(void)finishedWithSplitAttachment;
-(bool)splitNextAttachment;
-(void)mapFloatingDrawablesForPageAtIndex:(unsigned)index;
-(void)setDidFindContainerHint:(BOOL)findContainerHint;
-(void)setDidInsertPageHeader:(BOOL)insertPageHeader;
-(void)setCurrentSpanStyle:(id)style baseStyle:(id)style2 cachedClass:(CFStringRef)aClass;
-(void)setCurrentParagraphStyle:(id)style baseStyle:(id)style2 cachedClass:(CFStringRef)aClass;
-(void)setCurrentLayoutStyle:(id)style;
// converted property setter: -(void)setCurrentPageIndex:(int)index;
// converted property getter: -(int)currentPageIndex;
-(void)overrideSectionStyle:(id)style;
-(XXStruct_ny2fMB)rangeForSectionStyleAtPageIndex:(int)pageIndex;
-(id)sectionStyleForPageIndex:(int)pageIndex;
-(void)addSectionStyle:(id)style pageIndex:(int)index numPages:(int)pages;
-(void)setFooters:(CFArrayRef)footers;
-(id)footerForName:(CFStringRef)name;
-(void)setHeaders:(CFArrayRef)headers;
-(id)headerForName:(CFStringRef)name;
// converted property setter: -(void)setMode:(int)mode;
// converted property getter: -(int)mode;
-(CFArrayRef)pageDrawables:(int)drawables;
-(void)clearFloatingDrawables;
-(id)drawableAtIndex:(int)index;
-(void)addFloatingDrawable:(id)drawable;
-(int)floatingDrawablesCount;
-(void)dealloc;
-(id)initWithState:(id)state documentSize:(CGSize)size;
-(id)sectionStyleRunForRunBeforePageIndex:(int)runBeforePageIndex;
-(void)openStateLayoutElementsAndStyles;
-(void)closeStateLayoutElementsAndStyles;
-(void)startLayout;
-(void)startSection;
-(id)wrapPointSetForPage:(int)page;
@end

