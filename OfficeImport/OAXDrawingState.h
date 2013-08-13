/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class OADFontScheme, OADColorMap, OADColorScheme, OAVState, OCPPackagePart, OAXTableStyleCache, NSMutableArray, NSMutableDictionary, OADBlipCollection, OAXClient, OADStyleMatrix;

__attribute__((visibility("hidden")))
@interface OAXDrawingState : XXUnknownSuperclass {
@private
	OAXClient* mClient;
	OCPPackagePart* mPackagePart;
	OADStyleMatrix* mStyleMatrix;
	OAXTableStyleCache* mTableStyleCache;
	NSMutableDictionary* mShapeIdMap;
	id mDocumentState;
	OADBlipCollection* mTgtBlipCollection;
	NSMutableDictionary* mSrcURLToTgtBlipIndexMap;
	NSMutableArray* mTgtBulletBlips;
	NSMutableDictionary* mSrcURLToTgtBulletBlipIndexMap;
	OAVState* mOavState;
	OADColorScheme* mColorScheme;
	OADColorMap* mColorMap;
	OADFontScheme* mFontScheme;
}
@property(retain) id targetBlipCollection;	// converted property
@property(retain) id fontScheme;	// converted property
@property(retain) id colorMap;	// converted property
@property(retain) id colorScheme;	// converted property
@property(retain) id oavState;	// converted property
@property(retain) id documentState;	// converted property
@property(retain) id tableStyleCache;	// converted property
@property(retain) id styleMatrix;	// converted property
@property(retain) id packagePart;	// converted property
-(id)bulletBlipRefForURL:(id)url;
-(id)blipRefForURL:(id)url;
-(id)blipRefWithURL:(id)url blipArray:(id)array blipURLtoIndexMap:(id)map;
-(void)setTargetBulletBlipArray:(id)array;
// converted property setter: -(void)setTargetBlipCollection:(id)collection;
-(void)clearTargetBlipCollection;
// converted property getter: -(id)targetBlipCollection;
// converted property setter: -(void)setFontScheme:(id)scheme;
// converted property getter: -(id)fontScheme;
// converted property setter: -(void)setColorMap:(id)map;
// converted property getter: -(id)colorMap;
// converted property setter: -(void)setColorScheme:(id)scheme;
// converted property getter: -(id)colorScheme;
// converted property setter: -(void)setOavState:(id)state;
// converted property getter: -(id)oavState;
// converted property setter: -(void)setDocumentState:(id)state;
// converted property getter: -(id)documentState;
-(void)clearDrawableForShapeIdMap;
-(void)setDrawable:(id)drawable forShapeId:(unsigned long)shapeId;
-(id)drawableForShapeId:(unsigned long)shapeId;
// converted property setter: -(void)setTableStyleCache:(id)cache;
// converted property getter: -(id)tableStyleCache;
// converted property setter: -(void)setStyleMatrix:(id)matrix;
// converted property getter: -(id)styleMatrix;
// converted property setter: -(void)setPackagePart:(id)part;
// converted property getter: -(id)packagePart;
-(id)client;
-(void)dealloc;
-(id)init;
-(id)initWithClient:(id)client;
@end

