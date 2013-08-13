/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */

#import "iLifeSlideshow-Structs.h"
#import "MPLayer.h"
#import "MPEffectSupport.h"
#import "MPEffectSupportPrivate.h"

@class NSMutableDictionary, NSString, NSArray, NSObject, NSMutableArray, MCContainerEffect;
@protocol MZEffectTiming;

@interface MPLayerEffect : MPLayer <MPEffectSupportPrivate, MPEffectSupport> {
	MCContainerEffect* _layerEffect;
	NSString* _effectID;
	NSString* _presetID;
	NSMutableArray* _slides;
	NSMutableArray* _secondarySlides;
	NSMutableArray* _texts;
	NSMutableDictionary* _effectAttributes;
	int _randomSeed;
	NSObject<MZEffectTiming>* _effectTiming;
	BOOL _supportsEffectTiming;
	BOOL _skipEffectTiming;
	int _liveIndex;
}
@property(readonly, assign, nonatomic) NSObject<MZEffectTiming>* effectTiming;	// @synthesize=_effectTiming
@property(readonly, assign, nonatomic) NSArray* texts;
@property(readonly, assign, nonatomic) NSArray* slides;
@property(copy, nonatomic) NSString* presetID;
@property(copy, nonatomic) NSString* effectID;
@property(retain) NSMutableDictionary* effectAttributes;	// converted property
@property(assign) int randomSeed;	// converted property
@property(assign) int liveIndex;	// converted property
@property(readonly, retain) NSMutableArray* secondarySlides;	// converted property
+(id)layerEffectWithEffectID:(id)effectID strings:(id)strings paths:(id)paths;
+(id)layerEffectWithEffectID:(id)effectID andStrings:(id)strings;
+(id)layerEffectWithEffectID:(id)effectID andPaths:(id)paths;
+(id)layerEffectWithEffectID:(id)effectID;
// declared property getter: -(id)effectTiming;
-(id)allSlides:(BOOL)slides;
-(void)_updateTiming:(BOOL)timing;
-(id)_effectAttributes;
-(void)_updateEffectTiming;
-(void)setPhaseOutDuration:(double)duration;
-(void)setPhaseInDuration:(double)duration;
-(void)setDuration:(double)duration;
-(double)mainDuration;
-(void)removeAllSecondarySlides;
-(void)moveTextsFromIndices:(id)indices toIndex:(int)index;
-(void)removeAllTexts;
-(void)removeTextsAtIndices:(id)indices;
-(void)insertTexts:(id)texts atIndex:(int)index;
-(void)addTexts:(id)texts;
-(void)addText:(id)text;
// declared property getter: -(id)texts;
-(void)removeSecondarySlidesAtIndices:(id)indices;
-(void)insertSecondarySlides:(id)slides atIndex:(int)index;
-(void)addSecondarySlides:(id)slides;
-(void)addSecondarySlide:(id)slide;
// converted property getter: -(id)secondarySlides;
-(void)moveSlidesFromIndices:(id)indices toIndex:(int)index;
-(void)removeAllSlides;
-(void)removeSlidesAtIndices:(id)indices;
-(void)insertSlides:(id)slides atIndex:(int)index;
-(void)addSlides:(id)slides;
-(void)addSlide:(id)slide;
// declared property getter: -(id)slides;
-(void)setEffectAttribute:(id)attribute forKey:(id)key;
-(id)effectAttributeForKey:(id)key;
// converted property setter: -(void)setEffectAttributes:(id)attributes;
// converted property getter: -(id)effectAttributes;
// converted property setter: -(void)setRandomSeed:(int)seed;
// converted property getter: -(int)randomSeed;
// declared property setter: -(void)setPresetID:(id)anId;
// declared property getter: -(id)presetID;
// declared property setter: -(void)setEffectID:(id)anId;
// declared property getter: -(id)effectID;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(void)finalize;
-(id)description;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(id)initWithEffectID:(id)effectID strings:(id)strings paths:(id)paths;
-(id)initWithEffectID:(id)effectID andStrings:(id)strings;
-(id)initWithEffectID:(id)effectID andPaths:(id)paths;
-(id)initWithEffectID:(id)effectID;
-(id)init;
-(void)createSecondarySlidesWithPaths:(id)paths;
-(void)createSlidesWithPaths:(id)paths;
-(void)createTextsWithStrings:(id)strings secondLineFactor:(float)factor fillIn:(BOOL)anIn;
-(void)createTextsWithStrings:(id)strings secondLineFactor:(float)factor;
-(double)fullDuration;
-(int)maxNumberOfSecondarySlides;
-(int)maxNumberOfSlides;
-(id)container;
-(double)lowestDisplayTime;
// converted property setter: -(void)setLiveIndex:(int)index;
// converted property getter: -(int)liveIndex;
-(id)slideForMCSlide:(id)mcslide;
-(void)copyTexts:(id)texts;
-(void)copySecondarySlides:(id)slides;
-(void)copySlides:(id)slides;
-(void)setLayerEffect:(id)effect;
-(id)slideInformation;
-(void)applyFormattedAttributes;
-(id)formattedAttributes;
-(void)updateTiming;
-(void)setSkipEffectTiming:(BOOL)timing;
@end

