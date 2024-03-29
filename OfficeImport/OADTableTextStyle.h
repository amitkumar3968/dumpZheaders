/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class OADFontReference, OADColor;

__attribute__((visibility("hidden")))
@interface OADTableTextStyle : XXUnknownSuperclass {
@private
	OADFontReference* mFontReference;
	OADColor* mColor;
	int mBold;
	int mItalic;
}
@property(assign) int italic;	// converted property
@property(assign) int bold;	// converted property
@property(retain) id color;	// converted property
@property(retain) id fontReference;	// converted property
+(id)defaultStyle;
+(int)defaultItalic;
+(int)defaultBold;
+(id)defaultFontReference;
+(id)defaultColor;
-(void)applyOverridesFrom:(id)from;
-(id)shallowCopy;
// converted property setter: -(void)setItalic:(int)italic;
// converted property getter: -(int)italic;
// converted property setter: -(void)setBold:(int)bold;
// converted property getter: -(int)bold;
// converted property setter: -(void)setColor:(id)color;
// converted property getter: -(id)color;
// converted property setter: -(void)setFontReference:(id)reference;
// converted property getter: -(id)fontReference;
-(void)dealloc;
-(id)init;
@end

