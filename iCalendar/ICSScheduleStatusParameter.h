/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import "ICSPredefinedValue.h"


@interface ICSScheduleStatusParameter : ICSPredefinedValue {
}
+(id)scheduleStatusParameterFromCode:(int)code;
+(id)scheduleStatusParameterFromICSString:(id)icsstring;
-(void)_ICSStringWithOptions:(unsigned)options appendingToString:(id)string;
@end
