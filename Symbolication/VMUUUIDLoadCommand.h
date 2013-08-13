/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "VMULoadCommand.h"

@class NSData;

@interface VMUUUIDLoadCommand : VMULoadCommand {
	NSData* _uuid;
}
@property(readonly, retain) NSData* uuid;	// converted property
-(void)dealloc;
-(BOOL)isUUID;
// converted property getter: -(id)uuid;
-(id)initWithMemory:(id)memory;
@end
