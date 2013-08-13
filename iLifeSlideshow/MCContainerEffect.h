/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */

#import "MCContainer.h"
#import "MCActionSupport.h"

@class NSMutableDictionary, NSMutableArray, NSString, NSArray, NSSet, NSDictionary;

@interface MCContainerEffect : MCContainer <MCActionSupport> {
@private
	NSMutableArray* mSlides;
	NSMutableArray* mTexts;
	NSMutableDictionary* mActions;
	NSMutableDictionary* mEffectAttributes;
	NSString* mEffectID;
	BOOL mIsLive;
}
@property(assign, nonatomic) BOOL isLive;	// @synthesize=mIsLive
@property(copy) NSDictionary* effectAttributes;
@property(copy) NSString* effectID;	// @synthesize=mEffectID
@property(readonly, assign, nonatomic) unsigned nextAvailableTextIndex;
@property(readonly, assign, nonatomic) unsigned countOfTexts;
@property(readonly, assign) NSArray* orderedTexts;
@property(readonly, assign) NSSet* texts;
@property(readonly, assign, nonatomic) unsigned nextAvailableSlideIndex;
@property(readonly, assign, nonatomic) unsigned countOfSlides;
@property(readonly, assign) NSArray* orderedSlides;
@property(readonly, assign) NSSet* slides;
@property(readonly, assign, nonatomic) unsigned countOfActions;
@property(readonly, assign) NSDictionary* actions;
+(id)keyPathsForValuesAffectingValueForKey:(id)key;
// declared property setter: -(void)setIsLive:(BOOL)live;
// declared property getter: -(BOOL)isLive;
// declared property setter: -(void)setEffectID:(id)anId;
// declared property getter: -(id)effectID;
// declared property setter: -(void)setEffectAttributes:(id)attributes;
// declared property getter: -(id)effectAttributes;
-(void)addEffectAttributes:(id)attributes;
-(void)setEffectAttribute:(id)attribute forKey:(id)key;
-(id)effectAttributeForKey:(id)key;
-(void)moveTextsAtIndices:(id)indices toIndex:(unsigned)index;
-(void)removeAllTexts;
-(void)removeTextsAtIndices:(id)indices;
-(id)insertTextsForAssets:(id)assets andKey:(id)key atIndex:(unsigned)index;
-(id)insertTextForAsset:(id)asset andKey:(id)key atIndex:(unsigned)index;
-(id)insertTextsForAttributedStrings:(id)attributedStrings atIndex:(unsigned)index;
-(id)insertTextForAttributedString:(id)attributedString atIndex:(unsigned)index;
-(id)addTextsForAssets:(id)assets andKey:(id)key;
-(id)addTextForAsset:(id)asset andKey:(id)key;
-(id)addTextsForAttributedStrings:(id)attributedStrings;
-(id)addTextForAttributedString:(id)attributedString;
-(id)textAtIndex:(unsigned)index;
// declared property getter: -(unsigned)nextAvailableTextIndex;
// declared property getter: -(unsigned)countOfTexts;
// declared property getter: -(id)orderedTexts;
// declared property getter: -(id)texts;
-(void)moveSlidesAtIndices:(id)indices toIndex:(unsigned)index;
-(void)removeAllSlides;
-(void)removeSlidesAtIndices:(id)indices;
-(id)insertSlideForContainer:(id)container atIndex:(unsigned)index;
-(id)addSlideForContainer:(id)container;
-(id)insertSlidesForAssets:(id)assets atIndex:(unsigned)index;
-(id)insertSlideForAsset:(id)asset atIndex:(unsigned)index;
-(id)addSlidesForAssets:(id)assets;
-(id)addSlideForAsset:(id)asset;
-(id)insertSlideAtIndex:(int)index;
-(id)addSlides:(int)slides;
-(id)addSlide;
-(id)slideAtIndex:(unsigned)index;
// declared property getter: -(unsigned)nextAvailableSlideIndex;
// declared property getter: -(unsigned)countOfSlides;
// declared property getter: -(id)orderedSlides;
// declared property getter: -(id)slides;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
-(id)imprint;
-(void)demolish;
-(id)initWithImprint:(id)imprint andMontage:(id)montage;
-(void)removeAllActions;
-(void)removeActionForKey:(id)key;
-(void)setAction:(id)action forKey:(id)key;
-(id)actionForKey:(id)key;
// declared property getter: -(unsigned)countOfActions;
// declared property getter: -(id)actions;
-(id)imprintsForActions;
-(void)demolishActions;
-(void)initActionsWithImprints:(id)imprints;
@end
