/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class OADTableTextStyle, OADTableCellStyle;

__attribute__((visibility("hidden")))
@interface OADTablePartStyle : XXUnknownSuperclass {
@private
	OADTableTextStyle* mTextStyle;
	OADTableCellStyle* mCellStyle;
}
@property(retain) id cellStyle;	// converted property
@property(retain) id textStyle;	// converted property
+(id)defaultStyle;
-(void)applyOverridesFrom:(id)from;
-(id)shallowCopy;
// converted property setter: -(void)setCellStyle:(id)style;
// converted property getter: -(id)cellStyle;
// converted property setter: -(void)setTextStyle:(id)style;
// converted property getter: -(id)textStyle;
-(void)dealloc;
@end

