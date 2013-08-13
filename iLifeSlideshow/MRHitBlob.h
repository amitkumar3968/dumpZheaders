/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */

#import "iLifeSlideshow-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, MRLayer, MRLayerEffect;
@protocol MRSlidePositionSupport;

@interface MRHitBlob : XXUnknownSuperclass {
@private
	MRLayer* _outerLayer;
	MRLayerEffect* _effectLayer;
	NSString* _innerPath;
	NSString* _elementID;
	id _clientObject;
	id<MRSlidePositionSupport> _proxyForSlide;
	unsigned char _currentLayoutIndex;
}
@property(copy) NSString* elementID;	// @synthesize=_elementID
@property(assign, nonatomic) unsigned char currentLayoutIndex;	// @synthesize=_currentLayoutIndex
@property(assign) id<MRSlidePositionSupport> proxyForSlide;	// @synthesize=_proxyForSlide
@property(readonly, assign) CGSize innerResolution;
@property(readonly, assign) float aspectRatio;
@property(readonly, assign) NSString* mediaType;
@property(copy) NSString* innerPath;	// @synthesize=_innerPath
@property(retain) MRLayerEffect* effectLayer;	// @synthesize=_effectLayer
@property(retain) MRLayer* outerLayer;	// @synthesize=_outerLayer
@property(retain) id clientObject;	// @synthesize=_clientObject
// declared property setter: -(void)setCurrentLayoutIndex:(unsigned char)index;
// declared property getter: -(unsigned char)currentLayoutIndex;
// declared property setter: -(void)setProxyForSlide:(id)slide;
// declared property getter: -(id)proxyForSlide;
// declared property setter: -(void)setClientObject:(id)object;
// declared property getter: -(id)clientObject;
// declared property setter: -(void)setElementID:(id)anId;
// declared property getter: -(id)elementID;
// declared property setter: -(void)setInnerPath:(id)path;
// declared property getter: -(id)innerPath;
// declared property setter: -(void)setEffectLayer:(id)layer;
// declared property getter: -(id)effectLayer;
// declared property setter: -(void)setOuterLayer:(id)layer;
// declared property getter: -(id)outerLayer;
-(BOOL)isEqualToHitBlob:(id)hitBlob;
// declared property getter: -(id)mediaType;
// declared property getter: -(CGSize)innerResolution;
// declared property getter: -(float)aspectRatio;
@end

