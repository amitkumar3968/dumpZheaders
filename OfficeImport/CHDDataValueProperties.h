/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EDKeyedObject.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class OADGraphicProperties, CHDDataLabel, CHDMarker;

__attribute__((visibility("hidden")))
@interface CHDDataValueProperties : XXUnknownSuperclass <EDKeyedObject> {
@private
	CHDDataLabel* mDataLabel;
	CHDMarker* mMarker;
	unsigned mDataValueIndex;
	OADGraphicProperties* mGraphicProperties;
}
@property(retain) id marker;	// converted property
@property(retain) id graphicProperties;	// converted property
@property(assign) unsigned dataValueIndex;	// converted property
@property(retain) id dataLabel;	// converted property
+(id)dataValueProperties;
// converted property setter: -(void)setMarker:(id)marker;
// converted property getter: -(id)marker;
// converted property setter: -(void)setGraphicProperties:(id)properties;
// converted property getter: -(id)graphicProperties;
// converted property setter: -(void)setDataValueIndex:(unsigned)index;
// converted property getter: -(unsigned)dataValueIndex;
// converted property setter: -(void)setDataLabel:(id)label;
// converted property getter: -(id)dataLabel;
-(int)key;
-(void)dealloc;
-(id)shallowCopyWithIndex:(int)index;
-(id)init;
@end

