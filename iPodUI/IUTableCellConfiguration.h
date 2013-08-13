/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import "iPodUI-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, MPMediaItem, IUDownloadActionConfiguration;

@interface IUTableCellConfiguration : XXUnknownSuperclass {
	CGSize _backgroundSize;
	int _cacheTag;
	id _globalContext;
	BOOL _isNowPlaying;
	CGSize _layoutSize;
	unsigned _isDeleteConfirmationVisible : 1;
	unsigned _needsDisplay : 1;
@private
	IUDownloadActionConfiguration* _purchaseActionConfiguration;
	CGSize _purchaseButtonSize;
	CGSize _downloadButtonSize;
	CGSize _downloadProgressIndicatorSize;
	BOOL _downloadable;
	BOOL _downloadInProgress;
	BOOL _canShowPurchasableMediaViews;
	CGPoint _downloadButtonOrigin;
	CGPoint _downloadProgressIndicatorOrigin;
}
@property(assign, nonatomic) BOOL isNowPlaying;	// @synthesize=_isNowPlaying
@property(readonly, assign, nonatomic) CGRect purchaseButtonFrame;
@property(assign, nonatomic) CGSize purchaseButtonSize;	// @synthesize=_purchaseButtonSize
@property(retain, nonatomic) IUDownloadActionConfiguration* purchaseActionConfiguration;	// @synthesize=_purchaseActionConfiguration
@property(assign, nonatomic) CGSize downloadProgressIndicatorSize;	// @synthesize=_downloadProgressIndicatorSize
@property(assign, nonatomic) CGSize downloadButtonSize;	// @synthesize=_downloadButtonSize
@property(readonly, assign, nonatomic) CGPoint downloadProgressIndicatorOrigin;	// @synthesize=_downloadProgressIndicatorOrigin
@property(readonly, assign, nonatomic) CGPoint downloadButtonOrigin;	// @synthesize=_downloadButtonOrigin
@property(readonly, assign, nonatomic) BOOL canShowPurchasableMediaViews;	// @synthesize=_canShowPurchasableMediaViews
@property(assign, nonatomic, getter=isDownloadInProgress) BOOL downloadInProgress;	// @synthesize=_downloadInProgress
@property(assign, nonatomic, getter=isDownloadable) BOOL downloadable;	// @synthesize=_downloadable
@property(readonly, assign, nonatomic) MPMediaItem* mediaItem;
@property(readonly, assign, nonatomic) UIEdgeInsets selectionEdgeInsets;
@property(assign, nonatomic) BOOL isDeleteConfirmationVisible;
@property(readonly, assign, nonatomic) NSString* untruncationCalloutString;
@property(readonly, assign, nonatomic) BOOL showsUntruncationCallout;
@property(readonly, assign, nonatomic) unsigned numberOfLabels;
@property(readonly, assign, nonatomic) unsigned numberOfImages;
@property(assign, nonatomic) BOOL needsDisplay;
@property(readonly, assign, nonatomic) Class layoutManagerClass;
@property(assign, nonatomic) CGSize layoutSize;	// @synthesize=_layoutSize
@property(assign, nonatomic) CGSize backgroundSize;	// @synthesize=_backgroundSize
@property(retain, nonatomic) id globalContext;
@property(readonly, assign, nonatomic) int preset;
+(BOOL)showsUntruncationCallout;
+(float)rowHeightForGlobalContext:(id)globalContext;
+(float)minimumRowHeight;
+(BOOL)drawsRowsInAlternateStyle;
+(id)backgroundColorWithModifiers:(unsigned)modifiers;
+(id)customActionRowConfigurationWithSimpleCellConfiguration:(id)simpleCellConfiguration;
+(void)configureTableDisplaySettings:(id)settings dataSource:(id)source;
// declared property getter: -(CGPoint)downloadProgressIndicatorOrigin;
// declared property getter: -(CGPoint)downloadButtonOrigin;
// declared property getter: -(BOOL)canShowPurchasableMediaViews;
// declared property setter: -(void)setDownloadInProgress:(BOOL)progress;
// declared property getter: -(BOOL)isDownloadInProgress;
// declared property setter: -(void)setDownloadable:(BOOL)downloadable;
// declared property getter: -(BOOL)isDownloadable;
// declared property setter: -(void)setDownloadProgressIndicatorSize:(CGSize)size;
// declared property getter: -(CGSize)downloadProgressIndicatorSize;
// declared property setter: -(void)setDownloadButtonSize:(CGSize)size;
// declared property getter: -(CGSize)downloadButtonSize;
// declared property setter: -(void)setLayoutSize:(CGSize)size;
// declared property getter: -(CGSize)layoutSize;
// declared property setter: -(void)setBackgroundSize:(CGSize)size;
// declared property getter: -(CGSize)backgroundSize;
// declared property getter: -(CGSize)purchaseButtonSize;
// declared property getter: -(id)purchaseActionConfiguration;
// declared property getter: -(BOOL)isNowPlaying;
// declared property setter: -(void)setIsNowPlaying:(BOOL)playing;
// declared property getter: -(id)mediaItem;
// declared property setter: -(void)setIsDeleteConfirmationVisible:(BOOL)visible;
-(CGSize)offsetForLabelAtIndex:(unsigned)index;
// declared property getter: -(id)untruncationCalloutString;
-(id)untruncationCalloutStringWithLinesByStringIndexes:(id)linesByStringIndexes;
// declared property getter: -(BOOL)showsUntruncationCallout;
-(id)stringForLabelAtIndex:(unsigned)index;
// declared property setter: -(void)setNeedsDisplay:(BOOL)display;
// declared property setter: -(void)setGlobalContext:(id)context;
// declared property getter: -(UIEdgeInsets)selectionEdgeInsets;
-(void)reloadLayoutInformation;
-(void)reloadData;
// declared property getter: -(BOOL)isDeleteConfirmationVisible;
// declared property getter: -(unsigned)numberOfLabels;
// declared property getter: -(unsigned)numberOfImages;
// declared property getter: -(BOOL)needsDisplay;
// declared property getter: -(Class)layoutManagerClass;
-(void)invalidateDynamicTrackCaches;
-(id)imageAtIndex:(unsigned)index withModifiers:(unsigned)modifiers;
// declared property getter: -(id)globalContext;
-(int)lineBreakModeForLabelAtIndex:(unsigned)index;
-(int)textAlignmentForLabelAtIndex:(unsigned)index;
-(id)backgroundColorForImageAtIndex:(unsigned)index;
-(BOOL)getShadowColor:(id*)color offset:(CGSize*)offset forLabelAtIndex:(unsigned)index withModifiers:(unsigned)modifiers;
-(id)fontForLabelAtIndex:(unsigned)index;
-(CGRect)frameForLabelAtIndex:(unsigned)index;
-(CGRect)frameForImageAtIndex:(unsigned)index;
-(void)layoutSubviewLayoutViews:(id)views;
-(id)subviewLayoutViewsWithModifiers:(unsigned)modifiers;
-(void)drawWithModifiers:(unsigned)modifiers;
-(void)drawBackgroundWithModifiers:(unsigned)modifiers;
// declared property setter: -(void)setPurchaseActionConfiguration:(id)configuration;
// declared property setter: -(void)setPurchaseButtonSize:(CGSize)size;
// declared property getter: -(CGRect)purchaseButtonFrame;
-(id)colorForLabelAtIndex:(unsigned)index withModifiers:(unsigned)modifiers;
-(id)backgroundColorWithModifiers:(unsigned)modifiers;
-(void)dealloc;
// declared property getter: -(int)preset;
@end

