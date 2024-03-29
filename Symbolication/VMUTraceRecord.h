/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "Symbolication-Structs.h"


@interface VMUTraceRecord : XXUnknownSuperclass {
	unsigned seqnum;
	unsigned type;
	unsigned long long address;
	unsigned long long argument;
	unsigned depth;
	unsigned long long* frames;
}
@property(readonly, assign) unsigned seqnum;	// converted property
@property(readonly, assign) unsigned type;	// converted property
@property(readonly, assign) unsigned long long address;	// converted property
@property(readonly, assign) unsigned long long argument;	// converted property
@property(readonly, assign) unsigned depth;	// converted property
@property(readonly, assign) unsigned long long* frames;	// converted property
// converted property getter: -(unsigned long long*)frames;
// converted property getter: -(unsigned)depth;
// converted property getter: -(unsigned long long)argument;
// converted property getter: -(unsigned long long)address;
// converted property getter: -(unsigned)type;
-(unsigned)threadID;
// converted property getter: -(unsigned)seqnum;
-(id)initWithTraceRecord:(id)traceRecord;
-(id)initWithTraceRecord:(id)traceRecord withDepth:(unsigned)depth;
-(id)initWithBacktrace:(id)backtrace forTask:(unsigned)task;
-(id)initWithLoggingRecord:(XXStruct_qFPbxC*)loggingRecord forTask:(unsigned)task;
@end

