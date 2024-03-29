/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "ESDObject.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface ESDRoot : ESDObject {
@private
	NSMutableArray* mChildren;
}
-(void)writeToWriter:(OcWriter*)writer;
-(void)addChild:(id)child;
-(id)childAt:(unsigned)at;
-(unsigned)childCount;
-(EshRoot*)eshRoot;
-(void)dealloc;
-(id)initFromReader:(OcReader*)reader;
-(id)init;
-(id)initWithEshObject:(EshObject*)eshObject;
-(id)pbReferenceWithID:(unsigned long)anId;
-(id)initWithPbState:(id)pbState;
@end

