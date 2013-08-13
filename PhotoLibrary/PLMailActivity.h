/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray;

@interface PLMailActivity : XXUnknownSuperclass {
	NSArray* _assetsToShare;
}
@property(retain, nonatomic) NSArray* assetsToShare;	// @synthesize=_assetsToShare
// declared property setter: -(void)setAssetsToShare:(id)share;
// declared property getter: -(id)assetsToShare;
-(void)prepareWithActivityItems:(id)activityItems;
-(void)performActivity;
-(id)mailComposeViewController;
-(id)activityViewController;
-(BOOL)canPerformWithActivityItems:(id)activityItems;
-(BOOL)_canPerformWithSuppliedActivityItems:(id)suppliedActivityItems;
-(BOOL)_canSendEmail;
-(id)_beforeActivity;
@end

