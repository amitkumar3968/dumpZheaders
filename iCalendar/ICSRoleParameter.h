/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import "ICSPredefinedValue.h"


@interface ICSRoleParameter : ICSPredefinedValue {
}
+(id)roleParameterFromCode:(int)code;
+(id)roleParameterFromICSString:(id)icsstring;
-(void)_ICSStringWithOptions:(unsigned)options appendingToString:(id)string;
@end
