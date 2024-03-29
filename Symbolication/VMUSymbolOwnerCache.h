/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface VMUSymbolOwnerCache : XXUnknownSuperclass {
}
+(void)setMemoryLimit:(unsigned)limit;
+(unsigned)memoryLimit;
+(void)flush;
+(void)shrinkCacheToSize:(unsigned long long)size;
+(id)symbolOwners;
+(void)removeSignature:(id)signature;
+(void)addSymbolOwner:(id)owner;
+(id)symbolOwnerForSignature:(id)signature;
+(void)initialize;
@end

