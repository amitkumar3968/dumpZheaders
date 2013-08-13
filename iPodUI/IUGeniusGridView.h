/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "iPodUI-Structs.h"

@class UIImageView, NSString, UILabel, NSArray, NSMutableArray, UIView;
@protocol IUGeniusGridViewDelegate;

@interface IUGeniusGridView : XXUnknownSuperclass {
@private
	UILabel* _artistsLabel;
	UILabel* _basedOnLabel;
	id<IUGeniusGridViewDelegate> _delegate;
	BOOL _enabled;
	CGImageRef _image;
	UIView* _coversViewContainer;
	NSMutableArray* _coverViews;
	int _orientation;
	UIImageView* _playImageView;
	NSArray* _representativeArtists;
	BOOL _showsPlayButton;
	NSString* _title;
	unsigned _page;
	UILabel* _titleLabel;
}
@property(readonly, assign, nonatomic) int orientation;	// @synthesize=_orientation
@property(readonly, assign, nonatomic) double durationForFlip;
@property(assign, nonatomic) unsigned page;	// @synthesize=_page
@property(copy, nonatomic) NSString* title;	// @synthesize=_title
@property(assign, nonatomic) BOOL showsPlayButton;	// @synthesize=_showsPlayButton
@property(retain, nonatomic) NSArray* representativeArtists;	// @synthesize=_representativeArtists
@property(assign, nonatomic) CGImageRef image;	// @synthesize=_image
@property(assign, nonatomic, getter=isEnabled) BOOL enabled;	// @synthesize=_enabled
@property(readonly, assign, nonatomic) UIView* coversViewContainer;	// @synthesize=_coversViewContainer
@property(assign, nonatomic) id<IUGeniusGridViewDelegate> delegate;	// @synthesize=_delegate
+(float)coverImageSideLength;
// declared property getter: -(id)coversViewContainer;
// declared property getter: -(BOOL)showsPlayButton;
// declared property getter: -(int)orientation;
// declared property getter: -(id)representativeArtists;
// declared property getter: -(CGImageRef)image;
// declared property getter: -(id)title;
// declared property setter: -(void)setPage:(unsigned)page;
// declared property getter: -(unsigned)page;
// declared property getter: -(BOOL)isEnabled;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property getter: -(id)delegate;
-(id)_playButtonImage;
-(void)_updateArtistsLabelLayout;
-(void)_statusBarHeightDidChange:(id)_statusBarHeight;
-(void)_removeAllAnimations;
-(void)_addFlipAnimationToLayer:(id)layer withBeginTime:(double)beginTime forwards:(BOOL)forwards;
-(void)_invalidateLayout;
-(void)_setCoverImages;
-(unsigned)_gridSize;
-(CGRect)_gridFrame;
-(void)prepareForReuse;
-(void)flipToOrientation:(int)orientation animated:(BOOL)animated;
// declared property getter: -(double)durationForFlip;
// declared property setter: -(void)setShowsPlayButton:(BOOL)button;
// declared property setter: -(void)setRepresentativeArtists:(id)artists;
// declared property setter: -(void)setImage:(CGImageRef)image;
// declared property setter: -(void)setTitle:(id)title;
// declared property setter: -(void)setEnabled:(BOOL)enabled;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)layoutSubviews;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end
