/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import "PhotoLibrary-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIView, UIImageView, UIActivityIndicatorView, UILabel, NSDate;

@interface PLPhotoTilePlaceholderView : XXUnknownSuperclass {
@private
	UIImageView* _placeholderImageView;
	UIActivityIndicatorView* _loadingIndicatorView;
	UILabel* _loadingLabel;
	UIView* _loadingContainerView;
	NSDate* _lastViewPhaseChangeDate;
	BOOL _indicatorIsVisible;
	int _placeholderState;
	int _interfaceIdiom;
}
@property(assign) int placeholderState;	// @synthesize=_placeholderState
@property(readonly, assign) int interfaceIdiom;	// @synthesize=_interfaceIdiom
// declared property getter: -(int)interfaceIdiom;
// declared property setter: -(void)setPlaceholderState:(int)state;
// declared property getter: -(int)placeholderState;
-(void)layoutSubviews;
-(void)_layoutSubviews;
-(void)_removeLoadingContainerView;
-(void)_setUpLoadingContainerView;
-(void)_setupInitialUI;
-(id)_newLoadingLabel;
-(double)_timeSinceLastPlaceholderPhaseChange;
-(void)showLoadingIndicatorWhenReady;
-(void)_transitionToNewStateAnimated:(BOOL)newStateAnimated;
-(void)transitionToState:(int)state;
-(void)fadeOutSoonIfNeededAndRemoveFromSuperview:(BOOL)superview;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame withState:(int)state interfaceIdiom:(int)idiom;
@end

