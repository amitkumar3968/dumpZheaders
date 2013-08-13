/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADTextRun.h"

@class NSString, OADParagraphProperties;

__attribute__((visibility("hidden")))
@interface OADTextField : OADTextRun {
@private
	OADParagraphProperties* mParagraphProperties;
	NSString* mId;
	NSString* mText;
}
@property(retain) id text;	// converted property
@property(retain) id id;	// converted property
-(void)removeUnnecessaryOverrides;
// converted property setter: -(void)setText:(id)text;
// converted property getter: -(id)text;
// converted property setter: -(void)setId:(id)anId;
// converted property getter: -(id)id;
-(id)paragraphProperties;
-(BOOL)isEmpty;
-(void)dealloc;
-(id)init;
@end
