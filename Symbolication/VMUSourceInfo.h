/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "NSCopying.h"
#import "Symbolication-Structs.h"
#import "VMUAddressRange.h"

@class NSString;

@interface VMUSourceInfo : VMUAddressRange <NSCopying> {
	NSString* _path;
	unsigned _lineNumber;
	unsigned _fileOffset;
}
@property(readonly, retain) NSString* path;	// converted property
@property(readonly, assign) unsigned lineNumber;	// converted property
@property(readonly, assign) unsigned fileOffset;	// converted property
+(id)sourceInfoWithPath:(id)path addressRange:(VMURange)range lineNumber:(unsigned)number fileOffset:(unsigned)offset;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(id)description;
-(BOOL)isEqualToSourceInfo:(id)sourceInfo;
-(int)compare:(id)compare;
-(VMURange)addressRange;
// converted property getter: -(unsigned)fileOffset;
// converted property getter: -(unsigned)lineNumber;
-(id)fileName;
// converted property getter: -(id)path;
-(id)initWithPath:(id)path addressRange:(VMURange)range lineNumber:(unsigned)number fileOffset:(unsigned)offset;
@end
