/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "SUViewController.h"

@class NSBundle, UIImage, NSString;

@interface SULockoutViewController : SUViewController {
@private
	UIImage* _image;
	NSBundle* _localizationBundle;
	NSString* _messageBody;
	NSString* _messageTitle;
}
@property(retain, nonatomic) NSBundle* localizationBundle;	// @synthesize=_localizationBundle
@property(retain, nonatomic) NSString* messageTitle;	// @synthesize=_messageTitle
@property(retain, nonatomic) NSString* messageBody;	// @synthesize=_messageBody
@property(retain, nonatomic) UIImage* image;	// @synthesize=_image
// declared property setter: -(void)setMessageTitle:(id)title;
// declared property getter: -(id)messageTitle;
// declared property setter: -(void)setMessageBody:(id)body;
// declared property getter: -(id)messageBody;
// declared property getter: -(id)localizationBundle;
// declared property setter: -(void)setImage:(id)image;
// declared property getter: -(id)image;
-(void)loadView;
-(id)copyArchivableContext;
// declared property setter: -(void)setLocalizationBundle:(id)bundle;
-(void)dealloc;
-(id)init;
@end

