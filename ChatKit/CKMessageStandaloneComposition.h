/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import "CKMessageComposition.h"

@class NSArray, NSString, NSDictionary;

@interface CKMessageStandaloneComposition : CKMessageComposition {
	NSString* _textString;
	NSString* _markupString;
	NSString* _subject;
	NSDictionary* _resources;
	NSArray* _messageParts;
}
@property(retain) NSString* subject;	// converted property
@property(retain) NSDictionary* resources;	// converted property
@property(retain) NSString* markupString;	// converted property
@property(readonly, retain) NSString* textString;	// converted property
@property(readonly, retain) NSArray* messageParts;	// converted property
// converted property getter: -(id)resources;
// converted property setter: -(void)setSubject:(id)subject;
// converted property getter: -(id)subject;
// converted property getter: -(id)markupString;
-(void)dealloc;
// converted property getter: -(id)messageParts;
// converted property getter: -(id)textString;
// converted property setter: -(void)setResources:(id)resources;
// converted property setter: -(void)setMarkupString:(id)string;
-(void)_clearDerivedValues;
@end

