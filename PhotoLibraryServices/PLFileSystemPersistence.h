/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSObject;
@protocol OS_dispatch_queue;

@interface PLFileSystemPersistence : XXUnknownSuperclass {
@private
	NSObject<OS_dispatch_queue>* _writerQueue;
}
+(void)persistMetadata:(id)metadata fileURL:(id)url;
+(void)persistString:(id)string forKey:(id)key fileURL:(id)url;
+(void)persistUInt16:(unsigned short)a16 forKey:(id)key fileURL:(id)url;
+(void)persistUUIDString:(id)string forKey:(id)key fileURL:(id)url;
+(id)persistedAttributesForFileAtURL:(id)url;
+(void)persistData:(id)data forKey:(id)key fileURL:(id)url;
+(id)filesystemPersistenceBatchItemForFileAtURL:(id)url;
+(id)sharedInstance;
-(void)backgroundWriteData:(id)data toFileAtURL:(id)url;
-(void)dealloc;
-(id)init;
@end

