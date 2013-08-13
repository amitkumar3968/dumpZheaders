/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import "NSObject.h"


@protocol VKCameraControllerCanvasDelegate <NSObject>
-(id)cameraController:(id)controller presentationForAnnotation:(id)annotation;
-(void)cameraController:(id)controller canEnter3DModeDidChange:(BOOL)canEnter3DMode;
-(void)cameraController:(id)controller didBecomePitched:(BOOL)pitched;
-(void)cameraControllerDidStopRegionAnimation:(id)cameraController completed:(BOOL)completed;
-(void)cameraControllerWillStartRegionAnimation:(id)cameraController;
-(void)cameraControllerDidChangeCameraState:(id)cameraController;
@end
