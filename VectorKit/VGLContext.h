/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import "VectorKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class VGLVertexArrayObject, NSMutableArray, VGLTexture, EAGLContext, VGLMesh, VGLFramebuffer, VGLProgram;

__attribute__((visibility("hidden")))
@interface VGLContext : XXUnknownSuperclass {
@private
	EAGLContext* _eaglContext;
	NSMutableArray* _renderStateStack;
	VGLFramebuffer* _framebuffer;
	XXUnion_7lcBWC _pixelSpaceMatrix;
	BOOL _depthTest;
	BOOL _stencilTest;
	BOOL _cullFace;
	BOOL _blend;
	int _blendMode;
	int _depthMode;
	float _lineWidth;
	float _clearDepth;
	VGLColor _clearColor;
	unsigned short _clearStencil;
	VGLProgram* _program;
	VGLColor _color;
	BOOL _depthMask;
	BOOL _colorMask;
	VGLMesh* _meshForUnitSquare;
	VGLMesh* _meshForUnitTexture;
	VGLMesh* _meshForUnitTextureInverted;
	unsigned _activeTexture;
	VGLTexture* _texture[2][8];
	VGLVertexArrayObject* _VAO;
	unsigned _sFactor;
	unsigned _dFactor;
	unsigned _sAlphaFactor;
	unsigned _dAlphaFactor;
	int _currentFrameNumber;
	float _averageFPS;
	float _fpsStartTime;
	float _framerateSum;
	BOOL _drawFramerateGraph;
	float _framerateGraphSamples[30];
}
@property(assign, nonatomic) unsigned activeTexture;	// @synthesize=_activeTexture
@property(readonly, assign, nonatomic) VGLMesh* meshForUnitSquare;
@property(readonly, assign, nonatomic) VGLMesh* meshForUnitTextureInverted;
@property(readonly, assign, nonatomic) VGLMesh* meshForUnitTexture;
@property(retain, nonatomic) VGLVertexArrayObject* VAO;	// @synthesize=_VAO
@property(retain, nonatomic) VGLProgram* program;	// @synthesize=_program
@property(retain, nonatomic) VGLTexture* texture2D7;
@property(retain, nonatomic) VGLTexture* texture2D6;
@property(retain, nonatomic) VGLTexture* texture2D5;
@property(retain, nonatomic) VGLTexture* texture2D4;
@property(retain, nonatomic) VGLTexture* texture2D3;
@property(retain, nonatomic) VGLTexture* texture2D2;
@property(retain, nonatomic) VGLTexture* texture2D1;
@property(retain, nonatomic) VGLTexture* texture2D0;
@property(assign, nonatomic) BOOL colorMask;	// @synthesize=_colorMask
@property(assign, nonatomic) BOOL depthMask;	// @synthesize=_depthMask
@property(assign, nonatomic) unsigned short clearStencil;	// @synthesize=_clearStencil
@property(assign, nonatomic) VGLColor clearColor;	// @synthesize=_clearColor
@property(assign, nonatomic) float clearDepth;	// @synthesize=_clearDepth
@property(assign, nonatomic) float lineWidth;	// @synthesize=_lineWidth
@property(assign, nonatomic) int depthMode;	// @synthesize=_depthMode
@property(assign, nonatomic) int blendMode;	// @synthesize=_blendMode
@property(assign, nonatomic) BOOL cullFace;	// @synthesize=_cullFace
@property(assign, nonatomic) BOOL stencilTest;	// @synthesize=_stencilTest
@property(assign, nonatomic) BOOL depthTest;	// @synthesize=_depthTest
@property(readonly, assign, nonatomic) XXUnion_7lcBWC pixelSpaceMatrix;	// @synthesize=_pixelSpaceMatrix
@property(assign, nonatomic) BOOL drawFramerateGraph;	// @synthesize=_drawFramerateGraph
@property(retain, nonatomic) VGLFramebuffer* targetFramebuffer;
@property(readonly, assign, nonatomic) EAGLContext* eaglContext;	// @synthesize=_eaglContext
@property(readonly, assign) float averageFPS;	// converted property
+(void)popContext;
+(void)pushContext:(id)context;
+(id)_contextStack;
// declared property getter: -(id)VAO;
// declared property getter: -(id)program;
// declared property getter: -(BOOL)depthMask;
// declared property getter: -(BOOL)colorMask;
// declared property getter: -(unsigned)activeTexture;
// declared property getter: -(unsigned short)clearStencil;
// declared property getter: -(VGLColor)clearColor;
// declared property getter: -(float)clearDepth;
// declared property getter: -(float)lineWidth;
// declared property getter: -(int)depthMode;
// declared property getter: -(int)blendMode;
// declared property getter: -(BOOL)cullFace;
// declared property getter: -(BOOL)stencilTest;
// declared property getter: -(BOOL)depthTest;
// declared property getter: -(XXUnion_7lcBWC)pixelSpaceMatrix;
// declared property setter: -(void)setDrawFramerateGraph:(BOOL)graph;
// declared property getter: -(BOOL)drawFramerateGraph;
// declared property getter: -(id)eaglContext;
-(BOOL)isCurrentContext;
-(void)drawFramerateGraphMethod;
-(void)dumpCounts;
-(void)endFrame;
-(void)startFrame;
// converted property getter: -(float)averageFPS;
-(BOOL)checkForError;
// declared property getter: -(id)meshForUnitTextureInverted;
// declared property getter: -(id)meshForUnitTexture;
// declared property getter: -(id)meshForUnitSquare;
-(void)drawTexture:(CGRect)texture;
-(void)fillRectAtZ:(float)z x:(float)x y:(float)y w:(float)w h:(float)h;
-(void)drawRectAtZ:(float)z x:(float)x y:(float)y w:(float)w h:(float)h;
-(void)fillRectX:(float)x y:(float)y w:(float)w h:(float)h;
-(void)drawRectX:(float)x y:(float)y w:(float)w h:(float)h;
-(void)fillRectangle:(UIEdgeInsets)rectangle;
-(void)drawRectangle:(UIEdgeInsets)rectangle;
-(void)drawUnit;
-(void)drawUnitSquare;
-(void)fillCircleX:(float)x Y:(float)y radius:(float)radius;
-(void)fillUnitCircle;
-(void)drawCircleX:(float)x Y:(float)y radius:(float)radius;
-(void)drawUnitCircle;
-(void)drawTriangles:(int)triangles nv:(int)nv pv:(float*)pv;
-(void)drawTriangleStrip:(int)strip nv:(int)nv pv:(float*)pv;
-(void)drawTriangleFan:(int)fan nv:(int)nv pv:(float*)pv;
-(void)drawSegment3DP0:(XXStruct_ZUkpeA)a0 p1:(XXStruct_ZUkpeA)a1;
-(void)drawLinesDim:(int)dim nv:(int)nv pv:(float*)pv;
-(void)drawPointsDim:(int)dim nv:(int)nv pv:(float*)pv;
-(void)drawLineStripDim:(int)dim nv:(int)nv pv:(float*)pv;
-(void)drawLineLoopDim:(int)dim nv:(int)nv pv:(float*)pv;
-(void)drawLineX0:(float)a0 y0:(float)a02 x1:(float)a1 y1:(float)a14;
-(void)drawAsteriskCX:(float)cx cy:(float)cy sz:(float)sz;
-(void)drawCrossCX:(float)cx cy:(float)cy sz:(float)sz;
-(void)_drawArrayMode:(unsigned)mode dim:(int)dim nv:(int)nv pv:(float*)pv;
-(void)_drawArrayMode:(unsigned)mode dim:(int)dim nv:(int)nv pv:(float*)pv pt:(float*)pt;
-(void)_drawCircleWithMode:(unsigned)mode X:(float)x Y:(float)y radius:(float)radius;
-(void)_blendFuncWithSFactor:(unsigned)sfactor dFactor:(unsigned)factor sAlphaFactor:(unsigned)factor3 dAlphaFactor:(unsigned)factor4;
-(void)updatePixelSpaceMatrixWithSize:(CGSize)size;
-(void)updatePixelSpaceMatrix;
-(void)setStencilFunc:(int)func ref:(unsigned)ref mask:(unsigned)mask;
-(void)setStencilOpFail:(int)fail zFail:(int)fail2 zPass:(int)pass;
-(void)doneStenciling;
-(void)stencilToInclusion;
-(void)stencilToExclusion;
-(void)captureStencilInclusion;
-(void)captureStencilExclusion;
-(void)beginCumulativeStencil;
// declared property setter: -(void)setStencilTest:(BOOL)test;
// declared property setter: -(void)setVAO:(id)vao;
// declared property getter: -(id)texture2D7;
// declared property getter: -(id)texture2D6;
// declared property getter: -(id)texture2D5;
// declared property getter: -(id)texture2D4;
// declared property getter: -(id)texture2D3;
// declared property getter: -(id)texture2D2;
// declared property getter: -(id)texture2D1;
// declared property getter: -(id)texture2D0;
// declared property setter: -(void)setTexture2D7:(id)a7;
// declared property setter: -(void)setTexture2D6:(id)a6;
// declared property setter: -(void)setTexture2D5:(id)a5;
// declared property setter: -(void)setTexture2D4:(id)a4;
// declared property setter: -(void)setTexture2D3:(id)a3;
// declared property setter: -(void)setTexture2D2:(id)a2;
// declared property setter: -(void)setTexture2D1:(id)a1;
// declared property setter: -(void)setTexture2D0:(id)a0;
-(void)_setTexture:(id)texture target:(int)target unit:(int)unit;
// declared property setter: -(void)setActiveTexture:(unsigned)texture;
// declared property setter: -(void)setClearStencil:(unsigned short)stencil;
// declared property setter: -(void)setClearColor:(VGLColor)color;
// declared property setter: -(void)setClearDepth:(float)depth;
// declared property setter: -(void)setLineWidth:(float)width;
// declared property setter: -(void)setDepthMode:(int)mode;
-(void)setColorMaskRed:(BOOL)red green:(BOOL)green blue:(BOOL)blue alpha:(BOOL)alpha;
-(void)_forceBlendMode:(int)mode;
// declared property setter: -(void)setBlendMode:(int)mode;
// declared property setter: -(void)setCullFace:(BOOL)face;
// declared property setter: -(void)setDepthTest:(BOOL)test;
-(void)resetAlphaChannel:(unsigned char)channel;
// declared property setter: -(void)setColorMask:(BOOL)mask;
// declared property setter: -(void)setDepthMask:(BOOL)mask;
// declared property setter: -(void)setProgram:(id)program;
-(void)bindRenderState:(id)state;
-(void)bindSimpleRenderState;
-(void)popRenderState;
-(void)pushRenderState;
-(id)renderState;
// declared property getter: -(id)targetFramebuffer;
// declared property setter: -(void)setTargetFramebuffer:(id)framebuffer;
-(void)clearBufferColor:(BOOL)color stencil:(BOOL)stencil depth:(BOOL)depth;
-(void)reset;
-(void)present;
-(void)_makeActive;
-(void)dealloc;
-(id)init;
@end
