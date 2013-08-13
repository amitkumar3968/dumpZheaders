/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "NSCopying.h"
#import "OfficeImport-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class OADStyleMatrixReference, OADFontReference;

__attribute__((visibility("hidden")))
@interface OADShapeStyle : XXUnknownSuperclass <NSCopying> {
@private
	OADStyleMatrixReference* mLineReference;
	OADStyleMatrixReference* mFillReference;
	OADStyleMatrixReference* mEffectReference;
	OADFontReference* mFontReference;
}
@property(retain) id fontReference;	// converted property
@property(retain) id effectReference;	// converted property
@property(retain) id fillReference;	// converted property
@property(retain) id lineReference;	// converted property
// converted property setter: -(void)setFontReference:(id)reference;
// converted property getter: -(id)fontReference;
-(void)setEffectMatrixIndex:(unsigned long)index color:(id)color;
// converted property setter: -(void)setEffectReference:(id)reference;
// converted property getter: -(id)effectReference;
-(void)setFillMatrixIndex:(unsigned long)index color:(id)color;
// converted property setter: -(void)setFillReference:(id)reference;
// converted property getter: -(id)fillReference;
-(void)setLineMatrixIndex:(unsigned long)index color:(id)color;
// converted property setter: -(void)setLineReference:(id)reference;
// converted property getter: -(id)lineReference;
-(void)applyToParagraphProperties:(id)paragraphProperties;
-(void)applyToTextListStyle:(id)textListStyle;
-(void)applyToTextBody:(id)textBody;
-(void)applyToGraphicProperties:(id)graphicProperties styleMatrix:(id)matrix useNull:(BOOL)null strokeWidthMultiplier:(float)multiplier;
-(void)applyToGraphicProperties:(id)graphicProperties styleMatrix:(id)matrix;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
@end
