/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class WDOfficeArt, NSMutableString, WDParagraphProperties, WDCharacterProperties;

__attribute__((visibility("hidden")))
@interface WDListLevel : XXUnknownSuperclass {
@private
	WDParagraphProperties* mParagraphProperties;
	WDCharacterProperties* mCharacterProperties;
	WDOfficeArt* mImage;
	long mStartNumber;
	int mNumberFormat;
	BOOL mRestartNumbering;
	BOOL mLegal;
	int mSuffix;
	NSMutableString* mText;
	BOOL mLegacy;
	long mLegacySpace;
	long mLegacyIndent;
	int mJustification;
}
@property(assign) int justification;	// converted property
@property(assign) long legacyIndent;	// converted property
@property(assign) long legacySpace;	// converted property
@property(assign) BOOL legacy;	// converted property
@property(retain) id text;	// converted property
@property(assign) int suffix;	// converted property
@property(assign) BOOL legal;	// converted property
@property(assign) BOOL restartNumbering;	// converted property
@property(retain) id image;	// converted property
@property(assign) int numberFormat;	// converted property
@property(assign) long startNumber;	// converted property
-(id)characterProperties;
-(id)paragraphProperties;
-(BOOL)justificationOverridden;
// converted property setter: -(void)setJustification:(int)justification;
// converted property getter: -(int)justification;
// converted property setter: -(void)setLegacyIndent:(long)indent;
// converted property getter: -(long)legacyIndent;
// converted property setter: -(void)setLegacySpace:(long)space;
// converted property getter: -(long)legacySpace;
// converted property setter: -(void)setLegacy:(BOOL)legacy;
// converted property getter: -(BOOL)legacy;
-(BOOL)textOverridden;
// converted property setter: -(void)setText:(id)text;
// converted property getter: -(id)text;
-(BOOL)suffixOverridden;
// converted property setter: -(void)setSuffix:(int)suffix;
// converted property getter: -(int)suffix;
-(BOOL)legalOverridden;
// converted property setter: -(void)setLegal:(BOOL)legal;
// converted property getter: -(BOOL)legal;
-(BOOL)restartNumberingOverridden;
// converted property setter: -(void)setRestartNumbering:(BOOL)numbering;
// converted property getter: -(BOOL)restartNumbering;
// converted property setter: -(void)setImage:(id)image;
// converted property getter: -(id)image;
-(BOOL)imageBulletOverridden;
-(BOOL)imageBullet;
-(BOOL)numberFormatOverridden;
// converted property setter: -(void)setNumberFormat:(int)format;
// converted property getter: -(int)numberFormat;
-(BOOL)startNumberOverridden;
// converted property setter: -(void)setStartNumber:(long)number;
// converted property getter: -(long)startNumber;
-(void)dealloc;
-(id)initWithDocument:(id)document;
@end
