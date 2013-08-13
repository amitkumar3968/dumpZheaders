/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface PBParagraphProperties : XXUnknownSuperclass {
}
+(void)writeTabStopsFromParagraphProperties:(id)paragraphProperties toParagraphProperties:(PptParaProperty*)paragraphProperties2 state:(id)state;
+(void)writeParagraphProperties:(id)properties paragraphProperties:(PptParaProperty*)properties2 bulletStyle:(PptParaProperty9*)style state:(id)state;
+(void)readParagraphProperties:(id)properties paragraphProperty:(PptParaProperty*)property bulletStyle:(PptParaProperty9*)style isMaster:(BOOL)master state:(id)state;
+(void)readParagraphProperties:(id)properties paragraphPropertyRun:(PptParaRun*)run bulletStyle:(PptParaProperty9*)style state:(id)state;
+(int)pptFontAlignWithOADTextFontAlign:(int)oadtextFontAlign;
+(int)pptAlignmentTypeWithOADTextAlignType:(int)oadtextAlignType;
+(short)pptTextSpacingWithOADParaSpacing:(id)oadparaSpacing defaultPptParaSpacing:(short)spacing;
+(void)readAlign:(id)align pptAlignmentType:(int)type;
@end
