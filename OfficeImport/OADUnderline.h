/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class OADFill, OADStroke;

__attribute__((visibility("hidden")))
@interface OADUnderline : XXUnknownSuperclass {
@private
	OADStroke* mStroke;
	OADFill* mFill;
	unsigned char mType;
	unsigned mIsUsingTextFill : 1;
	unsigned mIsUsingTextStroke : 1;
}
@property(assign) BOOL isUsingTextStroke;	// converted property
@property(assign) BOOL isUsingTextFill;	// converted property
@property(assign) int type;	// converted property
@property(retain) id fill;	// converted property
@property(retain) id stroke;	// converted property
-(BOOL)isEqual:(id)equal;
-(unsigned)hash;
// converted property setter: -(void)setIsUsingTextStroke:(BOOL)stroke;
// converted property getter: -(BOOL)isUsingTextStroke;
// converted property setter: -(void)setIsUsingTextFill:(BOOL)fill;
// converted property getter: -(BOOL)isUsingTextFill;
// converted property setter: -(void)setType:(int)type;
// converted property getter: -(int)type;
// converted property setter: -(void)setFill:(id)fill;
// converted property getter: -(id)fill;
// converted property setter: -(void)setStroke:(id)stroke;
// converted property getter: -(id)stroke;
-(void)dealloc;
-(id)initWithStroke:(id)stroke fill:(id)fill type:(int)type;
@end

