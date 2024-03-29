/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "CMDiagramShapeMapper.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CMDiagramShapeHierarchyMapper : CMDiagramShapeMapper {
@private
	NSMutableDictionary* mNodeInfoMap;
	BOOL mIsLayered;
}
-(CGSize)sizeForNode:(id)node atIndex:(unsigned)index;
-(void)mapNode:(id)node at:(id)at scale:(float)scale offsetX:(float)x offsetY:(float)y withState:(id)state;
-(void)mapLayerNodes:(id)nodes at:(id)at scale:(float)scale offsetX:(float)x offsetY:(float)y withState:(id)state;
-(void)mapChildrenAt:(id)at withState:(id)state;
-(void)mapAt:(id)at withState:(id)state;
-(void)dealloc;
-(id)initWithOddDiagram:(id)oddDiagram drawingContext:(id)context orientedBounds:(id)bounds identifier:(id)identifier parent:(id)parent;
-(ODIHRangeVector*)mapRangesForNode:(id)node;
-(void)setAbsolutePositionOfNode:(id)node parentRow:(int)row parentXOffset:(float)offset index:(int)index;
-(void)copyInfoForNode:(id)node depth:(int)depth;
-(CGRect)mapLogicalBoundsWithXRanges:(const ODIHRangeVector*)xranges;
-(CGRect)boundsForNode:(id)node;
-(id)infoForNode:(id)node;
-(void)setUpLayers;
@end

