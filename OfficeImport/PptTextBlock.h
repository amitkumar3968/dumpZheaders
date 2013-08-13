/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableString, NSMutableArray;

__attribute__((visibility("hidden")))
@interface PptTextBlock : XXUnknownSuperclass {
@private
	PptTextHeaderAtom* mTextHeader;
	NSMutableString* mText;
	PptTextBlockStylingAtom* mStyleText;
	NSMutableArray* mMetaCharacterFields;
	NSMutableArray* mBookmarks;
	NSMutableArray* mHyperlinks;
	PptTextRulerAtom* mTextRuler;
}
-(PptCharRun*)characterRunAtIndex:(int)index;
-(int)characterRunCount;
-(PptParaRun*)paragraphRunAtIndex:(int)index;
-(int)paragraphRunCount;
-(PptTextRulerAtom*)textRuler;
-(id)bookmarks;
-(id)hyperlinks;
-(id)metaCharacterFields;
-(id)text;
-(unsigned long)textIndex;
-(int)textType;
-(void)writeTextBlock:(id)block;
-(void)readTextBlock:(id)block;
-(void)dealloc;
-(id)init;
-(void)readMetaCharacterFieldsBookmarksAndHyperlinks:(id)hyperlinks;
-(void)readStyles:(id)styles;
-(void)readString:(id)string;
@end
