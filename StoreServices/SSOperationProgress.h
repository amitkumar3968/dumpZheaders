/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "StoreServices-Structs.h"
#import "SSXPCCoding.h"
#import "NSCopying.h"

@class NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface SSOperationProgress : XXUnknownSuperclass <SSXPCCoding, NSCopying> {
@private
	BOOL _canPause;
	double _changeRate;
	long long _currentValue;
	NSObject<OS_dispatch_queue>* _dispatchQueue;
	double _estimatedTimeRemaining;
	long long _maxValue;
	long long _normalizedCurrentValue;
	long long _normalizedMaxValue;
	int _operationType;
	NSMutableArray* _snapshotTimes;
	NSMutableArray* _snapshotValues;
	int _units;
}
@property(assign) long long normalizedMaxValue;
@property(assign) long long normalizedCurrentValue;
@property(assign) int units;
@property(assign) long long maxValue;
@property(assign) double estimatedTimeRemaining;
@property(assign) long long currentValue;
@property(assign) double changeRate;
@property(assign) int operationType;
@property(assign) BOOL canPause;
-(void)_updateStatisticsFromSnapshots;
-(id)initWithXPCEncoding:(id)xpcencoding;
-(id)copyXPCEncoding;
-(id)description;
// declared property getter: -(int)units;
-(void)snapshot;
// declared property setter: -(void)setUnits:(int)units;
// declared property setter: -(void)setOperationType:(int)type;
// declared property setter: -(void)setNormalizedMaxValue:(long long)value;
// declared property setter: -(void)setNormalizedCurrentValue:(long long)value;
// declared property setter: -(void)setMaxValue:(long long)value;
// declared property setter: -(void)setEstimatedTimeRemaining:(double)remaining;
// declared property setter: -(void)setCurrentValue:(long long)value;
// declared property setter: -(void)setChangeRate:(double)rate;
// declared property setter: -(void)setCanPause:(BOOL)pause;
-(void)resetSnapshots;
// declared property getter: -(int)operationType;
// declared property getter: -(long long)normalizedMaxValue;
// declared property getter: -(long long)normalizedCurrentValue;
// declared property getter: -(long long)maxValue;
// declared property getter: -(double)estimatedTimeRemaining;
// declared property getter: -(long long)currentValue;
// declared property getter: -(double)changeRate;
// declared property getter: -(BOOL)canPause;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(id)init;
@end

