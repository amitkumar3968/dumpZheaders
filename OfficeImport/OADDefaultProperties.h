/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class OADTextBodyProperties, OADTextListStyle, OADShapeProperties;

__attribute__((visibility("hidden")))
@interface OADDefaultProperties : XXUnknownSuperclass {
@private
	OADShapeProperties* mShapeProperties;
	OADTextBodyProperties* mTextBodyProperties;
	OADTextListStyle* mTextListStyle;
}
@property(retain) id textListStyle;	// converted property
@property(retain) id textBodyProperties;	// converted property
@property(retain) id shapeProperties;	// converted property
// converted property getter: -(id)textListStyle;
// converted property setter: -(void)setTextListStyle:(id)style;
// converted property getter: -(id)textBodyProperties;
// converted property setter: -(void)setTextBodyProperties:(id)properties;
// converted property getter: -(id)shapeProperties;
// converted property setter: -(void)setShapeProperties:(id)properties;
-(void)dealloc;
-(id)initWithDefaults;
-(id)init;
@end

