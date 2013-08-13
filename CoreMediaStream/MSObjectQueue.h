/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "CoreMediaStream-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface MSObjectQueue : XXUnknownSuperclass {
@private
	sqlite3* _db;
	CFDictionaryRef _statements;
}
@property(readonly, assign) long long count;
-(void)commitObjectsWrappers:(id)wrappers;
-(void)commitErrorCountsForObjectWrappers:(id)objectWrappers;
-(void)removeObjectWrappersFromQueue:(id)queue;
-(id)smallestObjectWrappersTargetTotalSize:(long long)size maxCount:(long long)count;
-(id)objectWrappersWithZeroSizeMaxCount:(long long)zeroSizeMaxCount;
-(id)allObjectWrappersMaxCount:(long long)count;
-(id)_objectWrapperFromQueueQuery:(sqlite3_stmt*)queueQuery outSize:(long long*)size;
-(void)appendObjectWrappers:(id)wrappers;
// declared property getter: -(long long)count;
-(sqlite3_stmt*)_statementLabel:(id)label query:(const char*)query;
-(void)dealloc;
-(id)initWithPath:(id)path;
@end
