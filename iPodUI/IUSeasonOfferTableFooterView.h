/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "iPodUI-Structs.h"

@class IUTVShowListStoreOfferDownloadActionConfiguration, UILabel, IUStoreOfferVariantSegmentedControl, UIColor, MPStoreCompletionOffering, IUMediaDataSource, UIButton;
@protocol IUSeasonOfferTableFooterViewDelegate;

@interface IUSeasonOfferTableFooterView : XXUnknownSuperclass {
@private
	MPStoreCompletionOffering* _storeCompletionOffering;
	IUTVShowListStoreOfferDownloadActionConfiguration* _downloadAction;
	UIButton* _showCompletedSeasonButton;
	UILabel* _showCompletedSeasonLabel;
	UILabel* _availableEpisodesLabel;
	UILabel* _completeMySeasonLabel;
	UILabel* _originalPriceLabel;
	IUMediaDataSource* _dataSource;
	UIButton* _downloadButton;
	CGRect _downloadButtonOriginalFrame;
	IUStoreOfferVariantSegmentedControl* _variantSegmentedControl;
	UIColor* _separatorColor;
	BOOL _showingMissingItems;
	id<IUSeasonOfferTableFooterViewDelegate> _delegate;
}
@property(retain, nonatomic) UIColor* separatorColor;	// @synthesize=_separatorColor
@property(retain, nonatomic) IUMediaDataSource* dataSource;	// @synthesize=_dataSource
@property(assign, nonatomic) id<IUSeasonOfferTableFooterViewDelegate> delegate;	// @synthesize=_delegate
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property getter: -(id)delegate;
// declared property setter: -(void)setSeparatorColor:(id)color;
// declared property getter: -(id)separatorColor;
// declared property setter: -(void)setDataSource:(id)source;
// declared property getter: -(id)dataSource;
-(void)_variantSegmentedControlAction:(id)action;
-(id)_completeMySeasonText;
-(void)_downloadButtonPressedAction:(id)action;
-(id)_showCompleteSeasonButtonText;
-(void)_showMissingItemsButtonAction:(id)action;
-(id)_newLabelWithFontSize:(float)fontSize bold:(BOOL)bold;
-(id)_newLabel:(BOOL)label;
-(CGSize)sizeThatFits:(CGSize)fits;
-(void)layoutSubviews;
-(BOOL)_shouldShowOfferButtonOrLabel;
-(void)drawRect:(CGRect)rect;
-(void)dealloc;
-(void)_reloadDownloadAction;
-(id)initWithStoreCompletionOffering:(id)storeCompletionOffering showingMissingItems:(BOOL)items offerVariant:(int)variant;
@end

