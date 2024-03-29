/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import "ChatKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIImageView;

@interface CKProgressBar : XXUnknownSuperclass {
	UIImageView* _well;
	UIImageView* _fill;
	float _progressValue;
}
@property(assign, nonatomic) float progressValue;	// @synthesize=_progressValue
+(float)_minFillWidth;
+(float)defaultHeight;
// declared property getter: -(float)progressValue;
-(void)_stopAnimating;
-(void)_setupFillFrame;
// declared property setter: -(void)setProgressValue:(float)value;
-(void)layoutSubviews;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end

