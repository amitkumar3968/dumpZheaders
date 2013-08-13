/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "GQDNameMappable.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, NSIndexSet;

__attribute__((visibility("hidden")))
@interface GQDTNumberFormat : XXUnknownSuperclass <GQDNameMappable> {
@private
	char* mUid;
	CFStringRef mFormatString;
	CFStringRef mCurrencyCode;
	long mDecimalPlaces;
	BOOL mUseAccountingStyle;
	BOOL mShowThousandsSeparator;
	int mValueType;
	int mNegativeStyle;
	int mFractionAccuracy;
	BOOL mFormatStringRequiresSuppressionOfMinusSign;
	double mScaleFactor;
	BOOL mIsCustom;
	BOOL mRequiresFractionReplacement;
	unsigned char mNumberOfNonSpaceIntegerPlaceholderDigits;
	unsigned char mNumberOfNonSpaceDecimalPlaceholderDigits;
	unsigned short mIndexFromRightOfLastDigitPlaceholder;
	unsigned char mBase;
	unsigned short mBasePlaces;
	BOOL mBaseUsesMinusSign;
	BOOL mUseScientificFormattingAutomatically;
	BOOL mIgnoreDecimalPlacesForZeroValue;
	BOOL mIsTextFormat;
	BOOL mFormatContainsSpecialTokens;
	BOOL mFormatContainsIntegerToken;
	NSArray* mInterstitialStrings;
	NSIndexSet* mInterstitialStringInsertionIndexes;
	unsigned char mMinimumIntegerWidth;
	unsigned char mDecimalWidth;
	CFStringRef mSuffixString;
}
+(const StateSpec*)stateForReading;
+(id)numberFormatWithValueType:(int)valueType formatString:(id)string decimalPlaces:(unsigned short)places currencyCode:(id)code useAccountingStyle:(BOOL)style negativeStyle:(int)style6 showThousandsSeparator:(BOOL)separator fractionAccuracy:(int)accuracy suffixString:(CFStringRef)string9;
+(BOOL)needToSuppressMinusSignForFormatString:(CFStringRef)formatString;
-(BOOL)useAccountingStyle;
-(int)valueType;
-(CFStringRef)createStringFromDouble:(double)aDouble;
-(id)stringFromDouble:(double)aDouble;
-(BOOL)hasValidDecimalPlaces;
-(void)dealloc;
-(int)fractionAccuracy;
-(BOOL)isTextFormat;
-(BOOL)isCustom;
-(id)customNumberFormatTokens;
-(BOOL)showThousandsSeparator;
-(id)currencyCode;
-(id)formatString;
-(id)numberFormatBySettingValueType:(int)type;
-(id)numberFormatBySettingNegativeStyle:(int)style;
-(void)setUseScientificFormattingAutomatically:(BOOL)automatically;
-(id)baseStringFromDouble:(double)aDouble;
-(id)fractionStringFromDouble:(double)aDouble;
-(id)initWithValueType:(int)valueType formatString:(id)string decimalPlaces:(unsigned short)places currencyCode:(id)code useAccountingStyle:(BOOL)style negativeStyle:(int)style6 showThousandsSeparator:(BOOL)separator fractionAccuracy:(int)accuracy suffixString:(CFStringRef)string9 scaleFactor:(double)factor base:(unsigned short)base basePlaces:(unsigned short)places12 baseUseMinusSign:(BOOL)sign isCustom:(BOOL)custom interstitialStrings:(id)strings interstitialStringInsertionIndexes:(id)indexes indexFromRightOfLastDigitPlaceholder:(unsigned short)lastDigitPlaceholder minimumIntegerWidth:(unsigned char)width decimalWidth:(unsigned char)width19 numberOfNonSpaceIntegerPlaceholderDigits:(unsigned char)nonSpaceIntegerPlaceholderDigits numberOfNonSpaceDecimalPlaceholderDigits:(unsigned char)nonSpaceDecimalPlaceholderDigits isTextFormat:(BOOL)format formatName:(id)name;
-(int)readAttributesFromReader:(xmlTextReader*)reader;
@end

