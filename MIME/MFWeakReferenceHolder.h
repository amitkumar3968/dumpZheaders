/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <XXUnknownSuperclass.h> // Unknown library

@protocol NSObject;

@interface MFWeakReferenceHolder : XXUnknownSuperclass {
	id<NSObject> _reference;
	unsigned _isZeroing : 1;
}
+(id)weakReferenceWithObject:(id)object allowNonZeroing:(BOOL)zeroing;
+(id)weakReferenceWithObject:(id)object;
-(BOOL)isZeroingWeakReference;
-(id)retainedReference;
-(void)dealloc;
-(id)_initWithObject:(id)object allowNonZeroing:(BOOL)zeroing;
-(id)init;
@end
