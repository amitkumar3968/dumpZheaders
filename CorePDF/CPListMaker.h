/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CPDisposable.h"
#import "CorePDF-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class CPLayoutArea, CPList, NSArray;

@interface CPListMaker : XXUnknownSuperclass <CPDisposable> {
	CPLayoutArea* area;
	NSArray* spacers;
	unsigned textLineCount;
	id* textLines;
	CPList* list;
}
+(void)makeListsInPage:(id)page;
+(void)makeListsInChunk:(id)chunk;
+(void)makeListsInLayoutArea:(id)layoutArea;
-(void)makeLists;
-(void)makeListsInColumn:(id)column;
-(BOOL)makeListFrom:(CPListInfo*)from;
-(void)makeListItemFrom:(CPListInfo*)from stopAt:(unsigned)at;
-(void)fetchTextLinesInColumn:(id)column;
-(void)fetchTextLine:(id)line;
-(void)dealloc;
-(void)finalize;
-(void)dispose;
-(id)initWithLayoutArea:(id)layoutArea;
@end
