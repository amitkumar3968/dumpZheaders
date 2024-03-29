/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class OADTextBodyProperties, OADTextListStyle, NSMutableArray;

__attribute__((visibility("hidden")))
@interface OADTextBody : XXUnknownSuperclass {
@private
	OADTextBodyProperties* mProperties;
	NSMutableArray* mParagraphs;
	OADTextListStyle* mTextListStyle;
}
@property(retain) id properties;	// converted property
-(void)removeUnnecessaryOverrides;
-(void)flattenProperties;
-(BOOL)isEmpty;
-(void)removeTrailingNewlines;
-(void)setParentTextListStyle:(id)style;
-(void)applyTextListStyle:(id)style;
-(id)overrideTextListStyle;
-(id)textListStyle;
-(void)removeAllParagraphs;
-(id)addParagraph;
-(id)paragraphAtIndex:(unsigned)index;
-(unsigned)paragraphCount;
// converted property setter: -(void)setProperties:(id)properties;
// converted property getter: -(id)properties;
-(void)dealloc;
-(id)init;
-(id)findFirstTextRunOfClass:(Class)aClass;
-(void)addParagraphsFromTextBody:(id)textBody;
-(id)plainText;
@end

