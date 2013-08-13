/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "WDRun.h"

@class WDCharacterProperties;

__attribute__((visibility("hidden")))
@interface WDSpecialCharacter : WDRun {
@private
	WDCharacterProperties* mProperties;
	int mType;
}
@property(assign) int characterType;	// converted property
-(id)initWithParagraph:(id)paragraph;
// converted property setter: -(void)setCharacterType:(int)type;
// converted property getter: -(int)characterType;
-(int)runType;
-(void)clearProperties;
-(id)properties;
-(void)dealloc;
@end

