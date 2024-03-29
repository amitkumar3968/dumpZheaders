/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

#import "NSCopying.h"
#import "NSCoding.h"
#import "MobileBackup-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSDate, NSError;

@interface MBStateInfo : XXUnknownSuperclass <NSCoding, NSCopying> {
	int _state;
	float _progress;
	unsigned _estimatedTimeRemaining;
	NSError* _error;
	NSDate* _date;
}
@property(readonly, assign, nonatomic) NSDate* date;	// @synthesize=_date
@property(readonly, assign, nonatomic) NSError* error;	// @synthesize=_error
@property(readonly, assign, nonatomic) unsigned estimatedTimeRemaining;	// @synthesize=_estimatedTimeRemaining
@property(readonly, assign, nonatomic) float progress;	// @synthesize=_progress
@property(readonly, assign, nonatomic) int state;	// @synthesize=_state
// declared property getter: -(id)date;
// declared property getter: -(id)error;
// declared property getter: -(unsigned)estimatedTimeRemaining;
// declared property getter: -(float)progress;
// declared property getter: -(int)state;
-(id)description;
-(id)dictionaryRepresentation;
-(void)setError:(id)error;
-(void)setEstimatedTimeRemaining:(unsigned)remaining;
-(void)setProgress:(float)progress;
-(void)setState:(int)state;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)zone;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
-(id)initWithDictionaryRepresentation:(id)dictionaryRepresentation;
-(id)initWithState:(int)state progress:(float)progress estimatedTimeRemaining:(unsigned)remaining error:(id)error;
@end

