/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "OCDDelayedMediaContext.h"


__attribute__((visibility("hidden")))
@interface ESDBlipContext : XXUnknownSuperclass <OCDDelayedMediaContext> {
@private
	SsrwOOStream* mStream;
	unsigned mStreamID;
	unsigned mStartOffset;
	unsigned mByteCount;
}
-(SsrwOOStream*)stream;
-(bool)loadDelayedNode:(id)node;
-(bool)saveDelayedMedia:(id)media toFile:(id)file;
-(id)initWithOffset:(unsigned)offset byteCount:(unsigned)count stream:(SsrwOOStream*)stream streamID:(unsigned)anId;
@end

