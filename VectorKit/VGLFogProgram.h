/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import "VectorKit-Structs.h"
#import "VGLProgram.h"


__attribute__((visibility("hidden")))
@interface VGLFogProgram : VGLProgram {
@private
	int _uModelViewMatrix;
	XXUnion_7lcBWC _modelViewMatrix;
	VGLColor _skyBottomColor;
	int _uSkyBottomColor;
	VGLColor _skyTopColor;
	int _uSkyTopColor;
	float _skyOffset;
	int _uSkyOffset;
	float _screenHeight;
	int _uScreenHeight;
	float _horizonDepth;
	float _fogSlope;
	int _uFogSlope;
	float _fogOffset;
	int _uFogOffset;
	UIEdgeInsets _fogSlopeInShader;
}
@property(assign, nonatomic) float fogOffset;	// @synthesize=_fogOffset
@property(assign, nonatomic) float fogSlope;	// @synthesize=_fogSlope
@property(assign, nonatomic) float screenHeight;	// @synthesize=_screenHeight
@property(assign, nonatomic) float skyOffset;	// @synthesize=_skyOffset
@property(assign, nonatomic) VGLColor skyTopColor;	// @synthesize=_skyTopColor
@property(assign, nonatomic) VGLColor skyBottomColor;	// @synthesize=_skyBottomColor
@property(assign, nonatomic) float horizonDepth;	// @synthesize=_horizonDepth
@property(assign, nonatomic) XXUnion_7lcBWC modelViewMatrix;	// @synthesize=_modelViewMatrix
// declared property getter: -(float)fogOffset;
// declared property getter: -(float)fogSlope;
// declared property getter: -(float)screenHeight;
// declared property getter: -(float)skyOffset;
// declared property getter: -(VGLColor)skyTopColor;
// declared property getter: -(VGLColor)skyBottomColor;
// declared property getter: -(float)horizonDepth;
// declared property getter: -(XXUnion_7lcBWC)modelViewMatrix;
-(void)_updateFogSlopeInShader;
// declared property setter: -(void)setFogOffset:(float)offset;
// declared property setter: -(void)setFogSlope:(float)slope;
// declared property setter: -(void)setScreenHeight:(float)height;
// declared property setter: -(void)setSkyOffset:(float)offset;
// declared property setter: -(void)setSkyTopColor:(VGLColor)color;
// declared property setter: -(void)setSkyBottomColor:(VGLColor)color;
// declared property setter: -(void)setHorizonDepth:(float)depth;
// declared property setter: -(void)setModelViewMatrix:(XXUnion_7lcBWC)matrix;
-(void)dealloc;
-(id)initWithVertName:(id)vertName fragName:(id)name;
@end

