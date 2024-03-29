/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import "iPodUI-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIView, UILabel, UIImageView;

@interface IUPortraitControlsOverlay : XXUnknownSuperclass {
@private
	UIImageView* _backgroundView;
	UIView* _bottomHighlightView;
	float _filteredX;
	UILabel* _scrubSpeedLabel;
	UILabel* _scrubInstructionLabel;
	UIImageView* _scrubInstructionOverlay;
	int _style;
	BOOL _boundsAnimInFlight;
	CGRect _boundsAnimGoal;
}
@property(assign, nonatomic) int style;	// @synthesize=_style
// declared property getter: -(int)style;
-(void)_showScrubInstructionOverlayAnimationDidEnd;
-(float)_sizeToFitForCurrentStateAnimated:(BOOL)currentStateAnimated;
-(void)_sizeToFitAnimationDidEnd;
-(void)_resetStateAfterSliderTrackingDone:(id)done;
-(void)_hideScrubInstructionOverlayAnimationDidEnd;
// declared property setter: -(void)setStyle:(int)style;
-(void)detailSliderTrackingDidEnd:(id)detailSliderTracking;
-(void)detailSliderTrackingDidCancel:(id)detailSliderTracking;
-(void)detailSliderTrackingDidBegin:(id)detailSliderTracking;
-(void)detailSlider:(id)slider didChangeScrubSpeed:(int)speed;
-(void)layoutSubviews;
-(CGRect)hitRect;
-(CGRect)bounds;
-(void)updateForEndOfDetailScrubbing;
-(id)shuffleButtonImage;
-(void)setVisibleParts:(unsigned long long)parts;
-(id)repeatButtonImage;
-(void)resetDetailSlider:(id)slider;
-(void)reloadView;
-(id)playbackSpeedButtonImageForPlaybackSpeed:(unsigned)playbackSpeed;
-(id)newTrackInfoLabel;
-(id)newProgressIndicator;
-(id)newButtonForPart:(unsigned long long)part;
-(id)mailButtonImage;
-(id)geniusButtonImageForControlState:(unsigned)controlState;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end

