/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

#import "ScreenReaderOutput-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface XXUnknownSuperclass (SCROAttributedStringExtras)
-(id)deepCopyWithZone:(NSZone*)zone;
-(BOOL)getRange:(NSRange*)range ofAttribute:(id)attribute withValue:(id)value;
-(BOOL)getRange:(NSRange*)range ofAttribute:(id)attribute;
@end

@interface XXUnknownSuperclass (SCROBundleExtras)
+(id)tableIdentifiersForLanguageIdentifier:(id)languageIdentifier;
+(id)languageIdentifiersForBrailleTableIdentifier:(id)brailleTableIdentifier;
+(BOOL)doesBrailleTableSupportEightDot:(id)dot;
+(BOOL)doesBrailleTableSupportContractions:(id)contractions;
+(id)_brailleTableDictionaryForBrailleTableIdentifier:(id)brailleTableIdentifier;
+(id)nameForBrailleTableIdentifier:(id)brailleTableIdentifier;
+(id)brailleTableBundleWithTableIdentifier:(id)tableIdentifier;
+(id)brailleTableIdentifiers;
+(id)_brailleTableBundles;
+(id)brailleDriverDeviceDetectionInfo;
+(long)bundleIndexForBrailleDriverIdentifier:(id)brailleDriverIdentifier;
+(id)brailleDriverBundleWithIdentifier:(id)identifier;
+(id)brailleDriverBundles;
-(id)tableIdentifierForBundleSpecificTableIdentifier:(id)bundleSpecificTableIdentifier;
-(id)bundleSpecificTableIdentifierForTableIdentifier:(id)tableIdentifier;
@end

@interface XXUnknownSuperclass (SCROBundleExtras)
-(int)_brailleTableCompare:(id)compare;
@end
