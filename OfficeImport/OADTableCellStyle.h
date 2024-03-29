/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class OADFill, OADTableCellBorderStyle;

__attribute__((visibility("hidden")))
@interface OADTableCellStyle : XXUnknownSuperclass {
@private
	OADTableCellBorderStyle* mBorderStyle;
	OADFill* mFill;
}
@property(retain) id fill;	// converted property
@property(retain) id borderStyle;	// converted property
+(id)defaultStyle;
+(id)defaultFill;
-(void)applyOverridesFrom:(id)from;
-(id)shallowCopy;
// converted property setter: -(void)setFill:(id)fill;
// converted property getter: -(id)fill;
// converted property setter: -(void)setBorderStyle:(id)style;
// converted property getter: -(id)borderStyle;
-(void)dealloc;
@end

