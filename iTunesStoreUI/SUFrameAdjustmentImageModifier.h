/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "iTunesStoreUI-Structs.h"
#import "SUImageModifier.h"


@interface SUFrameAdjustmentImageModifier : SUImageModifier {
	BOOL _shouldSizeDownToFit;
	unsigned _sizingMask;
}
@property(assign, nonatomic) unsigned sizingMask;	// @synthesize=_sizingMask
@property(assign, nonatomic) BOOL shouldSizeDownToFit;	// @synthesize=_shouldSizeDownToFit
// declared property setter: -(void)setShouldSizeDownToFit:(BOOL)sizeDownToFit;
// declared property getter: -(BOOL)shouldSizeDownToFit;
// declared property setter: -(void)setSizingMask:(unsigned)mask;
// declared property getter: -(unsigned)sizingMask;
-(BOOL)scalesImage;
-(CGRect)imageFrameForImage:(id)image currentFrame:(CGRect)frame finalSize:(CGSize)size;
-(BOOL)isEqual:(id)equal;
@end

