/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "PBSlideBase.h"


__attribute__((visibility("hidden")))
@interface PBSlideMaster : PBSlideBase {
}
+(void)writeSlideMaster:(id)master presentationState:(id)state;
+(void)writeSlideMasterOrLayout:(id)layout presentationState:(id)state;
+(void)flattenPlaceholderTextStylesIntoLayout:(id)layout layoutType:(int)type masterStyleMap:(id)map;
+(void)readSlideMasterStyles:(id)styles slideHolder:(id)holder state:(id)state;
+(void)setFont:(id)font fromCharacterProperties:(id)characterProperties;
+(void)setCannedOtherTextListStyle:(id)style;
+(void)padMissingLevels:(id)levels;
+(id)createMasterStyleMap:(id)map state:(id)state;
+(void)flattenMasterStyleType:(int)type baseType:(int)type2 masterStyleMap:(id)map;
+(void)flattenBaseMasterStyleType:(int)type masterStyleMap:(id)map;
+(void)readSlideLayout:(id)layout slideHolder:(id)holder layoutType:(int)type state:(id)state;
+(void)readMasterDrawables:(id)drawables slideHolder:(id)holder state:(id)state;
+(void)flattenTextStyle:(id)style intoTextBox:(id)box;
+(id)textBodyForPlaceholderType:(int)placeholderType slideLayout:(id)layout;
+(int)textTypeFor:(int)aFor placeholderType:(int)type;
@end

