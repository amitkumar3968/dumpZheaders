/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface VMUMachTaskContainer : XXUnknownSuperclass {
	int _pid;
	unsigned _task;
}
@property(readonly, assign) int pid;	// converted property
@property(readonly, assign) unsigned task;	// converted property
+(id)machTaskContainerWithPid:(int)pid task:(unsigned)task;
+(id)machTaskContainerWithPid:(int)pid;
+(id)machTaskContainerWithTask:(unsigned)task;
+(id)machTaskContainer;
-(void)finalize;
-(void)dealloc;
-(id)description;
// converted property getter: -(int)pid;
// converted property getter: -(unsigned)task;
-(id)initWithPid:(int)pid task:(unsigned)task;
@end

