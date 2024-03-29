/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "VMULoadCommand.h"


@interface VMUDySymTabLoadCommand : VMULoadCommand {
	unsigned _ilocalsym;
	unsigned _nlocalsym;
	unsigned _iextdefsym;
	unsigned _nextdefsym;
	unsigned _iundefsym;
	unsigned _nundefsym;
	unsigned _tocoff;
	unsigned _ntoc;
	unsigned _modtaboff;
	unsigned _nmodtab;
	unsigned _extrefsymoff;
	unsigned _nextrefsyms;
	unsigned _indirectsymoff;
	unsigned _nindirectsyms;
	unsigned _extreloff;
	unsigned _nextrel;
	unsigned _locreloff;
	unsigned _nlocrel;
}
@property(readonly, assign) unsigned indirectsymoff;	// converted property
@property(readonly, assign) unsigned nindirectsyms;	// converted property
// converted property getter: -(unsigned)nindirectsyms;
// converted property getter: -(unsigned)indirectsymoff;
-(BOOL)isDySymTab;
-(id)initWithMemory:(id)memory;
@end

