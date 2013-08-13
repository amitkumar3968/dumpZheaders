/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSURL, NSMutableDictionary, NSDictionary, NSString, NSDate, NSArray, UILocalNotification;
@protocol AlarmDelegate;

@interface Alarm : XXUnknownSuperclass {
	NSString* _id;
	NSURL* _idUrl;
	NSMutableDictionary* _settings;
	UILocalNotification* _notification;
	UILocalNotification* _weeklyNotifications[7];
	UILocalNotification* _snoozedNotification;
	unsigned _hour;
	unsigned _minute;
	unsigned _daySetting;
	NSArray* _repeatDays;
	BOOL _allowsSnooze;
	int _soundType;
	NSString* _sound;
	NSString* _title;
	NSDate* _lastModified;
	unsigned _revision;
	id<AlarmDelegate> _delegate;
	Alarm* _editingProxy;
	BOOL _pretendActiveIfProxy;
@private
	int _snapshotSoundType;
	NSString* _snapshotSound;
}
@property(assign, nonatomic) id<AlarmDelegate> delegate;	// @synthesize=_delegate
@property(readonly, assign, nonatomic) unsigned revision;	// @synthesize=_revision
@property(readonly, assign, nonatomic) NSDate* lastModified;	// @synthesize=_lastModified
@property(readonly, assign, nonatomic) NSString* rawTitle;
@property(readonly, assign, nonatomic) NSString* uiTitle;
@property(readonly, assign, nonatomic) NSString* snapshotSound;	// @synthesize=_snapshotSound
@property(readonly, assign, nonatomic) int snapshotSoundType;	// @synthesize=_snapshotSoundType
@property(readonly, assign, nonatomic) NSString* sound;	// @synthesize=_sound
@property(readonly, assign, nonatomic) int soundType;	// @synthesize=_soundType
@property(assign, nonatomic) BOOL allowsSnooze;	// @synthesize=_allowsSnooze
@property(assign, nonatomic) unsigned daySetting;	// @synthesize=_daySetting
@property(readonly, assign, nonatomic) NSArray* repeatDays;
@property(readonly, assign, nonatomic) BOOL repeats;
@property(assign, nonatomic) unsigned minute;	// @synthesize=_minute
@property(assign, nonatomic) unsigned hour;	// @synthesize=_hour
@property(readonly, assign, nonatomic, getter=isSnoozed) BOOL snoozed;
@property(readonly, assign, nonatomic, getter=isActive) BOOL active;
@property(readonly, assign, nonatomic) NSDictionary* settings;
@property(readonly, assign, nonatomic) NSURL* alarmIdUrl;
@property(readonly, assign, nonatomic) NSString* alarmId;
@property(readonly, assign, nonatomic) Alarm* editingProxy;	// @synthesize=_editingProxy
+(id)_newSettingsFromNotification:(id)notification;
+(BOOL)_verifyNotificationSettings:(id)settings againstUserInfo:(id)info;
+(BOOL)_verifyNotificationSettings:(id)settings againstAlarmSettings:(id)settings2;
+(BOOL)verifySettings:(id)settings;
+(BOOL)verifyDaySetting:(id)setting withMessageList:(id)messageList;
+(BOOL)verifyMinuteSetting:(id)setting withMessageList:(id)messageList;
+(BOOL)verifyHourSetting:(id)setting withMessageList:(id)messageList;
+(BOOL)verifyIdSetting:(id)setting withMessageList:(id)messageList;
+(BOOL)isSnoozeNotification:(id)notification;
// declared property getter: -(id)snapshotSound;
// declared property getter: -(unsigned)minute;
// declared property getter: -(int)snapshotSoundType;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property getter: -(id)delegate;
// declared property getter: -(unsigned)hour;
// declared property getter: -(id)editingProxy;
// declared property getter: -(id)lastModified;
// declared property getter: -(id)sound;
// declared property getter: -(BOOL)allowsSnooze;
// declared property getter: -(unsigned)revision;
// declared property getter: -(int)soundType;
// declared property getter: -(unsigned)daySetting;
-(id)description;
-(id)debugDescription;
-(void)setTitle:(id)title;
// declared property getter: -(id)rawTitle;
// declared property getter: -(id)uiTitle;
-(void)setSound:(id)sound ofType:(int)type;
// declared property setter: -(void)setAllowsSnooze:(BOOL)snooze;
// declared property setter: -(void)setDaySetting:(unsigned)setting;
// declared property getter: -(id)repeatDays;
// declared property getter: -(BOOL)repeats;
// declared property getter: -(BOOL)isSnoozed;
// declared property getter: -(BOOL)isActive;
// declared property setter: -(void)setMinute:(unsigned)minute;
// declared property setter: -(void)setHour:(unsigned)hour;
// declared property getter: -(id)settings;
// declared property getter: -(id)alarmIdUrl;
// declared property getter: -(id)alarmId;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(id)nextFireDateAfterDate:(id)date notification:(id)notification day:(int)day;
-(id)nextFireDate;
-(int)compareTime:(id)time;
-(void)markModified;
-(void)handleNotificationSnoozed:(id)snoozed notifyDelegate:(BOOL)delegate;
-(void)handleAlarmFired:(id)fired;
-(void)refreshActiveState;
-(void)dropNotifications;
-(void)cancelNotifications;
-(void)scheduleNotifications;
-(void)prepareNotifications;
-(id)_newNotification:(int)notification;
-(id)_newBaseDateComponentsForDay:(int)day;
-(BOOL)tryAddNotification:(id)notification;
-(unsigned)_notificationsCount;
-(id)timeZoneForOffsetCalculation;
-(id)nowDateForOffsetCalculation;
-(void)dropEditingProxy;
-(void)applyChangesFromEditingProxy;
-(void)prepareEditingProxy;
-(void)applySettings:(id)settings;
-(void)dealloc;
-(id)initWithDefaultValues;
-(id)initWithNotification:(id)notification;
-(id)initWithSettings:(id)settings;
-(id)init;
@end

