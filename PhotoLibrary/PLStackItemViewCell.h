/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import "UITextFieldDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "PhotoLibrary-Structs.h"

@class UIImageView, PLLabel, NSString, UIButton, UIView, UIImage, PLUnreadMarkerView, PLAlbumTextField, PLImageView;
@protocol PLStackableImage;

@interface PLStackItemViewCell : XXUnknownSuperclass <UITextFieldDelegate> {
@private
	float _previousEnabledAlpha;
	UIButton* _closeButton;
	PLLabel* _titleLabel;
	PLLabel* _subtitleLabel;
	PLAlbumTextField* _editField;
	UIImageView* _unreadBadge;
	PLUnreadMarkerView* _unreadMarkerStartView;
	UIImageView* _badgeView;
	NSString* _subtitle;
	BOOL _unreadStartMarkerShowsProgress;
	BOOL _labelIsEditable;
	float _stackedAngle;
	BOOL _labelsHidden;
	id _renameAction;
	UIImage* _badgeImage;
	float _labelsAlpha;
	id _closeAction;
	BOOL _enabled;
	BOOL _labelsShadowEnabled;
	UIView<PLStackableImage>* _sourceView;
	BOOL _ignoreEndEditing;
	BOOL _showsUnreadStartMarker;
	unsigned _unreadStartMarkerCount;
	BOOL _showsUnreadIndicator;
	NSString* _title;
}
@property(copy, nonatomic) id closeAction;	// @synthesize=_closeAction
@property(copy, nonatomic) id renameAction;	// @synthesize=_renameAction
@property(assign, nonatomic, getter=isShadowEnabled) BOOL shadowEnabled;
@property(assign, nonatomic) BOOL enabled;	// @synthesize=_enabled
@property(assign, nonatomic) BOOL unreadStartMarkerShowsProgress;	// @synthesize=_unreadStartMarkerShowsProgress
@property(assign, nonatomic) unsigned unreadStartMarkerCount;	// @synthesize=_unreadStartMarkerCount
@property(assign, nonatomic) BOOL showsUnreadStartMarker;	// @synthesize=_showsUnreadStartMarker
@property(assign, nonatomic) unsigned imageIndex;
@property(retain, nonatomic) UIImage* badgeImage;	// @synthesize=_badgeImage
@property(assign, nonatomic) float stackedAngle;	// @synthesize=_stackedAngle
@property(readonly, assign, nonatomic) CGPoint closeBoxPosition;
@property(assign, nonatomic, getter=isCloseBoxShown) BOOL showCloseBox;
@property(assign, nonatomic) BOOL showsUnreadIndicator;	// @synthesize=_showsUnreadIndicator
@property(assign, nonatomic) BOOL ignoreEndEditing;	// @synthesize=_ignoreEndEditing
@property(assign, nonatomic, getter=isLabelShadowEnabled) BOOL labelsShadowEnabled;	// @synthesize=_labelsShadowEnabled
@property(assign, nonatomic) float labelsAlpha;	// @synthesize=_labelsAlpha
@property(assign, nonatomic) BOOL labelsHidden;	// @synthesize=_labelsHidden
@property(readonly, assign, nonatomic) BOOL isLabelEditing;
@property(assign, nonatomic, getter=isLabelEditable) BOOL labelIsEditable;	// @synthesize=_labelIsEditable
@property(copy, nonatomic) NSString* subtitle;	// @synthesize=_subtitle
@property(copy, nonatomic) NSString* title;	// @synthesize=_title
@property(readonly, assign, nonatomic) PLImageView* imageView;
@property(retain, nonatomic) UIView<PLStackableImage>* sourceView;	// @synthesize=_sourceView
+(void)initialize;
// declared property getter: -(id)title;
// declared property getter: -(BOOL)showsUnreadIndicator;
// declared property getter: -(unsigned)unreadStartMarkerCount;
// declared property getter: -(BOOL)showsUnreadStartMarker;
// declared property setter: -(void)setIgnoreEndEditing:(BOOL)editing;
// declared property getter: -(BOOL)ignoreEndEditing;
// declared property getter: -(id)sourceView;
// declared property getter: -(BOOL)isLabelShadowEnabled;
// declared property getter: -(BOOL)enabled;
// declared property setter: -(void)setCloseAction:(id)action;
// declared property getter: -(id)closeAction;
// declared property getter: -(float)labelsAlpha;
// declared property getter: -(id)badgeImage;
// declared property setter: -(void)setRenameAction:(id)action;
// declared property getter: -(id)renameAction;
// declared property getter: -(BOOL)labelsHidden;
// declared property setter: -(void)setStackedAngle:(float)angle;
// declared property getter: -(float)stackedAngle;
// declared property getter: -(BOOL)isLabelEditable;
// declared property getter: -(BOOL)unreadStartMarkerShowsProgress;
// declared property getter: -(id)subtitle;
-(void)layoutSubviews;
-(void)_getTitleFrame:(CGRect*)frame subtitleFrame:(CGRect*)frame2 unreadIndicatorFrame:(CGRect*)frame3;
// declared property setter: -(void)setEnabled:(BOOL)enabled;
// declared property getter: -(BOOL)isShadowEnabled;
// declared property setter: -(void)setShadowEnabled:(BOOL)enabled;
-(BOOL)textFieldShouldReturn:(id)textField;
-(NSRange)textField:(id)field willChangeSelectionFromCharacterRange:(NSRange)characterRange toCharacterRange:(NSRange)characterRange3;
-(BOOL)textFieldShouldClear:(id)textField;
-(BOOL)textField:(id)field shouldChangeCharactersInRange:(NSRange)range replacementString:(id)string;
-(void)textFieldDidEndEditing:(id)textField;
-(void)textFieldDidBeginEditing:(id)textField;
-(void)_updateLabelsState;
// declared property setter: -(void)setLabelsShadowEnabled:(BOOL)enabled;
// declared property setter: -(void)setLabelsAlpha:(float)alpha;
// declared property setter: -(void)setLabelsHidden:(BOOL)hidden;
// declared property getter: -(BOOL)isLabelEditing;
// declared property setter: -(void)setLabelIsEditable:(BOOL)editable;
// declared property setter: -(void)setSubtitle:(id)subtitle;
// declared property setter: -(void)setTitle:(id)title;
-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(void)_handleCloseBoxTap;
// declared property getter: -(CGPoint)closeBoxPosition;
// declared property getter: -(BOOL)isCloseBoxShown;
-(void)setShowCloseBox:(BOOL)box animated:(BOOL)animated;
// declared property setter: -(void)setShowCloseBox:(BOOL)box;
-(void)_updateUnreadStartMarkerAnimated:(BOOL)animated;
-(void)setUnreadStartMarkerShowsProgress:(BOOL)progress animated:(BOOL)animated;
// declared property setter: -(void)setUnreadStartMarkerShowsProgress:(BOOL)progress;
// declared property setter: -(void)setUnreadStartMarkerCount:(unsigned)count;
-(void)setShowsUnreadStartMarker:(BOOL)marker animated:(BOOL)animated;
// declared property setter: -(void)setShowsUnreadStartMarker:(BOOL)marker;
-(void)setShowsUnreadIndicator:(BOOL)indicator animated:(BOOL)animated;
// declared property setter: -(void)setShowsUnreadIndicator:(BOOL)indicator;
-(void)setBadgeImage:(id)image animated:(BOOL)animated;
// declared property setter: -(void)setBadgeImage:(id)image;
-(void)_updateBadgeViewAnimated:(BOOL)animated forImageChange:(BOOL)imageChange;
// declared property getter: -(id)imageView;
-(void)resetToInitialSizeAndAngle;
-(void)setSize:(CGSize)size angle:(float)angle;
// declared property getter: -(unsigned)imageIndex;
// declared property setter: -(void)setImageIndex:(unsigned)index;
// declared property setter: -(void)setSourceView:(id)view;
-(id)hitTest:(CGPoint)test withEvent:(id)event;
-(BOOL)pointIsInsideTitle:(CGPoint)title;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end
