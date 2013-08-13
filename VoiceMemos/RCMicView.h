/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

#import "VoiceMemos-Structs.h"
#import <AVFoundation/_AVMediaTypeAudio.h>

@class UIImageView;
@protocol RCMicViewDelegate;

@interface RCMicView : _AVMediaTypeAudio {
	id<RCMicViewDelegate> _delegate;
	UIImageView* _whiteGlowView;
	UIImageView* _micView;
}
@property(assign, nonatomic) id<RCMicViewDelegate> delegate;	// @synthesize=_delegate
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property getter: -(id)delegate;
-(void).cxx_destruct;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(id)initWithFrame:(CGRect)frame;
@end
