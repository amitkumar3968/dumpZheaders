/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "OfficeImport-Structs.h"
#import "NSCopying.h"

@class OADColor;

__attribute__((visibility("hidden")))
@interface OADStyleMatrixReference : XXUnknownSuperclass <NSCopying> {
@private
	unsigned long mMatrixIndex;
	OADColor* mColor;
}
@property(retain) id color;	// converted property
@property(assign) unsigned long matrixIndex;	// converted property
+(id)styleMatrixReferenceWithMatrixIndex:(unsigned long)matrixIndex color:(id)color;
-(void)applyToEffectsInProperties:(id)properties styleMatrix:(id)matrix;
-(void)applyToFillInProperties:(id)properties styleMatrix:(id)matrix;
-(void)applyToStrokeInProperties:(id)properties styleMatrix:(id)matrix;
// converted property setter: -(void)setColor:(id)color;
// converted property getter: -(id)color;
// converted property setter: -(void)setMatrixIndex:(unsigned long)index;
// converted property getter: -(unsigned long)matrixIndex;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(id)initWithMatrixIndex:(unsigned long)matrixIndex color:(id)color;
@end

