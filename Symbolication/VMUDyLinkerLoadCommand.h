/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "VMULoadCommand.h"

@class NSString;

@interface VMUDyLinkerLoadCommand : VMULoadCommand {
	NSString* _name;
}
@property(readonly, retain) NSString* name;	// converted property
-(void)dealloc;
-(id)description;
// converted property getter: -(id)name;
-(BOOL)isDyLinker;
-(id)initWithMemory:(id)memory;
@end

