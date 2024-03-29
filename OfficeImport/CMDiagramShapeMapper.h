/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "CMDiagramMapper.h"

@class NSString, OADOrientedBounds;

__attribute__((visibility("hidden")))
@interface CMDiagramShapeMapper : CMDiagramMapper {
@private
	int mChildCount;
	OADOrientedBounds* mDiagramShapeBounds;
	NSString* mIdentifier;
	float mDefaultFontSize;
	int mMaxMappableTreeDepth;
	float mDefaultScale;
}
-(CGSize)sizeForNode:(id)node atIndex:(unsigned)index;
-(float)setFonSizeForChildNode:(id)childNode atIndex:(unsigned)index level:(int)level;
-(CGSize)textSizeForShapeSize:(CGSize)shapeSize;
-(void)setFonSizeForChildNode:(id)childNode atIndex:(unsigned)index;
-(void)setDefaultFonSize;
-(float)defaultFontSize;
-(void)mapChildrenAt:(id)at withState:(id)state;
-(CGRect)circumscribedBounds;
-(void)mapAt:(id)at withState:(id)state;
-(id)initWithOddDiagram:(id)oddDiagram drawingContext:(id)context orientedBounds:(id)bounds identifier:(id)identifier parent:(id)parent;
@end

