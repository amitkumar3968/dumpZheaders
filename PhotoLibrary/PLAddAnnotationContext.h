/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, NSMutableSet, NSMutableArray;

@interface PLAddAnnotationContext : XXUnknownSuperclass {
	NSMutableArray* _annotationsToRemoveWhenAddAnimationStarts;
	NSMutableArray* _annotationsToRemoveWhenAddAnimationEnds;
	NSMutableArray* _animationOnlyAnnotations;
	NSMutableSet* _contextSet;
}
@property(copy, nonatomic) NSArray* animationOnlyAnnotations;	// @synthesize=_animationOnlyAnnotations
@property(copy, nonatomic) NSArray* annotationsToRemoveWhenAddAnimationEnds;	// @synthesize=_annotationsToRemoveWhenAddAnimationEnds
@property(copy, nonatomic) NSArray* annotationsToRemoveWhenAddAnimationStarts;	// @synthesize=_annotationsToRemoveWhenAddAnimationStarts
+(id)contextWithPlaces:(id)places;
// declared property setter: -(void)setAnimationOnlyAnnotations:(id)annotations;
// declared property getter: -(id)animationOnlyAnnotations;
// declared property setter: -(void)setAnnotationsToRemoveWhenAddAnimationEnds:(id)removeWhenAddAnimationEnds;
// declared property getter: -(id)annotationsToRemoveWhenAddAnimationEnds;
// declared property setter: -(void)setAnnotationsToRemoveWhenAddAnimationStarts:(id)removeWhenAddAnimationStarts;
// declared property getter: -(id)annotationsToRemoveWhenAddAnimationStarts;
-(void)appendUniqueContext:(id)context;
-(void)_appendArray:(id)array toVar:(id*)var;
-(id)description;
-(void)dealloc;
-(id)initWithPlaces:(id)places;
@end

