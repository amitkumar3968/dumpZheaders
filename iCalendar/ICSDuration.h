/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import "NSCoding.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface ICSDuration : XXUnknownSuperclass <NSCoding> {
	double _duration;
}
+(id)generateDurationFromICSString:(id)icsstring;
+(id)durationFromICSString:(id)icsstring;
+(id)durationFromRFC2445UTF8String:(const char*)rfc2445UTF8String;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(id)ICSStringWithOptions:(unsigned)options;
-(BOOL)isNegative;
-(int)seconds;
-(int)minutes;
-(int)hours;
-(int)days;
-(int)weeks;
-(double)timeInterval;
-(id)initWithWeeks:(int)weeks days:(int)days hours:(int)hours minutes:(int)minutes seconds:(int)seconds;
-(void)_ICSStringWithOptions:(unsigned)options appendingToString:(id)string;
@end

