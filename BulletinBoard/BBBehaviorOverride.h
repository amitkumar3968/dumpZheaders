/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import "BulletinBoard-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray;

@interface BBBehaviorOverride : XXUnknownSuperclass <NSCopying, NSCoding> {
@private
	unsigned _overrideType;
	unsigned _mode;
	NSArray* _effectiveIntervals;
}
@property(copy, nonatomic) NSArray* effectiveIntervals;	// @synthesize=_effectiveIntervals
@property(assign, nonatomic) unsigned mode;	// @synthesize=_mode
@property(assign, nonatomic) unsigned overrideType;	// @synthesize=_overrideType
// declared property setter: -(void)setEffectiveIntervals:(id)intervals;
// declared property getter: -(id)effectiveIntervals;
// declared property setter: -(void)setMode:(unsigned)mode;
// declared property getter: -(unsigned)mode;
// declared property setter: -(void)setOverrideType:(unsigned)type;
// declared property getter: -(unsigned)overrideType;
-(id)nextOverrideTransitionDateAfterDate:(id)date;
-(BOOL)isActiveForDate:(id)date;
-(id)copyWithZone:(NSZone*)zone;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
-(id)description;
-(void)dealloc;
-(id)initWithOverrideType:(unsigned)overrideType mode:(unsigned)mode effectiveIntervals:(id)intervals;
-(id)initWithEffectiveIntervals:(id)effectiveIntervals overrideType:(unsigned)type;
@end

