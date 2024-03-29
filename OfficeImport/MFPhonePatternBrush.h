/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "MFPhoneBrush.h"

@class MFPhoneBitmap;

__attribute__((visibility("hidden")))
@interface MFPhonePatternBrush : MFPhoneBrush {
@private
	MFPhoneBitmap* m_pattern;
	BOOL m_usePaletteForBilevel;
}
+(id)patternBrushWithBitmap:(id)bitmap usePaletteForBilevel:(BOOL)bilevel;
-(void)fillPath:(id)path :(CGPathRef)arg2;
-(void)dealloc;
-(id)initWithBitmap:(id)bitmap usePaletteForBilevel:(BOOL)bilevel;
@end

