/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */

#import "MRLoadable.h"
#import "MRRenderable.h"
#import "iLifeSlideshow-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class MRImage, NSString, MRSlideProvider, NSDictionary;

@interface MRFrame : XXUnknownSuperclass <MRLoadable, MRRenderable> {
	NSDictionary* mDescription;
	MRSlideProvider* mSlideProvider;
	MRImage* mInputImage;
	MRImage* mOutputImage;
	NSString* mFrameID;
	NSDictionary* mAttributes;
	NSDictionary* mFlattenedAttributes;
	CGSize mPixelSize;
}
@property(readonly, assign, nonatomic) BOOL isInfinite;
@property(readonly, assign, nonatomic) BOOL isAlphaFriendly;
@property(readonly, assign, nonatomic) BOOL isOpaque;
@property(readonly, assign, nonatomic) BOOL isNative3D;
@property(assign, nonatomic) CGSize pixelSize;	// @synthesize=mPixelSize
@property(retain, nonatomic) NSDictionary* attributes;	// @synthesize=mAttributes
@property(readonly, assign) NSString* frameID;	// @synthesize=mFrameID
@property(retain, nonatomic) MRImage* inputImage;	// @synthesize=mInputImage
+(id)retainedFrameWithFrameID:(id)frameID forSlideProvider:(id)slideProvider;
// declared property getter: -(CGSize)pixelSize;
// declared property getter: -(id)attributes;
// declared property getter: -(id)frameID;
// declared property getter: -(id)inputImage;
-(id)patchworkAtTime:(double)time inContext:(id)context withArguments:(id)arguments;
-(id)retainedByUserRenderedImageAtTime:(double)time inContext:(id)context withArguments:(id)arguments;
-(void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;
-(BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;
// declared property getter: -(BOOL)isInfinite;
// declared property getter: -(BOOL)isAlphaFriendly;
// declared property getter: -(BOOL)isOpaque;
// declared property getter: -(BOOL)isNative3D;
-(void)cancelLoading;
-(void)unload;
-(void)loadForTime:(double)time inContext:(id)context withArguments:(id)arguments now:(BOOL)now;
-(BOOL)isLoadedForTime:(double)time;
// declared property setter: -(void)setPixelSize:(CGSize)size;
// declared property setter: -(void)setAttributes:(id)attributes;
// declared property setter: -(void)setInputImage:(id)image;
-(BOOL)isRetainedBySlideProvider;
-(void)releaseBySlideProvider:(id)provider;
-(void)retainBySlideProvider:(id)provider;
-(void)cleanup;
-(void)finalize;
-(void)dealloc;
-(id)initWithFrameID:(id)frameID;
@end
