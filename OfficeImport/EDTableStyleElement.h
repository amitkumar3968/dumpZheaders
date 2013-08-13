/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EDKeyedObject.h"
#import "NSCopying.h"
#import "OfficeImport-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class EDDifferentialStyle, EDCollection;

__attribute__((visibility("hidden")))
@interface EDTableStyleElement : XXUnknownSuperclass <EDKeyedObject, NSCopying> {
@private
	EDCollection* mDifferentialStyles;
	int mType;
	unsigned mBandSize;
	EDDifferentialStyle* mDifferentialStyle;
}
@property(retain) id differentialStyle;	// converted property
@property(assign) unsigned bandSize;	// converted property
@property(assign) int type;	// converted property
+(id)tableStyleElementWithResources:(id)resources;
-(void)setDifferentialStyleWithIndex:(unsigned)index;
// converted property setter: -(void)setDifferentialStyle:(id)style;
// converted property getter: -(id)differentialStyle;
// converted property setter: -(void)setBandSize:(unsigned)size;
// converted property getter: -(unsigned)bandSize;
// converted property setter: -(void)setType:(int)type;
// converted property getter: -(int)type;
-(int)key;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(id)initWithResources:(id)resources;
@end

