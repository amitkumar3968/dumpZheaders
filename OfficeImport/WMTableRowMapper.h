/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMMapper.h"

@class WDTableRow;

__attribute__((visibility("hidden")))
@interface WMTableRowMapper : CMMapper {
@private
	WDTableRow* mWdTableRow;
	double mHeight;
}
+(BOOL)isTableRowDeleted:(id)deleted;
-(void)mapAt:(id)at withState:(id)state;
-(double)height;
-(id)initWithWDTableRow:(id)wdtableRow parent:(id)parent;
-(void)setRowProperties:(id)properties;
@end

