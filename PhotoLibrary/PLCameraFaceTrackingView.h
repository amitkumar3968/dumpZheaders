/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import "PhotoLibrary-Structs.h"
#import "PLCameraFocusView.h"


@interface PLCameraFaceTrackingView : PLCameraFocusView {
	BOOL _isInFrame;
}
@property(assign, nonatomic) BOOL isInFrame;	// @synthesize=_isInFrame
// declared property setter: -(void)setIsInFrame:(BOOL)frame;
// declared property getter: -(BOOL)isInFrame;
-(void)scaleWithZoomFactor:(float)zoomFactor;
-(void)animateToFrame:(CGRect)frame;
-(void)fadeOut;
-(void)fadeIn;
-(id)_createBoundsAnimation;
-(id)_createContentsAnimation;
-(double)fadeOutDuration;
-(void)_loadImagesWithImageSize:(CGSize*)imageSize;
-(id)init;
@end

