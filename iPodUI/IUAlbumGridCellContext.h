/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "iPodUI-Structs.h"

@class UIImage, MPImageCacheRequest, MPImageCache, UIColor, MPMediaQuery, IUMediaDataSource, MPImageModifier;
@protocol IUAlbumGridCellContextDelegate;

@interface IUAlbumGridCellContext : XXUnknownSuperclass {
	id<IUAlbumGridCellContextDelegate> _delegate;
	CFDictionaryRef _groupMemberDataCache;
	MPImageCache* _imageCache;
	MPImageModifier* _imageModifier;
	int _imageContentMode;
	MPImageCacheRequest* _placeholderImageCacheRequest;
	UIImage* _unmodifiedPlaceholderImage;
	UIImage* _placeholderImage;
	MPMediaQuery* _query;
	CFDictionaryRef _stringSizeCache;
	int _titleStyle;
	UIColor* _titleColor;
	UIColor* _subtitleColor;
	UIColor* _albumFillColor;
	BOOL _useTimedArtwork;
	BOOL _useUnmodifiedThumbnails;
	BOOL _drawShadow;
	BOOL _overlapIndexBar;
	IUMediaDataSource* _dataSource;
}
@property(retain, nonatomic) IUMediaDataSource* dataSource;	// @synthesize=_dataSource
@property(assign, nonatomic) BOOL overlapIndexBar;	// @synthesize=_overlapIndexBar
@property(assign, nonatomic) BOOL drawShadow;	// @synthesize=_drawShadow
@property(assign, nonatomic) BOOL useUnmodifiedThumbnails;	// @synthesize=_useUnmodifiedThumbnails
@property(readonly, assign, nonatomic) BOOL useTimedArtwork;	// @synthesize=_useTimedArtwork
@property(retain, nonatomic) UIColor* albumFillColor;	// @synthesize=_albumFillColor
@property(retain, nonatomic) UIColor* subtitleColor;	// @synthesize=_subtitleColor
@property(retain, nonatomic) UIColor* titleColor;	// @synthesize=_titleColor
@property(assign, nonatomic) int titleStyle;	// @synthesize=_titleStyle
@property(retain, nonatomic) MPMediaQuery* query;	// @synthesize=_query
@property(readonly, assign, nonatomic) BOOL hasPlaceholderImage;
@property(retain, nonatomic) UIImage* placeholderImage;
@property(retain, nonatomic) UIImage* unmodifiedPlaceholderImage;	// @synthesize=_unmodifiedPlaceholderImage
@property(retain, nonatomic) MPImageCacheRequest* placeholderImageCacheRequest;	// @synthesize=_placeholderImageCacheRequest
@property(assign, nonatomic) int imageContentMode;	// @synthesize=_imageContentMode
@property(retain, nonatomic) MPImageModifier* imageModifier;	// @synthesize=_imageModifier
@property(retain, nonatomic) MPImageCache* imageCache;	// @synthesize=_imageCache
@property(readonly, assign, nonatomic) CGPoint actualImageOrigin;
@property(readonly, assign, nonatomic) CGSize thumbnailSize;
@property(readonly, assign, nonatomic) unsigned albumsPerRow;
@property(assign, nonatomic) id<IUAlbumGridCellContextDelegate> delegate;	// @synthesize=_delegate
// declared property setter: -(void)setUseUnmodifiedThumbnails:(BOOL)thumbnails;
// declared property getter: -(BOOL)useUnmodifiedThumbnails;
// declared property getter: -(BOOL)useTimedArtwork;
// declared property setter: -(void)setTitleStyle:(int)style;
// declared property getter: -(int)titleStyle;
// declared property setter: -(void)setAlbumFillColor:(id)color;
// declared property getter: -(id)albumFillColor;
// declared property setter: -(void)setTitleColor:(id)color;
// declared property getter: -(id)titleColor;
// declared property setter: -(void)setSubtitleColor:(id)color;
// declared property getter: -(id)subtitleColor;
// declared property getter: -(id)query;
// declared property getter: -(id)unmodifiedPlaceholderImage;
// declared property setter: -(void)setImageContentMode:(int)mode;
// declared property getter: -(int)imageContentMode;
// declared property setter: -(void)setPlaceholderImageCacheRequest:(id)request;
// declared property getter: -(id)placeholderImageCacheRequest;
// declared property setter: -(void)setOverlapIndexBar:(BOOL)bar;
// declared property getter: -(BOOL)overlapIndexBar;
// declared property setter: -(void)setImageModifier:(id)modifier;
// declared property getter: -(id)imageModifier;
// declared property setter: -(void)setImageCache:(id)cache;
// declared property getter: -(id)imageCache;
// declared property setter: -(void)setDrawShadow:(BOOL)shadow;
// declared property getter: -(BOOL)drawShadow;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property getter: -(id)delegate;
// declared property setter: -(void)setDataSource:(id)source;
// declared property getter: -(id)dataSource;
-(CGSize)_sizeForProperty:(int)property ofEntityAtIndex:(unsigned)index withFont:(id)font;
-(CGSize)_sizeForCountStringOfEntityAtIndex:(unsigned)index withFont:(id)font;
-(id)_groupDataForEntityAtIndex:(unsigned)index;
-(id)_countStringForEntityAtIndex:(unsigned)index;
-(id)_expirationForMediaItem:(id)mediaItem;
-(CGSize)titleSizeForEntityAtIndex:(unsigned)index withFont:(id)font;
-(id)titleForEntityAtIndex:(unsigned)index;
-(CGSize)subtitleSizeForEntityAtIndex:(unsigned)index withFont:(id)font;
-(id)subtitleForEntityAtIndex:(unsigned)index;
// declared property setter: -(void)setQuery:(id)query;
// declared property getter: -(BOOL)hasPlaceholderImage;
// declared property setter: -(void)setPlaceholderImage:(id)image;
// declared property getter: -(id)placeholderImage;
// declared property setter: -(void)setUnmodifiedPlaceholderImage:(id)image;
-(void)setPlaceholderImageRequest:(id)request;
// declared property getter: -(CGPoint)actualImageOrigin;
// declared property getter: -(CGSize)thumbnailSize;
// declared property getter: -(unsigned)albumsPerRow;
-(void)dealloc;
-(id)init;
@end
