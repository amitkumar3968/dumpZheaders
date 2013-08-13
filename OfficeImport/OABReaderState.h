/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary;
@protocol OADColorPalette;

__attribute__((visibility("hidden")))
@interface OABReaderState : XXUnknownSuperclass {
@private
	Class mClient;
	NSMutableDictionary* mShapeIdMap;
	NSMutableDictionary* mEshContentIdMap;
	id<OADColorPalette> mColorPalette;
	NSMutableDictionary* mBlipIdMap;
}
@property(retain) id colorPalette;	// converted property
-(void)setDrawable:(id)drawable forBlipId:(int)blipId;
-(id)drawableForBlipId:(int)blipId;
// converted property setter: -(void)setColorPalette:(id)palette;
// converted property getter: -(id)colorPalette;
-(void)setEshContent:(EshContent*)content forId:(int)anId;
-(EshContent*)eshContentForId:(int)anId;
-(void)setDrawable:(id)drawable forShapeId:(int)shapeId;
-(id)drawableForShapeId:(int)shapeId;
-(Class)client;
-(void)dealloc;
-(id)initWithClient:(Class)client;
-(id)init;
@end

