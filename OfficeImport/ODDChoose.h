/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "ODDLayoutObject.h"

@class ODDOtherwise, NSMutableArray;

__attribute__((visibility("hidden")))
@interface ODDChoose : ODDLayoutObject {
@private
	NSMutableArray* mWhens;
	ODDOtherwise* mOtherwise;
}
@property(retain) id otherwise;	// converted property
// converted property setter: -(void)setOtherwise:(id)otherwise;
// converted property getter: -(id)otherwise;
-(void)addWhen:(id)when;
-(id)whens;
-(void)dealloc;
-(id)init;
@end

