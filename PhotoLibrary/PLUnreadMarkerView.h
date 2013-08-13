/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import "PhotoLibrary-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIImageView, UILabel, UIActivityIndicatorView;

@interface PLUnreadMarkerView : XXUnknownSuperclass {
@private
	UIImageView* _backgroundView;
	UILabel* _labelView;
	UIActivityIndicatorView* _indicatorView;
	float _maxWidth;
	unsigned _unreadItemsCount;
	BOOL _showsLoadingIndicator;
	int _interfaceIdiom;
}
@property(assign, nonatomic) float maxWidth;	// @synthesize=_maxWidth
@property(assign, nonatomic) BOOL showsLoadingIndicator;	// @synthesize=_showsLoadingIndicator
@property(assign, nonatomic) unsigned unreadItemsCount;	// @synthesize=_unreadItemsCount
@property(readonly, assign) int interfaceIdiom;	// @synthesize=_interfaceIdiom
// declared property getter: -(int)interfaceIdiom;
// declared property getter: -(BOOL)showsLoadingIndicator;
// declared property getter: -(unsigned)unreadItemsCount;
// declared property setter: -(void)setMaxWidth:(float)width;
// declared property getter: -(float)maxWidth;
-(void)_layoutSubviews;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)fits;
-(void)_getLabelFrame:(CGRect*)frame IndicatorFrame:(CGRect*)frame2;
-(void)setShowsLoadingIndicator:(BOOL)indicator animated:(BOOL)animated;
// declared property setter: -(void)setShowsLoadingIndicator:(BOOL)indicator;
// declared property setter: -(void)setUnreadItemsCount:(unsigned)count;
-(void)dealloc;
-(id)initWithInterfaceIdiom:(int)interfaceIdiom;
@end

