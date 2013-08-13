/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface WDRubyProperties : XXUnknownSuperclass {
@private
	unsigned mOriginal : 1;
	XXStruct_RPYF6B* mOriginalProperties;
}
@property(assign, nonatomic) int phoneticGuideLanguage;
@property(assign, nonatomic) unsigned short distanceBetween;
@property(assign, nonatomic) unsigned short baseFontSize;
@property(assign, nonatomic) unsigned short phoneticGuideFontSize;
@property(assign, nonatomic) int alignment;
-(void)clearPhoneticGuideLanguage;
-(BOOL)isPhoneticGuideLanguageOverridden;
// declared property setter: -(void)setPhoneticGuideLanguage:(int)language;
// declared property getter: -(int)phoneticGuideLanguage;
-(void)clearDistanceBetween;
-(BOOL)isDistanceBetweenOverridden;
// declared property setter: -(void)setDistanceBetween:(unsigned short)between;
// declared property getter: -(unsigned short)distanceBetween;
-(void)clearBaseFontSize;
-(BOOL)isBaseFontSizeOverridden;
// declared property setter: -(void)setBaseFontSize:(unsigned short)size;
// declared property getter: -(unsigned short)baseFontSize;
-(void)clearPhoneticGuideFontSize;
-(BOOL)isPhoneticGuideFontSizeOverridden;
// declared property setter: -(void)setPhoneticGuideFontSize:(unsigned short)size;
// declared property getter: -(unsigned short)phoneticGuideFontSize;
-(void)clearAlignment;
-(BOOL)isAlignmentOverridden;
// declared property setter: -(void)setAlignment:(int)alignment;
// declared property getter: -(int)alignment;
-(BOOL)isAnythingOverridden;
-(void)dealloc;
-(id)init;
-(BOOL)isAnythingOverriddenIn:(XXStruct_RPYF6B*)anIn;
@end
