/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSNumber, NSSet;

@interface BBSectionSubtypeParameters : XXUnknownSuperclass {
@private
	BBSectionSubtypeParameters* _fallbackParameters;
	NSString* _topic;
	NSString* _missedBannerDescriptionFormat;
	NSString* _fullUnlockActionLabel;
	NSString* _unlockActionLabel;
	NSSet* _alertSuppressionAppIDs;
	NSNumber* _boxedCoalescesWhenLocked;
	NSNumber* _boxedSuppressesMessageForPrivacy;
	NSNumber* _boxedRealertCount;
	NSNumber* _boxedInertWhenLocked;
	NSNumber* _boxedPreservesUnlockActionCase;
	NSNumber* _boxedBannerShowsSubtitle;
	NSNumber* _boxedVisuallyIndicatesWhenDateIsInFuture;
	NSNumber* _boxedSubtypePriority;
	NSNumber* _boxedIPodOutAlertType;
}
@property(retain, nonatomic) NSNumber* boxedIPodOutAlertType;	// @synthesize=_boxedIPodOutAlertType
@property(retain, nonatomic) NSNumber* boxedSubtypePriority;	// @synthesize=_boxedSubtypePriority
@property(retain, nonatomic) NSNumber* boxedVisuallyIndicatesWhenDateIsInFuture;	// @synthesize=_boxedVisuallyIndicatesWhenDateIsInFuture
@property(retain, nonatomic) NSNumber* boxedBannerShowsSubtitle;	// @synthesize=_boxedBannerShowsSubtitle
@property(retain, nonatomic) NSNumber* boxedPreservesUnlockActionCase;	// @synthesize=_boxedPreservesUnlockActionCase
@property(retain, nonatomic) NSNumber* boxedInertWhenLocked;	// @synthesize=_boxedInertWhenLocked
@property(retain, nonatomic) NSNumber* boxedRealertCount;	// @synthesize=_boxedRealertCount
@property(retain, nonatomic) NSNumber* boxedSuppressesMessageForPrivacy;	// @synthesize=_boxedSuppressesMessageForPrivacy
@property(retain, nonatomic) NSNumber* boxedCoalescesWhenLocked;	// @synthesize=_boxedCoalescesWhenLocked
@property(assign, nonatomic) BBSectionSubtypeParameters* fallbackParameters;	// @synthesize=_fallbackParameters
@property(assign, nonatomic) BOOL visuallyIndicatesWhenDateIsInFuture;
@property(assign, nonatomic) int iPodOutAlertType;
@property(assign, nonatomic) unsigned subtypePriority;
@property(assign, nonatomic) BOOL bannerShowsSubtitle;
@property(assign, nonatomic) BOOL preservesUnlockActionCase;
@property(assign, nonatomic) BOOL inertWhenLocked;
@property(assign, nonatomic) unsigned realertCount;
@property(assign, nonatomic) BOOL suppressesMessageForPrivacy;
@property(assign, nonatomic) BOOL coalescesWhenLocked;
@property(copy, nonatomic) NSSet* alertSuppressionAppIDs;	// @synthesize=_alertSuppressionAppIDs
@property(copy, nonatomic) NSString* unlockActionLabel;	// @synthesize=_unlockActionLabel
@property(copy, nonatomic) NSString* fullUnlockActionLabel;	// @synthesize=_fullUnlockActionLabel
@property(copy, nonatomic) NSString* missedBannerDescriptionFormat;	// @synthesize=_missedBannerDescriptionFormat
@property(copy, nonatomic) NSString* topic;	// @synthesize=_topic
// declared property setter: -(void)setBoxedIPodOutAlertType:(id)type;
// declared property getter: -(id)boxedIPodOutAlertType;
// declared property setter: -(void)setBoxedSubtypePriority:(id)priority;
// declared property getter: -(id)boxedSubtypePriority;
// declared property setter: -(void)setBoxedVisuallyIndicatesWhenDateIsInFuture:(id)future;
// declared property getter: -(id)boxedVisuallyIndicatesWhenDateIsInFuture;
// declared property setter: -(void)setBoxedBannerShowsSubtitle:(id)subtitle;
// declared property getter: -(id)boxedBannerShowsSubtitle;
// declared property setter: -(void)setBoxedPreservesUnlockActionCase:(id)aCase;
// declared property getter: -(id)boxedPreservesUnlockActionCase;
// declared property setter: -(void)setBoxedInertWhenLocked:(id)locked;
// declared property getter: -(id)boxedInertWhenLocked;
// declared property setter: -(void)setBoxedRealertCount:(id)count;
// declared property getter: -(id)boxedRealertCount;
// declared property setter: -(void)setBoxedSuppressesMessageForPrivacy:(id)privacy;
// declared property getter: -(id)boxedSuppressesMessageForPrivacy;
// declared property setter: -(void)setBoxedCoalescesWhenLocked:(id)locked;
// declared property getter: -(id)boxedCoalescesWhenLocked;
// declared property setter: -(void)setAlertSuppressionAppIDs:(id)ids;
// declared property setter: -(void)setUnlockActionLabel:(id)label;
// declared property setter: -(void)setFullUnlockActionLabel:(id)label;
// declared property setter: -(void)setMissedBannerDescriptionFormat:(id)format;
// declared property setter: -(void)setTopic:(id)topic;
// declared property setter: -(void)setFallbackParameters:(id)parameters;
// declared property getter: -(id)fallbackParameters;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
// declared property setter: -(void)setIPodOutAlertType:(int)type;
// declared property setter: -(void)setSubtypePriority:(unsigned)priority;
// declared property setter: -(void)setVisuallyIndicatesWhenDateIsInFuture:(BOOL)future;
// declared property setter: -(void)setBannerShowsSubtitle:(BOOL)subtitle;
// declared property setter: -(void)setPreservesUnlockActionCase:(BOOL)aCase;
// declared property setter: -(void)setInertWhenLocked:(BOOL)locked;
// declared property setter: -(void)setRealertCount:(unsigned)count;
// declared property setter: -(void)setSuppressesMessageForPrivacy:(BOOL)privacy;
// declared property setter: -(void)setCoalescesWhenLocked:(BOOL)locked;
// declared property getter: -(int)iPodOutAlertType;
// declared property getter: -(unsigned)subtypePriority;
// declared property getter: -(BOOL)visuallyIndicatesWhenDateIsInFuture;
// declared property getter: -(BOOL)bannerShowsSubtitle;
// declared property getter: -(BOOL)preservesUnlockActionCase;
// declared property getter: -(BOOL)inertWhenLocked;
// declared property getter: -(unsigned)realertCount;
// declared property getter: -(BOOL)suppressesMessageForPrivacy;
// declared property getter: -(BOOL)coalescesWhenLocked;
// declared property getter: -(id)alertSuppressionAppIDs;
// declared property getter: -(id)unlockActionLabel;
// declared property getter: -(id)fullUnlockActionLabel;
// declared property getter: -(id)missedBannerDescriptionFormat;
// declared property getter: -(id)topic;
-(void)dealloc;
-(id)initWithFallbackParameters:(id)fallbackParameters;
@end

