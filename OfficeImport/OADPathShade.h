/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADShade.h"
#import "OfficeImport-Structs.h"

@class OADRelativeRect;

__attribute__((visibility("hidden")))
@interface OADPathShade : OADShade {
@private
	OADRelativeRect* mFillToRect;
	BOOL mIsFillToRectOverridden;
	int mType;
	BOOL mIsTypeOverridden;
}
@property(assign) int type;	// converted property
@property(retain) id fillToRect;	// converted property
+(id)defaultProperties;
-(BOOL)isEqual:(id)equal;
-(unsigned)hash;
-(BOOL)isTypeOverridden;
// converted property setter: -(void)setType:(int)type;
// converted property getter: -(int)type;
-(BOOL)isFillToRectOverridden;
// converted property setter: -(void)setFillToRect:(id)rect;
// converted property getter: -(id)fillToRect;
-(id)initWithDefaults;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)zone;
@end
