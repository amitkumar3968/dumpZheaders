/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UIButton;

@interface IUDownloadActionConfiguration : XXUnknownSuperclass {
@private
	id _downloadableMediaEntity;
	int _confirmationState;
}
@property(readonly, assign, nonatomic) UIButton* newButton;
@property(assign, nonatomic) int confirmationState;	// @synthesize=_confirmationState
@property(readonly, assign, nonatomic) id downloadableMediaEntity;	// @synthesize=_downloadableMediaEntity
// declared property setter: -(void)setConfirmationState:(int)state;
// declared property getter: -(int)confirmationState;
// declared property getter: -(id)downloadableMediaEntity;
-(void)cancelPendingActionForButton:(id)button;
-(void)downloadAssetForButtonPressed:(id)buttonPressed completionHandler:(id)handler;
-(void)configureButtonForButtonPressed:(id)buttonPressed animate:(BOOL)animate;
-(void)configureButton:(id)button animate:(BOOL)animate;
// declared property getter: -(id)newButton;
-(void)dealloc;
-(id)initWithMediaEntity:(id)mediaEntity;
@end
