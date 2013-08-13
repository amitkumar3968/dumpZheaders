/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMMapperRoot.h"
#import "CMMapper.h"
#import "OfficeImport-Structs.h"

@class EDWorkbook, CMArchiveManager, NSMutableArray, OIXMLDocument, OIXMLElement, NSString;

__attribute__((visibility("hidden")))
@interface EMWorkbookMapper : CMMapper <CMMapperRoot> {
@private
	unsigned mRealSheetCount;
	int mWidth;
	int mHeight;
	EDWorkbook* edWorkbook;
	NSMutableArray* mWorksheetUrls;
	NSMutableArray* mWorksheetNames;
	NSMutableArray* mWorksheetGuids;
	NSString* mResourceUrlPrefix;
	NSString* mResourceUrlProtocol;
	NSString* mStyleSheetGuid;
	CMArchiveManager* mArchiver;
	NSString* mFileName;
	unsigned mSheetIndex;
	bool mIsFirstMappedSheet;
	bool mIsFrameset;
	OIXMLDocument* mXhtmlDoc;
	OIXMLElement* mBodyElement;
	OIXMLDocument* mTabBarDoc;
	NSString* mTabBarURL;
	NSMutableArray* mSheetURLs;
	float mTabPosition;
	unsigned mNumberOfMappedSheets;
	BOOL mHasPushedHeader;
	BOOL mHasPushedFirstSheet;
	BOOL mLoadingMessageVisible;
}
@property(retain) id fileName;	// converted property
+(id)borderWidthCache;
+(id)borderStyleCache;
+(id)cssStyleCache;
+(id)baseDate;
+(void)setBaseDate1904:(BOOL)a1904;
-(void)finishMappingWithState:(id)state;
-(void)mapElement:(id)element atIndex:(unsigned)index withState:(id)state isLastElement:(BOOL)element4;
-(id)_copyStringForSheet:(id)sheet atIndex:(unsigned)index withState:(id)state andMapper:(id)mapper;
-(void)startMappingWithState:(id)state;
-(void)_pushTabForSheet:(id)sheet atIndex:(unsigned)index;
-(id)_mainPageBack;
-(id)_frontPageByCopyingMainPage;
-(CGSize)pageSizeForDevice;
-(BOOL)hasMultipleSheets;
-(id)styleMatrix;
-(id)documentTitle;
-(id)archiver;
-(bool)isMultiPage;
-(id)blipAtIndex:(unsigned)index;
// converted property getter: -(id)fileName;
// converted property setter: -(void)setFileName:(id)name;
-(id)workbook;
-(void)dealloc;
-(id)initWithEDWorkbook:(id)edworkbook archiver:(id)archiver;
-(void)mapBodyStyleAt:(id)at;
-(id)copySheetMapperWithEdSheet:(id)edSheet;
@end
