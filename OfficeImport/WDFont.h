/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "OfficeImport-Structs.h"
#import "NSCopying.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface WDFont : XXUnknownSuperclass <NSCopying> {
@private
	NSString* mName;
	NSString* mSecondName;
	int mFontFamily;
	int mCharacterSet;
	int mPitch;
}
@property(assign) int pitch;	// converted property
@property(assign) int characterSet;	// converted property
@property(assign) int fontFamily;	// converted property
@property(retain) id secondName;	// converted property
@property(retain) id name;	// converted property
-(BOOL)isEqual:(id)equal;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(id)initWithName:(id)name;
-(id)init;
// converted property setter: -(void)setPitch:(int)pitch;
// converted property getter: -(int)pitch;
// converted property setter: -(void)setCharacterSet:(int)set;
// converted property getter: -(int)characterSet;
// converted property setter: -(void)setFontFamily:(int)family;
// converted property getter: -(int)fontFamily;
// converted property setter: -(void)setSecondName:(id)name;
// converted property getter: -(id)secondName;
// converted property setter: -(void)setName:(id)name;
// converted property getter: -(id)name;
@end
