/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OADGraphic.h"

@class OADTextBody, OADShapeGeometry;

__attribute__((visibility("hidden")))
@interface OADShape : OADGraphic {
@private
	OADShapeGeometry* mGeometry;
	OADTextBody* mTextBody;
}
@property(retain) id textBody;	// converted property
@property(retain) id geometry;	// converted property
-(void)createPresetGeometryWithShapeType:(int)shapeType;
-(void)removeUnnecessaryOverrides;
-(void)flattenProperties;
-(void)setParentTextListStyle:(id)style;
// converted property setter: -(void)setTextBody:(id)body;
// converted property getter: -(id)textBody;
-(id)shapeProperties;
-(int)type;
// converted property getter: -(id)geometry;
// converted property setter: -(void)setGeometry:(id)geometry;
-(void)dealloc;
-(id)init;
@end

