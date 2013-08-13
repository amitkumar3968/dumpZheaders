/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EDKeyedObject.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class EDResources;

__attribute__((visibility("hidden")))
@interface EDRun : XXUnknownSuperclass <EDKeyedObject> {
@private
	EDResources* mResources;
	unsigned mCharIndex;
	unsigned mFontIndex;
}
@property(assign) unsigned charIndex;	// converted property
@property(assign) unsigned fontIndex;	// converted property
@property(retain) id font;	// converted property
+(id)runWithCharIndex:(unsigned)charIndex font:(id)font resources:(id)resources;
+(id)runWithResources:(id)resources;
+(id)runWithCharIndex:(unsigned)charIndex fontIndex:(unsigned)index resources:(id)resources;
// converted property getter: -(id)font;
// converted property setter: -(void)setCharIndex:(unsigned)index;
// converted property getter: -(unsigned)charIndex;
-(int)key;
-(BOOL)isEqual:(id)equal;
-(BOOL)isEqualToRun:(id)run;
-(id)initWithCharIndex:(unsigned)charIndex font:(id)font resources:(id)resources;
-(id)initWithResources:(id)resources;
// converted property setter: -(void)setFontIndex:(unsigned)index;
// converted property getter: -(unsigned)fontIndex;
-(id)initWithCharIndex:(unsigned)charIndex fontIndex:(unsigned)index resources:(id)resources;
// converted property setter: -(void)setFont:(id)font;
@end
