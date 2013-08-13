/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import "VectorKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class VKFootprint, VKViewVolume;
@protocol VKCameraDelegate;

__attribute__((visibility("hidden")))
@interface VKCamera : XXUnknownSuperclass {
@private
	id<VKCameraDelegate> _delegate;
	XXStruct_taVrlB _position;
	XXStruct_$zuyAD _orientation;
	float _aspectRatio;
	float _verticalFieldOfView;
	XXStruct_TVSAjA _frustum;
	XXStruct_TVSAjA _previousFrustum;
	double _minHeight;
	double _maxHeight;
	double _maxPitch;
	double _terrainHeight;
	double _maxFarClipDistance;
	BOOL _needsUpdate;
	BOOL _updating;
	int _updateNumber;
	XXStruct_$zuyAD _viewProjectionMatrix;
	XXStruct_$zuyAD _projectionMatrix;
	XXStruct_$zuyAD _viewMatrix;
	XXStruct_$zuyAD _viewMatrixUnscaled;
	XXStruct_$zuyAD _projectionMatrixUnscaled;
	XXStruct_$zuyAD _viewProjectionMatrixUnscaled;
	XXStruct_$zuyAD _worldMatrix;
	VKViewVolume* _viewVolume;
	VKFootprint* _footprint;
	double _tanHalfHorizFOV;
	double _tanHalfVerticalFOV;
	XXStruct_taVrlB _forward;
	XXStruct_taVrlB _right;
	XXStruct_taVrlB _up;
	double _fractionOfScreenAboveFarClipPlaneAtCanonicalPitch;
	double _distanceToGroundAndFarClipPlaneIntersection;
	double _screenHeightOfGroundAndFarClipPlaneIntersection;
	BOOL _allowDatelineWraparound;
	double _canonicalPitch;
}
@property(assign, nonatomic) double canonicalPitch;	// @synthesize=_canonicalPitch
@property(assign, nonatomic) BOOL allowDatelineWraparound;	// @synthesize=_allowDatelineWraparound
@property(assign, nonatomic) double fractionOfScreenAboveFarClipPlaneAtCanonicalPitch;	// @synthesize=_fractionOfScreenAboveFarClipPlaneAtCanonicalPitch
@property(assign, nonatomic) id<VKCameraDelegate> delegate;	// @synthesize=_delegate
@property(readonly, assign, nonatomic) double screenHeightOfGroundAndFarClipPlaneIntersection;	// @synthesize=_screenHeightOfGroundAndFarClipPlaneIntersection
@property(readonly, assign, nonatomic) double distanceToGroundAndFarClipPlaneIntersection;	// @synthesize=_distanceToGroundAndFarClipPlaneIntersection
@property(readonly, assign, nonatomic) double tanHalfVerticalFOV;
@property(readonly, assign, nonatomic) double tanHalfHorizFOV;
@property(readonly, assign, nonatomic) double yaw;
@property(readonly, assign, nonatomic) double pitch;
@property(readonly, assign, nonatomic) XXStruct_taVrlB groundPoint;
@property(readonly, assign, nonatomic) XXStruct_taVrlB forwardVector;
@property(readonly, assign, nonatomic) XXStruct_taVrlB rightVector;
@property(readonly, assign, nonatomic) XXStruct_taVrlB upVector;
@property(readonly, assign, nonatomic) VKFootprint* footprint;
@property(readonly, assign, nonatomic) VKViewVolume* viewVolume;
@property(readonly, assign, nonatomic) const XXStruct_$zuyAD* worldMatrix;
@property(readonly, assign, nonatomic) const XXStruct_$zuyAD* viewMatrixUnscaled;
@property(readonly, assign, nonatomic) const XXStruct_$zuyAD* projectionMatrixUnscaled;
@property(readonly, assign, nonatomic) const XXStruct_$zuyAD* viewProjectionMatrixUnscaled;
@property(readonly, assign, nonatomic) const XXStruct_$zuyAD* viewMatrix;
@property(readonly, assign, nonatomic) const XXStruct_$zuyAD* projectionMatrix;
@property(readonly, assign, nonatomic) const XXStruct_$zuyAD* viewProjectionMatrix;
@property(assign, nonatomic) double terrainHeight;	// @synthesize=_terrainHeight
@property(assign, nonatomic) double maxPitch;	// @synthesize=_maxPitch
@property(assign, nonatomic) double maxHeight;	// @synthesize=_maxHeight
@property(assign, nonatomic) double minHeight;	// @synthesize=_minHeight
@property(readonly, assign, nonatomic) int updateNumber;	// @synthesize=_updateNumber
@property(assign, nonatomic) VKCameraState cameraState;
@property(readonly, assign, nonatomic) double farClipDistance;
@property(assign, nonatomic) float verticalFieldOfView;
@property(readonly, assign, nonatomic) float horizontalFieldOfView;
@property(assign, nonatomic) float aspectRatio;	// @synthesize=_aspectRatio
@property(assign, nonatomic) const XXStruct_$zuyAD* orientation;
@property(assign, nonatomic) XXStruct_taVrlB position;	// @synthesize=_position
@property(readonly, assign, nonatomic) XXStruct_TVSAjA frustum;	// @synthesize=_frustum
// declared property setter: -(void)setCanonicalPitch:(double)pitch;
// declared property getter: -(double)canonicalPitch;
// declared property setter: -(void)setAllowDatelineWraparound:(BOOL)wraparound;
// declared property getter: -(BOOL)allowDatelineWraparound;
// declared property getter: -(double)screenHeightOfGroundAndFarClipPlaneIntersection;
// declared property getter: -(double)distanceToGroundAndFarClipPlaneIntersection;
// declared property setter: -(void)setFractionOfScreenAboveFarClipPlaneAtCanonicalPitch:(double)canonicalPitch;
// declared property getter: -(double)fractionOfScreenAboveFarClipPlaneAtCanonicalPitch;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property getter: -(id)delegate;
// declared property getter: -(int)updateNumber;
// declared property setter: -(void)setTerrainHeight:(double)height;
// declared property getter: -(double)terrainHeight;
// declared property setter: -(void)setMaxPitch:(double)pitch;
// declared property getter: -(double)maxPitch;
// declared property getter: -(double)maxHeight;
// declared property getter: -(double)minHeight;
// declared property getter: -(float)aspectRatio;
// declared property getter: -(XXStruct_taVrlB)position;
// declared property getter: -(XXStruct_TVSAjA)frustum;
-(void)adjustClipPlanes;
-(double)depthForViewWidth:(double)viewWidth;
-(double)widthOfViewAtDepth:(double)depth;
-(XXStruct_taVrlB)groundPointFromScreenPoint:(CGPoint)screenPoint atGroundLevel:(double)groundLevel;
-(XXStruct_taVrlB)groundPointFromScreenPoint:(CGPoint)screenPoint;
-(void)updateIfNeeded;
-(void)setNeedsUpdate;
-(BOOL)isOuterWorldBoundsVisible;
-(BOOL)isWorldSpaceRectVisible:(const XXStruct_HKaJvA*)visible;
-(float)maximumStyleZForRect:(const XXStruct_HKaJvA*)rect;
-(BOOL)hasChangedState:(VKCameraState*)state;
// declared property getter: -(VKCameraState)cameraState;
// declared property setter: -(void)setCameraState:(VKCameraState)state;
// declared property getter: -(double)yaw;
// declared property getter: -(double)pitch;
// declared property getter: -(XXStruct_taVrlB)groundPoint;
// declared property getter: -(XXStruct_taVrlB)forwardVector;
// declared property getter: -(XXStruct_taVrlB)rightVector;
// declared property getter: -(XXStruct_taVrlB)upVector;
// declared property getter: -(id)footprint;
// declared property getter: -(id)viewVolume;
// declared property getter: -(const XXStruct_$zuyAD*)worldMatrix;
// declared property getter: -(const XXStruct_$zuyAD*)projectionMatrixUnscaled;
// declared property getter: -(const XXStruct_$zuyAD*)viewProjectionMatrixUnscaled;
// declared property getter: -(const XXStruct_$zuyAD*)viewMatrixUnscaled;
// declared property getter: -(const XXStruct_$zuyAD*)viewMatrix;
// declared property getter: -(const XXStruct_$zuyAD*)projectionMatrix;
// declared property getter: -(const XXStruct_$zuyAD*)viewProjectionMatrix;
// declared property getter: -(double)tanHalfVerticalFOV;
// declared property getter: -(double)tanHalfHorizFOV;
// declared property getter: -(double)farClipDistance;
// declared property getter: -(float)horizontalFieldOfView;
// declared property setter: -(void)setVerticalFieldOfView:(float)view;
// declared property getter: -(float)verticalFieldOfView;
// declared property setter: -(void)setAspectRatio:(float)ratio;
// declared property getter: -(const XXStruct_$zuyAD*)orientation;
// declared property setter: -(void)setOrientation:(const XXStruct_$zuyAD*)orientation;
// declared property setter: -(void)setPosition:(XXStruct_taVrlB)position;
-(void)_setPosition:(XXStruct_taVrlB)position;
// declared property setter: -(void)setMaxHeight:(double)height;
// declared property setter: -(void)setMinHeight:(double)height;
-(id)description;
-(void)logCameraState;
-(void)dealloc;
-(id)init;
@end

