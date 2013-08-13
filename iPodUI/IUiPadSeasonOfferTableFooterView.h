/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "iPodUI-Structs.h"

@class UILabel, IUStoreOfferVariantSegmentedControl, MPStoreCompletionOffering, IUStoreOfferDownloadActionConfiguration, IUMediaDataSource, UIButton;
@protocol IUiPadSeasonOfferTableFooterViewDelegate;

@interface IUiPadSeasonOfferTableFooterView : XXUnknownSuperclass {
	MPStoreCompletionOffering* _storeCompletionOffering;
	IUStoreOfferDownloadActionConfiguration* _downloadAction;
	UIButton* _showCompletedSeasonButton;
	UILabel* _episodesAvailableLabel;
	UILabel* _completeMySeasonLabel;
	UILabel* _originalPriceLabel;
	UIButton* _downloadButton;
	IUMediaDataSource* _dataSource;
	BOOL _showingMissingItems;
	BOOL _variantSegmentedControlActionInProgress;
@private
	IUStoreOfferVariantSegmentedControl* _variantSegmentedControl;
	CGRect _downloadButtonOriginalFrame;
	id<IUiPadSeasonOfferTableFooterViewDelegate> _delegate;
}
@property(retain, nonatomic) IUMediaDataSource* dataSource;	// @synthesize=_dataSource
@property(assign, nonatomic) id<IUiPadSeasonOfferTableFooterViewDelegate> delegate;	// @synthesize=_delegate
@property(readonly, assign, nonatomic) BOOL showingMissingItems;	// @synthesize=_showingMissingItems
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property getter: -(id)delegate;
// declared property getter: -(BOOL)showingMissingItems;
// declared property setter: -(void)setDataSource:(id)source;
// declared property getter: -(id)dataSource;
-(void)_offerSegmentViewAction:(id)action;
-(void)_purchaseButtonPressedAction:(id)action;
-(void)_showMissingItemsButtonAction:(id)action;
-(id)_newBuyLabel:(BOOL)label;
-(id)_newTitleLabel:(BOOL)label;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
-(CGSize)sizeThatFits:(CGSize)fits;
-(void)layoutSubviews;
-(BOOL)_shouldShowOfferButtonOrLabel;
-(void)drawRect:(CGRect)rect;
-(void)dealloc;
-(void)_reloadDownloadAction;
-(id)initWithStoreCompletionOffering:(id)storeCompletionOffering showingMissingItems:(BOOL)items offerVariant:(int)variant;
@end

