/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "iTunesStoreUI-Structs.h"
#import "SUMaskProvider.h"


@interface SURoundedCornersMaskProvider : SUMaskProvider {
@private
	float _cornerRadius;
}
@property(assign, nonatomic) float cornerRadius;	// @synthesize=_cornerRadius
// declared property setter: -(void)setCornerRadius:(float)radius;
// declared property getter: -(float)cornerRadius;
-(CGPathRef)copyPathForMaskWithSize:(CGSize)size;
@end
