/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "MFObject.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class TSUColor;

__attribute__((visibility("hidden")))
@interface MFPen : XXUnknownSuperclass <MFObject> {
@private
	int m_penStyle;
	long m_penWidth;
	TSUColor* m_colour;
	double* m_userStyleArray;
}
+(id)penWithStyle:(int)style width:(long)width colour:(id)colour styleArray:(double*)array;
+(id)pen;
-(int)getStyle;
-(long)getWidth;
-(id)getColor;
-(int)selectInto:(id)into;
-(void)dealloc;
-(id)initWithStyle:(int)style width:(long)width colour:(id)colour styleArray:(double*)array;
-(id)init;
@end

