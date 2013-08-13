/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "PDAnimationShapeTarget.h"


__attribute__((visibility("hidden")))
@interface PDAnimationTextTarget : PDAnimationShapeTarget {
@private
	int mType;
	NSRange mRange;
}
@property(assign) NSRange range;	// converted property
@property(assign) int type;	// converted property
-(id).cxx_construct;
-(BOOL)isEqual:(id)equal;
-(unsigned)hash;
// converted property setter: -(void)setRange:(NSRange)range;
// converted property getter: -(NSRange)range;
// converted property setter: -(void)setType:(int)type;
// converted property getter: -(int)type;
-(id)init;
@end
