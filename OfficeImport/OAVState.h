/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class OCPPackagePart, NSMutableDictionary, NSMutableSet, OAXDrawingState;

__attribute__((visibility("hidden")))
@interface OAVState : XXUnknownSuperclass {
@private
	Class mClient;
	OAXDrawingState* mOAXState;
	OCPPackagePart* mPackagePart;
	NSMutableDictionary* mShapeTypes;
	NSMutableDictionary* mShapeIdMap;
	NSMutableSet* mDualDrawables;
}
@property(retain) id packagePart;	// converted property
-(id)blipRefForURL:(id)url;
-(unsigned long)officeArtShapeIdWithVmlShapeId:(id)vmlShapeId;
-(BOOL)isDualDrawable:(id)drawable;
-(void)addDualDrawable:(id)drawable;
-(void)setDrawable:(id)drawable forVmlShapeId:(id)vmlShapeId;
-(id)drawableForVmlShapeId:(id)vmlShapeId;
-(void)setShapeType:(unsigned short)type forId:(id)anId;
-(unsigned short)shapeTypeForId:(id)anId;
// converted property setter: -(void)setPackagePart:(id)part;
// converted property getter: -(id)packagePart;
-(void)setOAXState:(id)state;
-(id)oaxState;
-(Class)client;
-(void)reset;
-(void)dealloc;
-(id)initWithClient:(Class)client packagePart:(id)part;
@end

