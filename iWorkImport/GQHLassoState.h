/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "GQHState.h"

@class GQHXML;

__attribute__((visibility("hidden")))
@interface GQHLassoState : GQHState {
@private
	GQHXML* mNavigation;
	GQHXML* mIndex;
	int mSheetCount;
	int mTableCount;
	CFStringRef mCssUri;
	CFStringRef mCurrentSheetFilename;
	CFArrayRef mSheetFilenameList;
	CFArrayRef mSheetUriList;
	CFStringRef mCurrentSheetUri;
	CGPoint mMaxCanvasPoint;
	unsigned mCurrentDrawableZOrder;
	unsigned mZOrderedDrawableCount;
	CFDictionaryRef mDrawableUidToCssZOrderClassMap;
	CFArrayRef mSheetCssUriList;
	CFArrayRef mSheetCssLastUriList;
	CFStringRef mSheetCssFilename;
	CFStringRef mSheetCssLastFilename;
	CFStringRef mSheetOneCss;
	CFStringRef mSheetOneLastCSS;
	char* mFirstWorkspaceName;
	bool mIsProgressiveMode;
}
-(id).cxx_construct;
-(CFStringRef)writeTabsJS;
-(BOOL)inProgressiveMode;
-(void)writeNavigationPage:(id)page;
-(BOOL)writeIndexPageWithIFrame:(id)iframe;
-(void)writeIndexPageWithDocumentSize:(CGSize)documentSize;
-(unsigned)currentDrawableZOrder;
-(CFStringRef)cssZOrderClassForDrawableUid:(const char*)drawableUid;
-(BOOL)drawablesNeedCssZOrdering;
-(void)addedDrawableWithBounds:(CGRect)bounds;
-(CGPoint)maxCanvasPoint;
-(BOOL)finishMainHtml;
-(void)addCachedStyle:(CFStringRef)style;
-(CFStringRef)makeInlineStyle:(CFStringRef)style;
-(void)addStyle:(CFStringRef)style className:(CFStringRef)name srcStyle:(id)style3;
-(int)endSheet;
-(void)cacheAnchorForIndexPage:(char*)indexPage;
-(void)writeAnchorInNavigationPage:(char*)navigationPage;
-(void)beginNewSheet:(const char*)sheet processorState:(id)state;
-(void)dealloc;
-(id)initWithState:(id)state;
@end

