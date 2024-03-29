/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "EDReference.h"


__attribute__((visibility("hidden")))
@interface EDSheetReference : EDReference {
@private
	int mSheetIndex;
}
+(id)referenceWithSheetIndex:(int)sheetIndex firstRow:(int)row lastRow:(int)row3 firstColumn:(int)column lastColumn:(int)column5;
-(void)unionWithReference:(id)reference;
-(bool)fullyAdjacentToReference:(id)reference;
-(int)sheetIndex;
-(bool)isSheedIndexValid;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(BOOL)isEqualToTableReference:(id)tableReference;
-(id)initWithSheetIndex:(int)sheetIndex firstRow:(int)row lastRow:(int)row3 firstColumn:(int)column lastColumn:(int)column5;
-(id)init;
@end

