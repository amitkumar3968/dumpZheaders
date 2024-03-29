/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
 */

#import <CoreMediaStream/_kMSASFileTransferPushTimerDidStartNotification.h>

@class NSDate;

@interface MSPBTimerContext : _kMSASFileTransferPushTimerDidStartNotification {
@private
	BOOL _isValid;
	NSDate* _date;
}
@property(retain, nonatomic) NSDate* date;	// @synthesize=_date
@property(assign, nonatomic) BOOL isValid;	// @synthesize=_isValid
+(id)contextWithDate:(id)date;
// declared property setter: -(void)setDate:(id)date;
// declared property getter: -(id)date;
// declared property setter: -(void)setIsValid:(BOOL)valid;
// declared property getter: -(BOOL)isValid;
-(void).cxx_destruct;
-(id)init;
@end

