/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import "PhotoLibrary-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface PLImageScrollView : XXUnknownSuperclass {
	BOOL _adjustZoomScaleAfterRotation;
}
@property(assign, nonatomic) BOOL adjustZoomScaleAfterRotation;	// @synthesize=_adjustZoomScaleAfterRotation
// declared property setter: -(void)setAdjustZoomScaleAfterRotation:(BOOL)rotation;
// declared property getter: -(BOOL)adjustZoomScaleAfterRotation;
-(void)willAnimateRotationToInterfaceOrientation:(id)interfaceOrientation;
-(void)_centerContentIfNecessary;
-(void)setFrame:(CGRect)frame;
-(id)initWithFrame:(CGRect)frame;
@end

