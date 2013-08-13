/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMProperty.h"


__attribute__((visibility("hidden")))
@interface CMToggleProperty : CMProperty {
@private
	int wdValue;
}
-(id)cssStringForName:(id)name;
-(id)mapStrikeTrough;
-(id)mapItalic;
-(id)mapBold;
-(void)resolveWithBaseProperty:(id)baseProperty;
-(int)compareValue:(id)value;
-(int)value;
-(id)initWithCMTogglePropertyValue:(int)cmtogglePropertyValue;
@end

