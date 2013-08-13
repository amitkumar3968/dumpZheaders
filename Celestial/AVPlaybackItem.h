/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import "Celestial-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary, AVItem;

@interface AVPlaybackItem : XXUnknownSuperclass {
	id _delegate;
	AVItem* _avItem;
	OpaqueFigPlaybackItem* _fpItem;
	XXStruct_pwHToB _currentDuration;
	CGSize _currentSize;
	BOOL _currentSizeIsValid;
	BOOL _isPreparingForInspectionInitialSamples;
	BOOL _isPreparingForInspectionAccurateDuration;
	BOOL _isInPlayQueue;
	double _bookmarkTime;
	NSDictionary* _streamStateNotificationInfo;
	NSDictionary* _lyricsNotificationInfo;
	NSDictionary* _inspectionNotificationInfo;
	NSDictionary* _playToEndNotificationInfo;
}
@property(assign) BOOL isPreparingForInspectionAccurateDuration;	// @synthesize=_isPreparingForInspectionAccurateDuration
@property(assign) BOOL isPreparingForInspectionInitialSamples;	// @synthesize=_isPreparingForInspectionInitialSamples
@property(readonly, assign) BOOL isPreparingForInspection;
@property(assign) BOOL isInPlayQueue;	// @synthesize=_isInPlayQueue
@property(retain) NSDictionary* lyricsNotificationInfo;	// @synthesize=_lyricsNotificationInfo
@property(retain) NSDictionary* streamStateNotificationInfo;	// @synthesize=_streamStateNotificationInfo
@property(retain) NSDictionary* playToEndNotificationInfo;	// @synthesize=_playToEndNotificationInfo
@property(retain) NSDictionary* inspectionNotificationInfo;	// @synthesize=_inspectionNotificationInfo
@property(readonly, retain) AVItem* avItem;	// converted property
@property(readonly, assign) OpaqueFigPlaybackItem* fpItem;	// converted property
+(id)convertFigTimeDictionaryToTimeIntervalWithKey:(id)key stringURLToNSURLWithKey:(id)key2 inArrayOfDictionaries:(id)dictionaries;
// declared property setter: -(void)setIsPreparingForInspectionAccurateDuration:(BOOL)inspectionAccurateDuration;
// declared property getter: -(BOOL)isPreparingForInspectionAccurateDuration;
// declared property setter: -(void)setIsPreparingForInspectionInitialSamples:(BOOL)inspectionInitialSamples;
// declared property getter: -(BOOL)isPreparingForInspectionInitialSamples;
// declared property setter: -(void)setIsInPlayQueue:(BOOL)playQueue;
// declared property getter: -(BOOL)isInPlayQueue;
// declared property setter: -(void)setLyricsNotificationInfo:(id)info;
// declared property getter: -(id)lyricsNotificationInfo;
// declared property setter: -(void)setStreamStateNotificationInfo:(id)info;
// declared property getter: -(id)streamStateNotificationInfo;
// declared property setter: -(void)setPlayToEndNotificationInfo:(id)endNotificationInfo;
// declared property getter: -(id)playToEndNotificationInfo;
// declared property setter: -(void)setInspectionNotificationInfo:(id)info;
// declared property getter: -(id)inspectionNotificationInfo;
-(id)evenlySpacedThumbnailTimesFromStartTime:(double)startTime toEndTime:(double)endTime maxCount:(int)count;
-(id)nextThumbnailTimesStartingAt:(double)at minimumInterval:(double)interval forwards:(BOOL)forwards maxCount:(int)count;
-(void)stealControlOfAVItem;
-(void)setBookmarkTime:(double)time;
// converted property getter: -(OpaqueFigPlaybackItem*)fpItem;
// converted property getter: -(id)avItem;
-(void)fpItemNotificationInfo:(id)info;
-(void)fpItemNotificationName:(id)name userInfo:(id)info;
-(void)removeFromPlayQueue:(OpaqueFigPlayer*)playQueue;
-(BOOL)addToPlayQueue:(OpaqueFigPlayer*)playQueue afterItem:(OpaqueFigPlaybackItem*)item;
-(void)makeReadyForInspection;
-(void)ensureFPItem;
-(void)applyBookmarkTime;
-(id)propertiesNeededForInspection;
-(void)applyAttributesFromAVItemToFPItem:(id)fpitem;
-(void)removeFPListeners;
-(void)addFPListeners;
-(id)fpNotificationNames;
-(void)setItemAttribute:(id)attribute value:(id)value forKey:(id)key error:(id*)error;
-(void)setAttribute:(id)attribute forKey:(id)key;
-(id)itemAttribute:(id)attribute forKey:(id)key;
-(id)attributeForKey:(id)key;
-(id)formatDetailsForTracks;
-(void)cacheCurrentDuration;
-(void)cacheCurrentSize;
// declared property getter: -(BOOL)isPreparingForInspection;
-(void)dealloc;
-(void)release;
-(id)initWithDelegate:(id)delegate item:(id)item;
@end

