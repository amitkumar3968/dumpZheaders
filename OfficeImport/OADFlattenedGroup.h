/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OADDrawable.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface OADFlattenedGroup : OADDrawable {
@private
	NSMutableArray* mDrawables;
}
-(void)addDrawable:(id)drawable;
-(id)drawables;
-(void)dealloc;
-(id)init;
@end
