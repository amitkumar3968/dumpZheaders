/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "OfficeImport-Structs.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface PDComment : XXUnknownSuperclass {
@private
	CGPoint mPosition;
	NSString* mText;
	unsigned mAuthorId;
	NSString* mDate;
	unsigned mIndex;
}
@property(assign) unsigned index;	// converted property
@property(retain) id date;	// converted property
@property(assign) unsigned authorId;	// converted property
@property(retain) id text;	// converted property
@property(assign) CGPoint position;	// converted property
-(id).cxx_construct;
// converted property setter: -(void)setIndex:(unsigned)index;
// converted property getter: -(unsigned)index;
// converted property setter: -(void)setDate:(id)date;
// converted property getter: -(id)date;
// converted property setter: -(void)setAuthorId:(unsigned)anId;
// converted property getter: -(unsigned)authorId;
// converted property setter: -(void)setText:(id)text;
// converted property getter: -(id)text;
// converted property setter: -(void)setPosition:(CGPoint)position;
// converted property getter: -(CGPoint)position;
-(void)dealloc;
-(id)init;
@end
