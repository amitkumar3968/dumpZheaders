/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "NSCopying.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSObject;
@protocol MFDeviceDriver;

__attribute__((visibility("hidden")))
@interface MFTransform : XXUnknownSuperclass <NSCopying> {
@private
	CGAffineTransform m_world;
	CGPoint m_windowOrg;
	CGPoint m_windowExt;
	CGPoint m_viewportOrg;
	CGPoint m_viewportExt;
	CGAffineTransform m_combinedTransform;
	int m_mapMode;
	NSObject<MFDeviceDriver>* m_deviceDriver;
}
-(id).cxx_construct;
-(id)copyWithZone:(NSZone*)zone;
-(CGPoint)LPtoDP:(CGPoint)dp;
-(CGPoint)DPtoLP:(CGPoint)lp;
-(int)updateTransform;
-(void)setTransformMatrix:(CGAffineTransform)matrix;
-(CGAffineTransform)getTransformMatrix;
-(int)offsetViewportOrg:(int)org :(int)arg2;
-(int)offsetWindowOrg:(int)org :(int)arg2;
-(void)setViewportExt:(CGPoint)ext;
-(void)setWindowExt:(CGPoint)ext;
-(void)setViewportOrg:(CGPoint)org;
-(void)setWindowOrg:(CGPoint)org;
-(int)setViewportOrg:(int)org :(int)arg2;
-(int)setWindowOrg:(int)org :(int)arg2;
-(int)getMapMode;
-(int)setMapMode:(int)mode;
-(CGPoint)getViewportOrg;
-(CGPoint)getWindowOrg;
-(CGPoint)getViewportExtent;
-(CGPoint)getWindowExtent;
-(int)scaleViewportExt:(int)ext :(int)arg2 :(int)arg3 :(int)arg4;
-(int)scaleWindowExt:(int)ext :(int)arg2 :(int)arg3 :(int)arg4;
-(int)setViewportExt:(int)ext :(int)arg2;
-(int)setWindowExt:(int)ext :(int)arg2;
-(BOOL)isUpsideDown;
-(void)setWorldMatrix:(CGAffineTransform)matrix;
-(CGAffineTransform)getWorldMatrix;
-(int)modifyWorldTransform:(const CGAffineTransform*)transform :(int)arg2;
-(int)setWorldTransform:(const CGAffineTransform*)transform;
-(id)initWithDriver:(id)driver;
@end
