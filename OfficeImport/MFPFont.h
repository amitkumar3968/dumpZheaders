/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface MFPFont : XXUnknownSuperclass {
@private
	float mSize;
	int mUnit;
	unsigned long mFlags;
	NSString* mName;
}
@property(retain) id name;	// converted property
@property(assign) unsigned long flags;	// converted property
@property(assign) int unit;	// converted property
@property(assign) float size;	// converted property
-(CTFontRef)createCTFontWithGraphics:(id)graphics;
// converted property setter: -(void)setName:(id)name;
// converted property getter: -(id)name;
// converted property setter: -(void)setFlags:(unsigned long)flags;
// converted property getter: -(unsigned long)flags;
// converted property setter: -(void)setUnit:(int)unit;
// converted property getter: -(int)unit;
// converted property setter: -(void)setSize:(float)size;
// converted property getter: -(float)size;
-(void)dealloc;
@end

