/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "OfficeImport-Structs.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface OADFormula : XXUnknownSuperclass {
@private
	int mType;
	OADFormulaArg mArgs[3];
	NSString* mName;
}
@property(retain) id name;	// converted property
-(id).cxx_construct;
// converted property setter: -(void)setName:(id)name;
// converted property getter: -(id)name;
-(void)dealloc;
-(OADFormulaArg)argAtIndex:(unsigned)index;
-(int)type;
-(id)initWithType:(int)type arg0:(OADFormulaArg)a0 arg1:(OADFormulaArg)a1 arg2:(OADFormulaArg)a2;
@end

