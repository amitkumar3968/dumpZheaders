/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface PDCommentAuthor : XXUnknownSuperclass {
@private
	unsigned mId;
	NSString* mName;
	NSString* mInitials;
	unsigned mColorIndex;
}
@property(assign) unsigned colorIndex;	// converted property
@property(retain) id initials;	// converted property
@property(retain) id name;	// converted property
@property(assign) unsigned id;	// converted property
// converted property setter: -(void)setColorIndex:(unsigned)index;
// converted property getter: -(unsigned)colorIndex;
// converted property setter: -(void)setInitials:(id)initials;
// converted property getter: -(id)initials;
// converted property setter: -(void)setName:(id)name;
// converted property getter: -(id)name;
// converted property setter: -(void)setId:(unsigned)anId;
// converted property getter: -(unsigned)id;
-(void)dealloc;
-(id)init;
@end
