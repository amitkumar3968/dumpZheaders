/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "WDRun.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface WDBookmark : WDRun {
@private
	NSString* mName;
	int mBookmarkType;
}
@property(assign) int bookmarkType;	// converted property
@property(retain) id name;	// converted property
// converted property setter: -(void)setBookmarkType:(int)type;
// converted property getter: -(int)bookmarkType;
-(int)runType;
-(void)dealloc;
// converted property setter: -(void)setName:(id)name;
// converted property getter: -(id)name;
-(id)initWithParagraph:(id)paragraph name:(id)name type:(int)type;
@end

