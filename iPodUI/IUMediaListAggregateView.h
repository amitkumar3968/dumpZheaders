/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class IUReflectionImageView, IUMediaListAggregateViewConfiguration, NSMutableArray;

@interface IUMediaListAggregateView : XXUnknownSuperclass {
	id _delegate;
	IUMediaListAggregateViewConfiguration* _configuration;
	IUReflectionImageView* _artworkView;
	NSMutableArray* _configurationSubviews;
	BOOL _needsViewsLoaded;
	unsigned _drawAsDisabled : 1;
}
@property(assign, nonatomic) id delegate;	// @synthesize=_delegate
@property(retain, nonatomic) IUMediaListAggregateViewConfiguration* configuration;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property getter: -(id)delegate;
-(void)layoutSubviews;
-(void)_setNeedsViewsLoaded;
-(void)_reloadViews;
-(void)_reloadSubviewsForConfiguration;
-(void)_removeSubviewsForConfiguration:(BOOL)configuration;
-(void)_reloadArtworkView;
// declared property getter: -(id)configuration;
// declared property setter: -(void)setConfiguration:(id)configuration;
-(void)_mediaLibraryDisplayValuesDidChangeNotification:(id)_mediaLibraryDisplayValues;
-(void)dealloc;
-(void)reloadData;
-(id)initWithConfiguration:(id)configuration;
@end

