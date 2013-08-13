/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */


@class NSArray, NSObject, NSString;
@protocol MZEffectTiming;

@protocol MPEffectSupport
@property(readonly, assign, nonatomic) NSObject<MZEffectTiming>* effectTiming;
@property(readonly, assign, nonatomic) NSArray* texts;
@property(readonly, assign, nonatomic) NSArray* slides;
@property(copy, nonatomic) NSString* presetID;
@property(copy, nonatomic) NSString* effectID;
@property(assign) int randomSeed;	// converted property
@property(retain) id effectAttributes;	// converted property
// declared property getter: -(id)effectTiming;
// declared property getter: -(id)texts;
// declared property getter: -(id)slides;
// declared property setter: -(void)setPresetID:(id)anId;
// declared property getter: -(id)presetID;
// declared property setter: -(void)setEffectID:(id)anId;
// declared property getter: -(id)effectID;
// converted property setter: -(void)setRandomSeed:(int)seed;
// converted property getter: -(int)randomSeed;
-(void)setEffectAttribute:(id)attribute forKey:(id)key;
-(id)effectAttributeForKey:(id)key;
// converted property setter: -(void)setEffectAttributes:(id)attributes;
// converted property getter: -(id)effectAttributes;
-(void)moveTextsFromIndices:(id)indices toIndex:(int)index;
-(void)removeAllTexts;
-(void)removeTextsAtIndices:(id)indices;
-(void)insertTexts:(id)texts atIndex:(int)index;
-(void)addTexts:(id)texts;
-(void)addText:(id)text;
-(void)removeAllSecondarySlides;
-(void)removeSecondarySlidesAtIndices:(id)indices;
-(void)insertSecondarySlides:(id)slides atIndex:(int)index;
-(void)addSecondarySlides:(id)slides;
-(void)addSecondarySlide:(id)slide;
-(id)secondarySlides;
-(void)moveSlidesFromIndices:(id)indices toIndex:(int)index;
-(void)removeAllSlides;
-(void)removeSlidesAtIndices:(id)indices;
-(void)insertSlides:(id)slides atIndex:(int)index;
-(void)addSlides:(id)slides;
-(void)addSlide:(id)slide;
-(double)mainDuration;
-(double)phaseOutDuration;
-(double)phaseInDuration;
@end
