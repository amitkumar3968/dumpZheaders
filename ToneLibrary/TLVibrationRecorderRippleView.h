/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import "ToneLibrary-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, EAGLContext;

@interface TLVibrationRecorderRippleView : XXUnknownSuperclass {
	EAGLContext* _context;
	int _backingWidth;
	int _backingHeight;
	unsigned _viewFramebuffer;
	unsigned _viewRenderbuffer;
	unsigned _shaderProgram;
	int* _uniformsLocations;
	XXStruct_n9corA* _baseRippleSectionVertices;
	void* _verticesData;
	unsigned long _verticesDataMaximumRipplesCount;
	unsigned _rippleTexture;
	BOOL _animating;
	float _fingerStillSpeed;
	float _fingerMovingSpeed;
	float _firstRippleInitialRadius;
	float _fadeOutRadius;
	float _darkness;
	BOOL _isTrackingTouch;
	CGPoint _currentTouchLocation;
	double _currentTouchStartTime;
	unsigned _numberOfRipplesForCurrentTouch;
	NSMutableArray* _ripplesContextQueue;
	NSMutableArray* _recentTouchesContextQueue;
	float _currentSpeedCoefficient;
	BOOL _needsCurrentSpeedRefresh;
	NSMutableArray* _reusableTouchContexts;
}
@property(readonly, assign, nonatomic) float _currentSpeed;
@property(assign, nonatomic) float darkness;
@property(assign, nonatomic) float fadeOutRadius;
@property(assign, nonatomic) float firstRippleInitialRadius;
@property(assign, nonatomic) float fingerMovingSpeed;
@property(assign, nonatomic) float fingerStillSpeed;
+(Class)layerClass;
-(void)touchesCancelled:(id)cancelled withEvent:(id)event;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)touchesMoved:(id)moved withEvent:(id)event;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)_touchEndedAtLocation:(CGPoint)location;
-(void)_touchMovedToLocation:(CGPoint)location;
-(void)_touchBeganAtLocation:(CGPoint)location;
-(void)_updateTouchLocationCoordinatesWithPoint:(CGPoint)point;
-(void)_stopAnimation;
-(void)_startAnimation;
-(id)_displayLinkManager;
-(void)_refresh:(id)refresh;
-(void)_enqueueReusableTouchContextObject:(id)object;
-(id)_reusableTouchContextObject;
-(void)layoutSubviews;
-(void)_drawViewWithVertices:(BOOL)vertices;
-(void)_computeBaseRippleSectionVerticesIfNeeded;
-(BOOL)_prepareVerticesDataArrayForStoringVerticesOfRipplesWithCount:(unsigned long)count;
-(void)_initializeConfigurationParameters;
-(void)_configureView;
-(void)_destroyFramebuffer;
-(BOOL)_createFramebuffer;
-(void)_tearDownView;
-(BOOL)_setUpView;
// declared property getter: -(float)_currentSpeed;
// declared property setter: -(void)setDarkness:(float)darkness;
// declared property getter: -(float)darkness;
// declared property setter: -(void)setFadeOutRadius:(float)radius;
// declared property getter: -(float)fadeOutRadius;
// declared property setter: -(void)setFirstRippleInitialRadius:(float)radius;
// declared property getter: -(float)firstRippleInitialRadius;
// declared property setter: -(void)setFingerMovingSpeed:(float)speed;
// declared property getter: -(float)fingerMovingSpeed;
// declared property setter: -(void)setFingerStillSpeed:(float)speed;
// declared property getter: -(float)fingerStillSpeed;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end

