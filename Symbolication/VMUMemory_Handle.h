/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "VMUMemory_Base.h"
#import "Symbolication-Structs.h"
#import "VMUMemory.h"

@class VMUArchitecture;

@interface VMUMemory_Handle : VMUMemory_Base <VMUMemory> {
	id<VMUMemory> _parent;
	char* _data;
	VMURange _addressRange;
	VMUArchitecture* _architecture;
}
@property(readonly, assign) VMURange addressRange;	// converted property
@property(readonly, retain) VMUArchitecture* architecture;	// converted property
-(void)dealloc;
-(id)description;
-(id)swappedView;
-(id)view;
-(id)memoryFromSubRange:(VMURange)subRange mapToAddress:(unsigned long long)address architecture:(id)architecture;
-(id)memoryAtAddress:(unsigned long long)address maxSize:(unsigned long long)size;
-(BOOL)isContiguous;
// converted property getter: -(id)architecture;
// converted property getter: -(VMURange)addressRange;
-(id)initWithParent:(id)parent addressRange:(VMURange)range architecture:(id)architecture data:(char*)data;
@end
