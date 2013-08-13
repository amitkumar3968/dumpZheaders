/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "Symbolication-Structs.h"


@protocol SafeVMUProcInfoProtocol
+(int)processParentId:(int)anId;
+(BOOL)isProcessRunning:(int)running;
+(id)getProcessIds;
-(BOOL)isNative;
-(int)cpuType;
-(BOOL)isRunning;
-(BOOL)isCFM;
-(BOOL)isMachO;
-(BOOL)isApp;
-(int)compareByName:(id)name;
-(int)compare:(id)compare;
-(BOOL)isEqual:(id)equal;
-(unsigned)hash;
-(id)userAppName;
-(id)arguments;
-(id)firstArgument;
-(id)requestedAppName;
-(id)realAppName;
-(id)procTableName;
-(id)description;
-(timeval)startTime;
-(id)name;
-(int)ppid;
-(int)pid;
-(unsigned)task;
@end
