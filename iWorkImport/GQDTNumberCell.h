/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "GQDTCell.h"

@class GQDTComputedFormatSpec;

__attribute__((visibility("hidden")))
@interface GQDTNumberCell : GQDTCell {
@private
	double mValue;
	GQDTComputedFormatSpec* mComputedFormat;
}
-(int)readAttributesForNCell:(xmlTextReader*)ncell;
-(int)readAttributesForNumberCell:(xmlTextReader*)numberCell;
-(CFStringRef)createStringValue;
-(double)value;
-(void)dealloc;
@end

