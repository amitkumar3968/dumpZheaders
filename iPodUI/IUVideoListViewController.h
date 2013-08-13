/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import "IUSeasonOfferTableFooterViewDelegate.h"
#import "IUStoreCompletionListViewController.h"


@interface IUVideoListViewController : IUStoreCompletionListViewController <IUSeasonOfferTableFooterViewDelegate> {
}
-(void)seasonOfferTableFooterView:(id)view showItemsInOffer:(id)offer;
-(void)seasonOfferTableFooterView:(id)view didChangeToOfferVariant:(int)offerVariant;
-(id)newOfferTableFooterViewWithStoreCompletionOffering:(id)storeCompletionOffering;
-(BOOL)_shouldShowOfferButtonOrLabelForOffering:(id)offering;
-(BOOL)shouldLookupCompletionOffering;
@end
