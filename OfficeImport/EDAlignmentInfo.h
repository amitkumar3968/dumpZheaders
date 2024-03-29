/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "NSCopying.h"
#import "OfficeImport-Structs.h"
#import "EDImmutableObject.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface EDAlignmentInfo : XXUnknownSuperclass <NSCopying, EDImmutableObject> {
@private
	int mHorizontalAlignment;
	int mVerticalAlignment;
	int mIndent;
	int mTextRotation;
	bool mTextWrapped;
	bool mHorizontalAlignOverridden;
	bool mVerticalAlignOverridden;
	bool mIndentOverridden;
	bool mTextWrappedOveridden;
	bool mDoNotModify;
}
@property(assign) int textRotation;	// converted property
@property(assign, getter=isTextWrapped) bool textWrapped;	// converted property
@property(assign) int indent;	// converted property
@property(assign) int verticalAlignment;	// converted property
@property(assign) int horizontalAlignment;	// converted property
+(id)alignmentInfo;
-(void)setDoNotModify:(bool)modify;
// converted property setter: -(void)setTextRotation:(int)rotation;
// converted property getter: -(int)textRotation;
// converted property setter: -(void)setTextWrapped:(bool)wrapped;
// converted property getter: -(bool)isTextWrapped;
-(bool)isTextWrappedOverridden;
// converted property setter: -(void)setIndent:(int)indent;
// converted property getter: -(int)indent;
-(bool)isIndentOverridden;
// converted property setter: -(void)setVerticalAlignment:(int)alignment;
// converted property getter: -(int)verticalAlignment;
-(bool)isVerticalAlignOverridden;
// converted property setter: -(void)setHorizontalAlignment:(int)alignment;
// converted property getter: -(int)horizontalAlignment;
-(bool)isHorizontalAlignOverridden;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(BOOL)isEqualToAlignmentInfo:(id)alignmentInfo;
-(id)copyWithZone:(NSZone*)zone;
-(id)init;
@end

