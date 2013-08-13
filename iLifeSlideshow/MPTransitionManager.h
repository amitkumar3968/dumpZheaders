/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary;

@interface MPTransitionManager : XXUnknownSuperclass {
	NSMutableDictionary* mTransitions;
	NSMutableDictionary* mTransitionCategories;
	NSMutableDictionary* mTransitionPresets;
}
+(void)releaseSharedManager;
+(id)sharedManager;
+(void)loadTransitionManagerWithPaths:(id)paths;
-(id)presetsForTransitionID:(id)transitionID;
-(double)defaultDurationForTransitionID:(id)transitionID;
-(id)controlForAttribute:(id)attribute forTransitionID:(id)transitionID;
-(id)settingsUIControlDescriptionsForTransition:(id)transition;
-(id)localizedSettingsUITitleForTitleKey:(id)titleKey inTransition:(id)transition;
-(id)attributesForTransitionID:(id)transitionID andPresetID:(id)anId;
-(id)localizedCategoryNameFromCategoryID:(id)categoryID;
-(id)localizedTransitionNameForTransitionID:(id)transitionID andPresetID:(id)anId;
-(id)localizedNameForTransitionID:(id)transitionID withLanguage:(id)language;
-(id)localizedTransitionNameForTransitionID:(id)transitionID;
-(id)transitionsForCategoryID:(id)categoryID;
-(id)descriptionForTransitionID:(id)transitionID;
-(id)categoryIDsForTransitionID:(id)transitionID;
-(id)versionOfTransitionID:(id)transitionID;
-(id)allCategoryIDs;
-(id)allTransitionIDs;
-(void)dealloc;
-(int)transitionNeedsRandomSeedInformation:(id)information;
-(double)bestBeatTimeForTransitionID:(id)transitionID;
-(float)beatStrengthForTransitionID:(id)transitionID;
-(id)transitionPresetsMatchingCriteria:(id)criteria;
-(id)randomTransitionPresetFromList:(id)list abidingWithConstraints:(id)constraints;
-(id)constraintsForTransitionPresetsMatchingList:(id)transitionPresetsMatchingList andCriteria:(id)criteria;
-(id)initWithPaths:(id)paths;
@end

