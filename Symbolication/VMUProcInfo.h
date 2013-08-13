/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "Symbolication-Structs.h"
#import "SafeVMUProcInfoProtocol.h"

@class NSString, NSArray;

@interface VMUProcInfo : XXUnknownSuperclass <SafeVMUProcInfoProtocol> {
	unsigned _task;
	BOOL _needTaskPortDealloc;
	NSString* _name;
	int _cpuType;
	NSArray* _arguments;
	NSArray* _envVars;
	NSString* _procTableName;
	NSString* _realAppName;
	NSString* _requestedAppName;
	NSString* _firstArg;
	int _pid;
	int _ppid;
	timeval _startTime;
}
@property(readonly, assign) unsigned task;	// converted property
@property(readonly, retain) NSString* name;	// converted property
@property(readonly, assign) int cpuType;	// converted property
@property(readonly, retain) NSArray* arguments;	// converted property
@property(readonly, retain) NSArray* envVars;	// converted property
@property(readonly, retain) NSString* procTableName;	// converted property
@property(readonly, retain) NSString* realAppName;	// converted property
@property(readonly, retain) NSString* requestedAppName;	// converted property
@property(readonly, assign) int pid;	// converted property
@property(readonly, assign) int ppid;	// converted property
@property(readonly, assign) timeval startTime;	// converted property
+(int)processParentId:(int)anId;
+(BOOL)isProcessRunning:(int)running;
+(id)getProcessIds;
-(unsigned)hash;
-(int)compareByUserAppName:(id)name;
-(int)compareByName:(id)name;
-(int)compare:(id)compare;
-(BOOL)isEqual:(id)equal;
-(BOOL)signal:(int)signal;
-(BOOL)terminate;
-(BOOL)isRunning;
-(BOOL)isNative;
// converted property getter: -(int)cpuType;
-(BOOL)isCFM;
-(BOOL)isMachO;
-(BOOL)isApp;
-(void)update;
// converted property getter: -(unsigned)task;
// converted property getter: -(int)ppid;
// converted property getter: -(int)pid;
-(id)description;
// converted property getter: -(id)name;
-(id)userAppName;
// converted property getter: -(id)envVars;
// converted property getter: -(id)arguments;
-(id)firstArgument;
// converted property getter: -(id)requestedAppName;
// converted property getter: -(id)realAppName;
-(id)_infoFromCommandLine:(int)commandLine;
// converted property getter: -(id)procTableName;
// converted property getter: -(timeval)startTime;
-(void)finalize;
-(void)dealloc;
-(id)initWithTask:(unsigned)task;
-(id)initWithPid:(int)pid;
-(id)init;
@end
