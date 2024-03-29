/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import "UIPDFAnnotation.h"


@interface UIPDFPopupAnnotation : UIPDFAnnotation {
@private
	UIPDFAnnotation* parent;
	CGRect _adjustedBounds;
}
@property(assign, nonatomic) CGRect adjustedBounds;	// @synthesize=_adjustedBounds
@property(assign, nonatomic) UIPDFAnnotation* parent;	// @synthesize
// declared property setter: -(void)setAdjustedBounds:(CGRect)bounds;
// declared property getter: -(CGRect)adjustedBounds;
// declared property setter: -(void)setParent:(id)parent;
// declared property getter: -(id)parent;
-(int)annotationType;
-(CGRect)bounds;
-(Class)viewClass;
-(id)init;
-(id)initWithAnnotationDictionary:(CGPDFDictionaryRef)annotationDictionary;
@end

