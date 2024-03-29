/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import "MobileTimer-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSBundle, NSMutableDictionary, NSString;

@interface RenderedHandViewFactory : XXUnknownSuperclass {
	NSBundle* _resourcesBundle;
	NSString* _imagePath;
	CGPoint _offset;
	CGSize _scale;
	CGPDFPageRef _page;
	CGSize _viewSize;
	BOOL _allowCaching;
	NSMutableDictionary* _angleCache;
	unsigned _registeredClientsCount;
}
@property(assign, nonatomic) unsigned registeredClientsCount;	// @synthesize=_registeredClientsCount
@property(readonly, assign, nonatomic) NSString* key;
@property(readonly, assign, nonatomic) BOOL allowCaching;	// @synthesize=_allowCaching
+(void)flushAllCaches;
+(void)unregisterForFactory:(id)factory;
+(id)registerForFactoryWithBundle:(id)bundle imagePath:(id)path offset:(CGPoint)offset scale:(CGSize)scale allowCaching:(BOOL)caching;
+(id)keyForBundle:(id)bundle imagePath:(id)path offset:(CGPoint)offset scale:(CGSize)scale;
// declared property setter: -(void)setRegisteredClientsCount:(unsigned)count;
// declared property getter: -(unsigned)registeredClientsCount;
// declared property getter: -(BOOL)allowCaching;
-(void)flushCache;
-(id)imageForAngle:(float)angle viewSize:(CGSize)size;
-(id)renderImageForAngle:(float)angle viewSize:(CGSize)size;
// declared property getter: -(id)key;
-(void)dealloc;
-(id)initWithBundle:(id)bundle imagePath:(id)path offset:(CGPoint)offset scale:(CGSize)scale allowCaching:(BOOL)caching;
@end

