/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */

#import "iLifeSlideshow-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface MPAuthoringUtilities : XXUnknownSuperclass {
}
+(float)multilineSizeFactorFromOptions:(id)options;
+(double)distanceBetween:(CGPoint)between andPoint:(CGPoint)point;
+(CGPoint)kbCenterPointFromRect:(CGRect)rect;
+(CGRect)rectToFitIn:(CGRect)anIn withAspectRatio:(float)aspectRatio;
+(BOOL)aspectRatioMatchesDefault:(id)aDefault withOptions:(id)options;
+(id)gapInformationFromOptions:(id)options;
+(BOOL)matchEffectsUsingTagsFromOptions:(id)options;
+(BOOL)useLargestEffectsFromOptions:(id)options;
+(id)absolutePathsForPaths:(id)paths withOptions:(id)options;
+(NSRange)videoPathsRangeFromOptions:(id)options;
+(int)screenSizeFromOptions:(id)options;
+(float)basePortraitBreakAspectRatioFromOptions:(id)options;
+(float)baseBreakAspectRatioFromOptions:(id)options;
+(float)breakDurationScaleFromOptions:(id)options;
+(BOOL)scaleEffectsForBreaksFromOptions:(id)options;
+(double)fadeOutDurationFromOptions:(id)options;
+(id)absolutePathAtIndex:(int)index inPaths:(id)paths withOptions:(id)options;
+(id)subtitlesFromOptions:(id)options;
+(BOOL)performFaceDetectionFromOptions:(id)options;
+(int)regionOfInterestPickModeFromOptions:(id)options;
+(NSRange)reconfigureRangeFromOptions:(id)options;
+(id)layerTypeFromOptions:(id)options;
+(int)presentationOrderFromOptions:(id)options;
+(BOOL)alwaysIncludeLastTransitionFromOptions:(id)options;
+(BOOL)shouldDuckMoviesFromOptions:(id)options;
+(id)absolutePathForPath:(id)path withOptions:(id)options;
+(BOOL)fadeOutAudioFromOptions:(id)options;
+(BOOL)useTransitionLayoutTagsWithOptions:(id)options;
+(BOOL)requestGeneratedImagesFromOptions:(id)options;
+(BOOL)canAdjustPhaseDurations:(id)durations;
+(BOOL)pickEffectsEvenlyByIDWithOptions:(id)options;
+(BOOL)pickTransitionsEvenlyByIDWithOptions:(id)options;
+(BOOL)needsFitMovieAttributeFromOptions:(id)options;
+(BOOL)useROIAspectRatioFromOptions:(id)options;
+(BOOL)canHaveTransitionsFromOptions:(id)options;
+(int)reorderModeFromOptions:(id)options;
+(id)colorSchemeFromOptions:(id)options;
+(BOOL)effectDecidesTransitionFromOptions:(id)options;
+(float)movieVolumeFromOptions:(id)options;
+(BOOL)padTextOnlyEffects:(id)effects;
+(BOOL)useUniformDurations:(id)durations;
+(double)minimumEffectDurationFromOptions:(id)options;
+(double)maximumTransitionDurationFromOptions:(id)options;
+(double)minimumTransitionDurationFromOptions:(id)options;
+(int)numberOfLayersFromOptions:(id)options;
+(BOOL)layerHasImagesFromOptions:(id)options;
+(id)layerDescriptionForLayerWithZIndex:(int)zindex forStyle:(id)style;
+(double)exportTransitionDurationFromOptions:(id)options;
+(id)exportTransitionIDFromOptions:(id)options;
+(id)loopTransitionIDFromOptions:(id)options;
+(float)effectPadding:(id)padding;
+(BOOL)shouldComputeLoopTransitionFromOptions:(id)options;
+(BOOL)shouldComputeSlideFiltersFromOptions:(id)options;
+(id)lastPresetFromOptions:(id)options;
+(BOOL)shouldComputeTransitionsFromOptions:(id)options;
+(BOOL)shouldComputeFramesFromOptions:(id)options;
+(id)presetIDFromPresetID:(id)presetID;
+(id)idFromPresetID:(id)presetID;
+(id)titleEffectFromOptions:(id)options;
+(id)introEffectIDFromOptions:(id)options;
+(int)maxNumberOfSlidesToPreloadFromOptions:(id)options;
+(int)minimumNumberOfDynamicSlidesToAddFromOptions:(id)options;
+(BOOL)scaleOutroEffectFromOptions:(id)options;
+(double)outroDurationFromOptions:(id)options;
+(double)introDurationFromOptions:(id)options;
+(id)outroEffectIDFromOptions:(id)options;
+(id)transitionListFromOptions:(id)options;
+(id)ignoreTransitionListFromOptions:(id)options;
+(BOOL)repeatTransitionsFromOptions:(id)options;
+(BOOL)collectVersionInformationFromOptions:(id)options;
+(float)kenBurnsZoomFactorFromOptions:(id)options;
+(id)effectListFromOptions:(id)options;
+(float)aspectRatioFromOptions:(id)options;
+(unsigned)randomSeedFromOptions:(id)options;
+(BOOL)fitMoviesWhenPossibleFromOptions:(id)options;
+(BOOL)useDefaultAudioFromOptions:(id)options;
+(BOOL)useTitleEffectFromOptions:(id)options;
+(BOOL)useROIFromOptions:(id)options;
+(BOOL)useBestAspectRatioFromOptions:(id)options;
+(double)transitionDurationFromOptions:(id)options;
+(BOOL)canRepeatPreset:(id)preset;
+(BOOL)effectNeedsPreviousAttributesFromOptions:(id)options;
+(BOOL)canRepeatEffectWithPreset:(id)preset;
+(double)layerOffsetFromOptions:(id)options;
+(double)durationPerEffectFromOptions:(id)options;
+(BOOL)matchPhasesWithTransitionFromOptions:(id)options;
+(CGColorRef)backgroundColorFromOptions:(id)options;
+(BOOL)replaceAudioPlaylistFromOptions:(id)options;
+(double)beatFactorFromOptions:(id)options;
+(double)layerTimeScaleFromOptions:(id)options;
+(BOOL)lockTransitionDurationFromOptions:(id)options;
+(BOOL)createBeatsFromOptions:(id)options;
+(BOOL)alignToBeatsFromOptions:(id)options;
+(BOOL)layerCanSkipScaleCalculation:(id)calculation withOptions:(id)options;
+(int)kenBurnsOffsetTypeFromOptions:(id)options;
+(int)kenBurnsLevelFromOptions:(id)options;
+(BOOL)easeKenBurnsPanFromOptions:(id)options;
+(BOOL)kenBurnsBreaksFromOptions:(id)options;
+(BOOL)kenBurnsAlwaysZoomInFromOptions:(id)options;
+(float)kenBurnsEndZoomLevelFromOptions:(id)options;
+(float)kenBurnsStartZoomLevelFromOptions:(id)options;
+(float)kenBurnsPanFactorFromOptions:(id)options;
+(float)maxKenBurnsZoomFromOptions:(id)options;
+(float)kenBurnsLikelihoodFromOptions:(id)options;
+(int)croppingModeForFitMoviesFromOptions:(id)options;
+(int)croppingModeFromOptions:(id)options;
+(int)audioScalingModeFromOptions:(id)options;
+(double)audioDurationFromOptions:(id)options;
+(int)layerIndexFromOptions:(id)options;
+(id)styleFromOptions:(id)options;
+(id)urlsFromPaths:(id)paths;
+(BOOL)ignoreClusteringForImages:(id)images withOptions:(id)options;
@end

