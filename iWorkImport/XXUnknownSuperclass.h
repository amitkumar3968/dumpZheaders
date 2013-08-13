/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface XXUnknownSuperclass (GQDTNumberFormatUtility)
-(void)insertCharacter:(unsigned short)character atIndex:(unsigned short)index;
@end

@interface XXUnknownSuperclass (GQCustomNumberFormatAdditions)
+(id)customNumberFormatDecimalFormatStringWithDigits:(unsigned)digits digitString:(id)string includeDecimalSeparator:(BOOL)separator;
+(id)customNumberFormatDecimalTokenRepresentedStringWithDigits:(unsigned)digits digitString:(id)string;
+(id)customNumberFormatDecimalTokenDisplayStringWithDigits:(unsigned)digits digitString:(id)string;
+(id)customNumberFormatIntegerFormatStringWithDigits:(unsigned)digits digitString:(id)string;
+(id)customNumberFormatIntegerTokenRepresentedStringWithDigits:(unsigned)digits separator:(BOOL)separator digitString:(id)string;
+(id)customNumberFormatIntegerTokenDisplayStringWithDigits:(unsigned)digits separator:(BOOL)separator digitString:(id)string;
+(id)customNumberFormatTokenStringOfType:(int)type content:(id)content;
-(unsigned short)spaceCharacterInCustomNumberFormatSpaceToken;
-(unsigned short)scaleCharacterInCustomNumberFormatScaleToken;
-(id)formatStringFromCustomNumberFormatScaleToken;
-(int)fractionAccuracyFromCustomNumberFormatFractionToken;
-(id)currencyCodeFromCustomNumberFormatCurrencyToken;
-(id)digitPlaceholderStringInDigitToken;
-(unsigned)numberOfDigitsInCustomNumberFormatDecimalToken;
-(id)stringByInsertingGroupingSeparators;
-(BOOL)customFormatIntegerTokenUsesSeparator;
-(unsigned)numberOfDigitsInCustomNumberFormatIntegerToken;
-(BOOL)isSpecialCustomNumberFormatTokenOfType:(int)type;
-(BOOL)isSpecialCustomNumberFormatToken;
@end

@interface XXUnknownSuperclass (GQUAdditions)
-(CGAffineTransform)cgAffineTransform;
-(id)initWithCGAffineTransform:(CGAffineTransform)cgaffineTransform;
-(float)angle;
-(BOOL)isAxisAligned;
-(void)shearXBy:(float)by yBy:(float)by2;
-(CGRect)boundsOfTransformedRect:(CGRect)transformedRect;
-(void)transformRect:(CGRect)rect upperLeft:(CGPoint*)left lowerLeft:(CGPoint*)left3 lowerRight:(CGPoint*)right upperRight:(CGPoint*)right5;
-(BOOL)differOnlyByTranslation:(id)translation;
-(BOOL)differsFrom:(id)from;
-(id)description;
@end

@interface XXUnknownSuperclass (GQFormatStringUtilities)
+(id)numberSymbols;
-(id)prefixOfNumberFormatSubpattern;
-(int)indexOfFirstNonPrefixCharacterInNumberFormatSubpattern;
-(id)suffixOfNumberFormatSubpattern;
-(int)indexOfLastNonSuffixCharacterInNumberFormatSubpattern;
-(id)numberPortionOfNumberFormatSubpattern;
-(id)negativeSubpatternOfNumberFormatPattern;
-(id)positiveSubpatternOfNumberFormatPattern;
-(int)indexOfNumberFormatSubpatternSeparator;
-(id)stringByRemovingEscapedCharactersFromNumberFormatPattern;
-(id)createRangesOfEscapedCharactersInNumberFormatPattern;
-(BOOL)isNumberFormatPattern;
-(id)createStringBySubstitutingCharactersCFNumberFormatterDoesntUnderstand;
@end

@interface XXUnknownSuperclass (SFUtilityAdditions)
+(void)errnoRaise:(id)raise format:(id)format;
-(int)localErrno;
@end

