/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "iLifeSlideshow-Structs.h"

@class MPDocument;

@interface MPCropController : XXUnknownSuperclass {
	id _delegate;
	MPDocument* _authoredDocument;
}
@property(assign) id delegate;	// converted property
+(void)releaseSharedController;
+(id)sharedController;
-(void)applyCropToSlide:(id)slide inDocument:(id)document withOptions:(id)options;
-(void)applyCropToSlidesInEffectContainers:(id)effectContainers inDocument:(id)document withOptions:(id)options;
-(void)_applyCropToSlidesInEffectContainersWithArguments:(id)arguments;
-(void)cropSlidesForLayerGroup:(id)layerGroup inDocument:(id)document withOptions:(id)options;
-(void)cropSlidesInDocument:(id)document withOptions:(id)options;
-(void)batchCrop:(id)crop;
// converted property setter: -(void)setDelegate:(id)delegate;
// converted property getter: -(id)delegate;
-(id)init;
-(double)durationOfSlide:(id)slide;
-(void)applyMultiFaceAnimatedCropToSlide:(id)slide withOptions:(id)options;
-(void)applyAnimatedCropToSlide:(id)slide withOptions:(id)options centeredAt:(CGPoint)at alwaysZoomIn:(BOOL)anIn;
-(void)applyAnimatedCropToBreakSlide:(id)breakSlide withOptions:(id)options;
-(CGPoint)checkFarApartROIs:(id)rois withImageSize:(CGSize)imageSize visibleAspectRatio:(float)ratio roiCenter:(CGPoint)center;
-(void)applyStationaryCropToSlide:(id)slide withOptions:(id)options;
-(void)applyAnimatedCropWithROIsToSlide:(id)slide withOptions:(id)options;
-(void)applyAnimatedCropToSlide:(id)slide withOptions:(id)options;
-(void)applyCropToSlide:(id)slide withOptions:(id)options;
-(void)cleanup;
-(void)setupWithDocument:(id)document andOptions:(id)options;
@end

