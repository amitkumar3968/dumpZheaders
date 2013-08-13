/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "Symbolication-Structs.h"
#import "NSObject.h"


@protocol VMUMemoryView <NSObject>
@property(assign) unsigned long long cursor;	// converted property
-(id)stringWithEncoding:(unsigned)encoding size:(unsigned long)size;
-(BOOL)charAtOffset:(unsigned long long)offset;
-(id)stringWithEncoding:(unsigned)encoding offset:(unsigned long long)offset;
-(id)stringWithEncoding:(unsigned)encoding;
-(dyld_image_info_64)dyldImageInfo64;
-(dyld_image_info_64)dyldImageInfo;
-(nlist_64)nlist_64;
-(nlist_64)nlist;
-(long long)LEB128;
-(unsigned long long)ULEB128;
-(id)arrayOfUInt64:(unsigned long)uint64;
-(id)arrayOfUInt32:(unsigned long)uint32;
-(id)arrayOfUInt16:(unsigned long)uint16;
-(id)arrayOfUInt8:(unsigned long)uint8;
-(id)arrayOfInt64:(unsigned long)int64;
-(id)arrayOfInt32:(unsigned long)int32;
-(id)arrayOfInt16:(unsigned long)int16;
-(id)arrayOfInt8:(unsigned long)int8;
-(unsigned long long)uint64;
-(unsigned)uint32;
-(unsigned short)uint16;
-(unsigned char)uint8;
-(long long)int64;
-(int)int32;
-(short)int16;
-(BOOL)int8;
-(void)pointerAlignCursor;
-(BOOL)isCursorPointerAligned;
-(void)rewindCursor:(unsigned long long)cursor;
-(void)advanceCursor:(unsigned long long)cursor;
// converted property setter: -(void)setCursor:(unsigned long long)cursor;
// converted property getter: -(unsigned long long)cursor;
-(VMURange)addressRange;
@end

