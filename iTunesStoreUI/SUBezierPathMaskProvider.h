/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "iTunesStoreUI-Structs.h"
#import "SUMaskProvider.h"

@class UIBezierPath;

@interface SUBezierPathMaskProvider : SUMaskProvider {
@private
	UIBezierPath* _bezierPath;
}
@property(retain, nonatomic) UIBezierPath* bezierPath;	// @synthesize=_bezierPath
// declared property setter: -(void)setBezierPath:(id)path;
// declared property getter: -(id)bezierPath;
-(CGPathRef)copyPathForMaskWithSize:(CGSize)size;
-(void)dealloc;
@end

