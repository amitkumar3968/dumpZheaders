/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import "NSObject.h"

@class NSString, UIView;

@protocol CalloutViewControllerProtocol <NSObject>
@property(retain, nonatomic) UIView* rightView;
@property(retain, nonatomic) UIView* leftView;
@property(copy, nonatomic) NSString* calloutSubtitle;
@property(copy, nonatomic) NSString* calloutTitle;
// declared property setter: -(void)setRightView:(id)view;
// declared property getter: -(id)rightView;
// declared property setter: -(void)setLeftView:(id)view;
// declared property getter: -(id)leftView;
// declared property setter: -(void)setCalloutSubtitle:(id)subtitle;
// declared property getter: -(id)calloutSubtitle;
// declared property setter: -(void)setCalloutTitle:(id)title;
// declared property getter: -(id)calloutTitle;
-(void)beginMapsTransitionMovingSideways;
-(BOOL)canDisplayCompleteTitleWhenExpanded;
-(void)clearStarRatingAndNumberOfReviews;
-(void)setStarRating:(id)rating numberOfReviews:(unsigned)reviews sourceName:(id)name;
-(void)setRightView:(id)view animated:(BOOL)animated;
-(void)setLeftView:(id)view animated:(BOOL)animated;
@end
