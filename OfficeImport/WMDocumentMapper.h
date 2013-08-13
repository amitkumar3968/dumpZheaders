/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMMapperRoot.h"
#import "CMMapper.h"
#import "OfficeImport-Structs.h"

@class CMArchiveManager, WDDocument, NSString;

__attribute__((visibility("hidden")))
@interface WMDocumentMapper : CMMapper <CMMapperRoot> {
@private
	CMArchiveManager* mArchiver;
	WDDocument* wDom;
	NSString* mFileName;
}
@property(retain) id fileName;	// converted property
-(CGSize)contentSizeForDevice;
-(CGSize)pageSizeForDevice;
-(id)documentTitle;
-(id)styleMatrix;
-(id)archiver;
-(void)mapWithState:(id)state;
-(void)mapDefaultCssStylesAt:(id)at;
// converted property getter: -(id)fileName;
// converted property setter: -(void)setFileName:(id)name;
-(int)defaultTabWidth;
-(id)blipAtIndex:(unsigned)index;
-(void)dealloc;
-(id)initWithWDom:(id)wdom archiver:(id)archiver;
-(float)bottomMargin;
-(float)headerMargin;
-(float)topMargin;
-(float)rightMargin;
-(float)leftMargin;
-(BOOL)hasSessionBreakAtIndex:(unsigned)index;
@end

