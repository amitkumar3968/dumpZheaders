/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface OADTableRow : XXUnknownSuperclass {
@private
	NSMutableArray* mCells;
	float mHeight;
}
@property(assign) float height;	// converted property
// converted property setter: -(void)setHeight:(float)height;
// converted property getter: -(float)height;
-(id)addCell;
-(id)cellAtIndex:(unsigned)index;
-(unsigned)cellCount;
-(void)dealloc;
-(id)init;
@end

