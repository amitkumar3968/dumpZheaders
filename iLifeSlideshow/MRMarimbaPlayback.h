/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */



@protocol MRMarimbaPlayback
-(void)removeEffectContainersBeforeTime:(double)time;
-(void)whenTransitionIsFinishedSendAction:(SEL)action toTarget:(id)target;
-(BOOL)isInFade;
-(BOOL)isInTransition;
-(void)gotoSlide:(id)slide;
-(void)gotoPreviousSlide;
-(void)gotoNextSlide;
-(id)currentSlides;
-(id)currentSlide;
-(void)moveToSubtitleForSlide:(id)slide;
-(void)moveToTitleSlide;
-(void)moveToPreviousEffectContainer;
-(void)moveToNextEffectContainer;
-(void)moveToEffectContainer:(id)effectContainer withStartOffset:(double)startOffset toStopOffset:(double)stopOffset blocking:(BOOL)blocking;
-(id)displayedEffectContainers;
-(double)relativeTimeForLayer:(id)layer;
-(double)relativeTimeForBackgroundAudio;
-(double)relativeTime;
@end

