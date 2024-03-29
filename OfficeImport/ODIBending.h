/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface ODIBending : XXUnknownSuperclass {
@private
	float mSpaceWidth;
	float mSpaceHeight;
	BOOL mWithArrows;
	float mRectHeight;
	unsigned mMaxNodeCount;
	unsigned mMaxColumnCount;
}
+(BOOL)mapIdentifier:(id)identifier state:(id)state;
+(unsigned)mapLogicalBoundsWithShapeSize:(CGSize)shapeSize spaceSize:(CGSize)size maxNodeCount:(unsigned)count maxColumnCount:(unsigned)count4 state:(id)state;
-(void)mapWithState:(id)state;
-(void)setMaxColumnCount:(unsigned)count;
-(void)setMaxNodeCount:(unsigned)count;
-(void)setRectHeight:(float)height;
-(id)initWithArrows:(BOOL)arrows;
@end

