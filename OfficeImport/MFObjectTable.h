/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface MFObjectTable : XXUnknownSuperclass {
@private
	NSMutableArray* m_objects;
}
-(int)size;
-(id)getObject:(unsigned)object;
-(int)putObject:(id)object :(unsigned)arg2;
-(unsigned)insertPos;
-(void)clear;
-(int)selectInto:(int)into :(id)arg2;
-(int)deleteObject:(unsigned)object;
-(void)dealloc;
-(id)init;
@end
