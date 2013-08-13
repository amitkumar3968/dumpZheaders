/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "iTunesStoreUI-Structs.h"
#import "SUGridTableViewCell.h"

@class SUDownloadCellProgressBar, UIButton;

@interface SUDownloadCell : SUGridTableViewCell {
	UIButton* _accessoryButton;
	SUDownloadCellProgressBar* _progressBar;
}
-(void)_reloadProgressBar;
-(void)_reloadAccessoryButton;
-(BOOL)_isDownloadResumable:(id)resumable;
-(BOOL)handleTap;
-(void)_accessoryButtonAction:(id)action;
-(void)setSelected:(BOOL)selected animated:(BOOL)animated;
-(void)setHighlighted:(BOOL)highlighted animated:(BOOL)animated;
-(void)setConfiguration:(id)configuration;
-(void)layoutSubviews;
-(void)reloadForStatusChange;
-(void)dealloc;
@end

