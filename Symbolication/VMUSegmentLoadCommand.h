/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "VMULoadCommand.h"

@class NSString, NSArray;

@interface VMUSegmentLoadCommand : VMULoadCommand {
	NSString* _name;
	unsigned long long _vmaddr;
	unsigned long long _vmsize;
	unsigned long long _fileoff;
	unsigned long long _filesize;
	int _maxprot;
	int _initprot;
	unsigned _flags;
	NSArray* _sections;
}
@property(readonly, retain) NSString* name;	// converted property
@property(readonly, assign) unsigned long long vmaddr;	// converted property
@property(readonly, assign) unsigned long long vmsize;	// converted property
@property(readonly, assign) unsigned long long fileoff;	// converted property
@property(readonly, assign) unsigned long long filesize;	// converted property
@property(readonly, assign) int maxprot;	// converted property
@property(readonly, assign) int initprot;	// converted property
@property(readonly, assign) unsigned flags;	// converted property
@property(readonly, retain) NSArray* sections;	// converted property
-(void)dealloc;
-(id)description;
-(id)sectionNamed:(id)named;
// converted property getter: -(id)sections;
// converted property getter: -(unsigned)flags;
// converted property getter: -(int)initprot;
// converted property getter: -(int)maxprot;
// converted property getter: -(unsigned long long)filesize;
// converted property getter: -(unsigned long long)fileoff;
// converted property getter: -(unsigned long long)vmsize;
// converted property getter: -(unsigned long long)vmaddr;
// converted property getter: -(id)name;
-(BOOL)isSegment;
@end

