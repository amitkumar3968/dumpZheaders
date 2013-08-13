/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OADGraphic.h"

@class OADMovie, OADOle, OADShapeGeometry;

__attribute__((visibility("hidden")))
@interface OADImage : OADGraphic {
@private
	OADShapeGeometry* mGeometry;
	OADOle* mOle;
	OADMovie* mMovie;
}
@property(retain) id movie;	// converted property
@property(retain) id ole;	// converted property
@property(retain) id geometry;	// converted property
-(void)createPictureFramePresetGeometry;
-(id)createImageFill;
-(void)setParentTextListStyle:(id)style;
// converted property setter: -(void)setMovie:(id)movie;
// converted property getter: -(id)movie;
// converted property setter: -(void)setOle:(id)ole;
// converted property getter: -(id)ole;
// converted property setter: -(void)setGeometry:(id)geometry;
// converted property getter: -(id)geometry;
-(id)imageProperties;
-(id)initWithBlipRef:(id)blipRef;
-(void)dealloc;
-(id)init;
@end

