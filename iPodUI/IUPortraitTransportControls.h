/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import "iPodUI-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIImageView;

@interface IUPortraitTransportControls : XXUnknownSuperclass {
@private
	UIImageView* _backgroundView;
	float _filteredX;
	UIImageView* _leftDividerView;
	id _motionManagerObserver;
	UIImageView* _rightDividerView;
	int _style;
}
@property(assign, nonatomic) int style;	// @synthesize=_style
+(float)defaultHeight;
// declared property getter: -(int)style;
-(void)_layoutSubviews;
// declared property setter: -(void)setStyle:(int)style;
-(void)reloadForAdditions:(id)additions removals:(id)removals animate:(BOOL)animate;
-(id)newVolumeSlider;
-(id)disabledButtonImageForPart:(unsigned long long)part;
-(id)buttonImageForPart:(unsigned long long)part;
-(CGSize)sizeThatFits:(CGSize)fits;
-(void)layoutSubviews;
-(void)dealloc;
-(id)init;
@end

