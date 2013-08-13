/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import "ICSComponent.h"

@class ICSColor, NSMutableSet, NSMutableDictionary, NSMutableArray, NSString, ICSDuration;

@interface ICSCalendar : ICSComponent {
	NSMutableSet* _keys;
	NSMutableDictionary* _masters;
	NSMutableDictionary* _occurrences;
	NSMutableDictionary* _timezones;
	NSMutableArray* _parsingErrors;
}
@property(assign) int x_calendarserver_access;	// @dynamic
@property(retain) NSString* x_wr_timezone;
@property(retain) NSString* x_wr_relcalid;
@property(retain) NSString* x_wr_calname;
@property(retain) NSString* x_wr_caldesc;
@property(assign) BOOL x_apple_ignore_on_restore;	// @dynamic
@property(retain) ICSColor* x_apple_calendar_color;
@property(retain) ICSDuration* x_apple_auto_refresh;
@property(retain) NSString* version;
@property(retain) NSString* prodid;
@property(assign) int method;
@property(retain) NSString* calscale;
@property(readonly, retain) NSMutableArray* parsingErrors;	// converted property
+(id)ICSStringFromCalendarServerAccess:(int)calendarServerAccess;
+(int)calendarServerAccessFromICSString:(id)icsstring;
+(id)ICSStringFromMethod:(int)method;
+(int)methodFromICSString:(id)icsstring;
+(id)defaultProdid;
+(void)setDefaultProdid:(id)prodid;
+(id)name;
+(id)calendarWithKnownTimeZones;
// converted property getter: -(id)parsingErrors;
-(void)addParsingError:(id)error;
-(id)timeZoneForKey:(id)key;
-(void)addComponent:(id)component;
-(void)setComponents:(id)components;
-(void)setComponents:(id)components options:(int)options;
-(void)setComponents:(id)components timeZones:(BOOL)zones;
-(id)componentOccurrencesForKey:(id)key;
-(id)componentForKey:(id)key;
-(id)componentKeys;
-(void)_addComponent:(id)component;
-(id)_timeZonesForComponents:(id)components options:(int)options;
-(void)_addTimeZonesInComponent:(id)component toDictionary:(id)dictionary;
-(void)_addTimeZonesInComponent:(id)component toSet:(id)set;
-(id)systemDateForDate:(id)date options:(int)options;
-(id)systemCalendarForDate:(id)date options:(int)options;
-(id)systemTimeZoneForDate:(id)date;
// declared property setter: -(void)setX_wr_timezone:(id)timezone;
// declared property getter: -(id)x_wr_timezone;
// declared property setter: -(void)setX_wr_relcalid:(id)relcalid;
// declared property getter: -(id)x_wr_relcalid;
// declared property setter: -(void)setX_wr_calname:(id)calname;
// declared property getter: -(id)x_wr_calname;
// declared property getter: -(id)x_wr_caldesc;
// declared property setter: -(void)setX_wr_caldesc:(id)caldesc;
// declared property setter: -(void)setX_apple_calendar_color:(id)color;
// declared property getter: -(id)x_apple_calendar_color;
// declared property setter: -(void)setX_apple_auto_refresh:(id)refresh;
// declared property getter: -(id)x_apple_auto_refresh;
// declared property setter: -(void)setVersion:(id)version;
// declared property getter: -(id)version;
// declared property setter: -(void)setProdid:(id)prodid;
// declared property getter: -(id)prodid;
// declared property setter: -(void)setMethod:(int)method;
// declared property getter: -(int)method;
// declared property setter: -(void)setCalscale:(id)calscale;
// declared property getter: -(id)calscale;
-(void)dealloc;
-(id)init;
-(id)_init;
-(void)fixEntities;
-(void)fixComponent;
-(void)fixPropertiesInheritance;
@end

