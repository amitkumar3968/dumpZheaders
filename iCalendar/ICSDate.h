/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import "ICSProperty.h"

@class NSString;

@interface ICSDate : ICSProperty {
}
@property(retain) NSString* tzid;
-(id)description;
-(BOOL)hasFloatingTimeZone;
-(BOOL)hasTimeComponent;
-(id)components;
// declared property getter: -(id)tzid;
// declared property setter: -(void)setTzid:(id)tzid;
-(id)initWithYear:(int)year month:(int)month day:(int)day hour:(int)hour minute:(int)minute second:(int)second timeZone:(id)zone;
-(id)initWithYear:(int)year month:(int)month day:(int)day hour:(int)hour minute:(int)minute second:(int)second;
-(id)initWithYear:(int)year month:(int)month day:(int)day;
-(id)initWithValue:(id)value;
@end

