/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import "PhotoLibraryServices-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface PLIOSurfaceData : XXUnknownSuperclass {
@private
	IOSurfaceRef _surface;
	const void* _bytes;
	unsigned _length;
}
@property(readonly, assign) const void* bytes;	// converted property
@property(readonly, assign) unsigned length;	// converted property
+(id)dataWithIOSurface:(void*)iosurface;
-(void)dealloc;
// converted property getter: -(const void*)bytes;
// converted property getter: -(unsigned)length;
-(id)copyWithZone:(NSZone*)zone;
-(id)initWithIOSurface:(void*)iosurface length:(unsigned)length;
-(id)initWithIOSurface:(void*)iosurface;
@end

