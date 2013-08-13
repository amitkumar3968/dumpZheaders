/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class ODIState;

__attribute__((visibility("hidden")))
@interface ODILinear : XXUnknownSuperclass {
@private
	BOOL mIsHorizontal;
	BOOL mWithConnectors;
	BOOL mStretch;
	float mPointHeight;
	float mConnectorWidth;
	float mPadding;
	BOOL mIsTextCenteredHorizontally;
	BOOL mIsTextCenteredVertically;
	unsigned mMaxPointCount;
	ODIState* mState;
}
+(void)mapUnknownWithState:(id)state;
+(BOOL)mapIdentifier:(id)identifier state:(id)state;
-(void)mapStyleFromTransition:(id)transition shape:(id)shape;
-(void)mapTransition:(id)transition pointBounds:(CGRect)bounds;
-(void)mapStyleFromPoint:(id)point shape:(id)shape;
-(void)mapPoint:(id)point bounds:(CGRect)bounds;
-(void)nextPointBounds:(CGRect*)bounds;
-(void)setLogicalBounds;
-(void)map;
-(void)setMaxPointCount:(unsigned)count;
-(void)setIsTextCenteredVertically:(BOOL)vertically;
-(void)setIsTextCenteredHorizontally:(BOOL)horizontally;
-(void)setIsTextCentered:(BOOL)centered;
-(void)setPadding:(float)padding;
-(void)setConnectorWidth:(float)width;
-(void)setPointHeight:(float)height;
-(void)setStretch:(BOOL)stretch;
-(void)setWithConnectors:(BOOL)connectors;
-(void)setIsHorizontal:(BOOL)horizontal;
-(id)initWithState:(id)state;
@end

