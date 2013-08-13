/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMMapper.h"

@class WDTableCell;

__attribute__((visibility("hidden")))
@interface WMTableCellMapper : CMMapper {
@private
	WDTableCell* mWdTableCell;
	unsigned mColSpan;
	double mHeight;
	double mWidth;
	double mLeftPadding;
	double mRightPadding;
}
-(void)mapAt:(id)at withState:(id)state;
-(unsigned)colSpan;
-(id)initWithWDTableCell:(id)wdtableCell atIndex:(unsigned)index parent:(id)parent;
-(id)tableMapper;
-(void)mapCellStyleAt:(id)at;
@end
