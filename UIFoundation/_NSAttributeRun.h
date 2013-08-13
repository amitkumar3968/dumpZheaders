/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "UIFoundation-Structs.h"
#import "NSCopying.h"

@class NSMutableArray, NSTextStorage;

__attribute__((visibility("hidden")))
@interface _NSAttributeRun : XXUnknownSuperclass <NSCopying> {
@private
	NSRange _range;
	NSTextStorage* _textStorage;
	NSMutableArray* _attributesArray;
}
@property(readonly, assign) NSRange range;	// converted property
// converted property getter: -(NSRange)range;
-(id)copyWithZone:(NSZone*)zone;
-(void)restoreAttributesOfTextStorage:(id)textStorage;
-(void)dealloc;
-(id)initWithTextStorage:(id)textStorage range:(NSRange)range;
@end

