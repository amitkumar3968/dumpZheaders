/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OCBReader.h"

@class WBOfficeArtReaderState, TSUNoCopyDictionary, NSMutableArray, WDDocument;

__attribute__((visibility("hidden")))
@interface WBReader : OCBReader {
@private
	WrdNoteTable* mFootnoteTable;
	WrdNoteTable* mEndnoteTable;
	WrdAnnotationTable* mAnnotationTable;
	WrdCPTableHeaders* mTableHeaders;
	WrdBookmarkTable* mBookmarkTable;
	WrdBookmarkTable* mAnnotationBookmarkTable;
	WrdFieldPositionTable* mFieldPositionTables[8];
	WrdStoryTable* mStoryTable;
	WrdStoryTable* mHeaderStoryTable;
	WrdFileShapeAddressTable* mFileShapeAddressTable;
	WrdFileShapeAddressTable* mFileShapeAddressHeaderTable;
	WrdEshObjectFactory* mEshObjectFactory;
	WrdParagraphProperties* mLastRowParagraphProperties;
	NSMutableArray* mAnnotationOwners;
	TSUNoCopyDictionary* mIndexToStyles;
	TSUNoCopyDictionary* mIndexToFonts;
	WDDocument* mTargetDocument;
	WBOfficeArtReaderState* mOfficeArtState;
	vector<WBTextBoxReaderInfo, std::allocator<WBTextBoxReaderInfo> >* mTextBoxes;
	BOOL mReportProgress;
	id mAnnotationRangeStart;
}
@property(assign, nonatomic) WDDocument* targetDocument;	// @synthesize=mTargetDocument
@property(retain) id officeArtState;	// converted property
@property(assign) BOOL reportProgress;	// converted property
@property(assign) WrdParagraphProperties* lastRowParagraphProperties;	// converted property
@property(retain) id annotationRangeStart;	// converted property
// declared property setter: -(void)setTargetDocument:(id)document;
// declared property getter: -(id)targetDocument;
-(WBTextBoxReaderInfo)textBoxInfoAtIndex:(unsigned)index;
-(unsigned)textBoxCount;
-(void)cacheTextBox:(id)box withChainIndex:(unsigned short)chainIndex;
-(id)drawableForShapeId:(unsigned)shapeId;
// converted property setter: -(void)setOfficeArtState:(id)state;
// converted property getter: -(id)officeArtState;
// converted property setter: -(void)setReportProgress:(BOOL)progress;
// converted property getter: -(BOOL)reportProgress;
-(void)addFont:(id)font index:(int)index;
-(id)fontAtIndex:(int)index;
-(void)addStyle:(id)style index:(int)index;
-(id)styleAtIndex:(int)index;
// converted property setter: -(void)setLastRowParagraphProperties:(WrdParagraphProperties*)properties;
// converted property getter: -(WrdParagraphProperties*)lastRowParagraphProperties;
-(WrdEshObjectFactory*)eshObjectFactory;
-(WrdFileShapeAddressTable*)fileShapeAddressHeaderTable;
-(WrdFileShapeAddressTable*)fileShapeAddressTable;
-(WrdStoryTable*)headerStoryTable;
-(WrdStoryTable*)storyTable;
-(id)readCharactersFrom:(unsigned long)from to:(unsigned long)to textType:(int)type;
-(id)readCharactersForTextRun:(WrdTextRun*)textRun;
-(WrdFieldPositionTable*)fieldPositionTableForTextType:(int)textType;
-(WrdBookmarkTable*)annotationBookmarkTable;
-(WrdBookmarkTable*)bookmarkTable;
-(WrdCPTableHeaders*)tableHeaders;
-(id)annotationOwner:(int)owner;
-(WrdAnnotationTable*)annotationTable;
-(WrdNoteTable*)endnoteTable;
-(WrdNoteTable*)footnoteTable;
-(WrdBinaryReader*)wrdReader;
-(OCCBinaryStreamer*)allocBinaryStreamerWithCryptoKey:(OCCCryptoKey*)cryptoKey baseOutputFilenameInUTF8:(const char*)utf8;
-(OCCEncryptionInfoReader*)encryptionInfoReader;
-(id)read;
-(BOOL)start;
-(void)dealloc;
-(id)initWithCancelDelegate:(id)cancelDelegate tracing:(id)tracing;
-(void)initialize;
// converted property setter: -(void)setAnnotationRangeStart:(id)start;
// converted property getter: -(id)annotationRangeStart;
@end
