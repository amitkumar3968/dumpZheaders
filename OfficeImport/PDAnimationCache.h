/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class PDAnimateMotionBehavior, PDBuild, NSString, PDAnimationTargetElement;

__attribute__((visibility("hidden")))
@interface PDAnimationCache : XXUnknownSuperclass {
@private
	int mNodeType;
	int mPresetId;
	int mPresetSubType;
	int mPresetClass;
	PDAnimationTargetElement* mTargetElement;
	BOOL mHasDelay;
	double mDelay;
	BOOL mHasDuration;
	double mDuration;
	BOOL mHasDirection;
	double mDirection;
	BOOL mHasPartCount;
	int mPartCount;
	PDAnimateMotionBehavior* mMotionPath;
	BOOL mHasValue;
	double mValue;
	PDBuild* mBuild;
	int mIterateType;
	BOOL mIsHead;
	int mLevel;
	NSString* mGroupId;
}
@property(retain, nonatomic) PDBuild* build;	// @synthesize=mBuild
@property(assign, nonatomic) int level;	// @synthesize=mLevel
@property(assign, nonatomic) BOOL isHead;	// @synthesize=mIsHead
@property(retain, nonatomic) NSString* groupId;	// @synthesize=mGroupId
@property(assign, nonatomic) double value;	// @synthesize=mValue
@property(assign, nonatomic) BOOL hasValue;	// @synthesize=mHasValue
@property(retain, nonatomic) PDAnimateMotionBehavior* motionPath;	// @synthesize=mMotionPath
@property(assign, nonatomic) int partCount;	// @synthesize=mPartCount
@property(assign, nonatomic) BOOL hasPartCount;	// @synthesize=mHasPartCount
@property(assign, nonatomic) double direction;	// @synthesize=mDirection
@property(assign, nonatomic) BOOL hasDirection;	// @synthesize=mHasDirection
@property(assign, nonatomic) double duration;	// @synthesize=mDuration
@property(assign, nonatomic) BOOL hasDuration;	// @synthesize=mHasDuration
@property(assign, nonatomic) double delay;	// @synthesize=mDelay
@property(assign, nonatomic) BOOL hasDelay;	// @synthesize=mHasDelay
@property(assign, nonatomic) int iterateType;	// @synthesize=mIterateType
@property(assign, nonatomic) int presetClass;	// @synthesize=mPresetClass
@property(assign, nonatomic) int presetSubType;	// @synthesize=mPresetSubType
@property(assign, nonatomic) int presetId;	// @synthesize=mPresetId
@property(assign, nonatomic) int nodeType;	// @synthesize=mNodeType
@property(retain, nonatomic) PDAnimationTargetElement* targetElement;	// @synthesize=mTargetElement
+(id)createAnimationInfoDataForCacheItem:(id)cacheItem order:(unsigned)order;
+(void)loadAnimationCache:(id)cache pdAnimation:(id)animation state:(id)state;
+(void)mapAnimationInfo:(id)info cacheData:(id)data state:(id)state;
+(void)mapCommonData:(id)data cacheData:(id)data2 state:(id)state;
// declared property setter: -(void)setBuild:(id)build;
// declared property getter: -(id)build;
// declared property setter: -(void)setLevel:(int)level;
// declared property getter: -(int)level;
// declared property setter: -(void)setIsHead:(BOOL)head;
// declared property getter: -(BOOL)isHead;
// declared property setter: -(void)setGroupId:(id)anId;
// declared property getter: -(id)groupId;
// declared property getter: -(double)value;
// declared property setter: -(void)setHasValue:(BOOL)value;
// declared property getter: -(BOOL)hasValue;
// declared property setter: -(void)setMotionPath:(id)path;
// declared property getter: -(id)motionPath;
// declared property getter: -(int)partCount;
// declared property setter: -(void)setHasPartCount:(BOOL)count;
// declared property getter: -(BOOL)hasPartCount;
// declared property getter: -(double)direction;
// declared property setter: -(void)setHasDirection:(BOOL)direction;
// declared property getter: -(BOOL)hasDirection;
// declared property getter: -(double)duration;
// declared property setter: -(void)setHasDuration:(BOOL)duration;
// declared property getter: -(BOOL)hasDuration;
// declared property getter: -(double)delay;
// declared property setter: -(void)setHasDelay:(BOOL)delay;
// declared property getter: -(BOOL)hasDelay;
// declared property setter: -(void)setIterateType:(int)type;
// declared property getter: -(int)iterateType;
// declared property setter: -(void)setPresetClass:(int)aClass;
// declared property getter: -(int)presetClass;
// declared property setter: -(void)setPresetSubType:(int)type;
// declared property getter: -(int)presetSubType;
// declared property setter: -(void)setPresetId:(int)anId;
// declared property getter: -(int)presetId;
// declared property setter: -(void)setNodeType:(int)type;
// declared property getter: -(int)nodeType;
// declared property setter: -(void)setTargetElement:(id)element;
// declared property getter: -(id)targetElement;
// declared property setter: -(void)setValue:(double)value;
// declared property setter: -(void)setPartCount:(int)count;
// declared property setter: -(void)setDirection:(double)direction;
// declared property setter: -(void)setDuration:(double)duration;
// declared property setter: -(void)setDelay:(double)delay;
-(void)dealloc;
-(id)initWithAnimationInfo:(id)animationInfo;
@end

