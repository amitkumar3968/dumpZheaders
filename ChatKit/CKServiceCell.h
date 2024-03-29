/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import "CKTranscriptCell.h"

@class CKDashedLineView, IMService, UILabel;

@interface CKServiceCell : CKTranscriptCell {
	IMService* _service;
	CKDashedLineView* _dashedLineView;
	UILabel* _label;
}
@property(retain, nonatomic) IMService* service;	// @synthesize=_service
// declared property getter: -(id)service;
-(void)layoutSubviews;
// declared property setter: -(void)setService:(id)service;
-(void)setEditing:(BOOL)editing animated:(BOOL)animated;
-(void)dealloc;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
@end

